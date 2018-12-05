/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	//long long t,i=32,alt=0,j,mi=10000000;
	long long t;
	cin>>t;

	while(t--)
	{
	unsigned long long k,val,v1,nearest,alt=0,t,i=32,j,mi=10000000,v= 1ULL<<32,val1,val11,mi1=10000000;   //this line is very important 1<<32 throws warning, because , 1 in int ( only32 bits supported)
	//cout<<v<<"\n";
	cin>>val;
	//cout<<"val "<<val<<"\n";
	while(v>val)
{
		v=v>>1;
		--i;
}
	val1=v<<1;
	k=i+1;

	//cout<<"v "<<v<<"\n";
	//cout<<"i "<<i<<"\n";

	for(j=0;j<i;j++)
	{
		v1=v+(1<<j);
		//cout<<"v1 "<<v1<<"\n";

		//nearest=abs(val-v1);
		nearest=(val>v1) ? val-v1 : v1-val;

		//cout<<"nearest "<<nearest<<"\n";
			mi=min(mi,nearest);


	}
	cout<<mi<<"\n";

	/*for(j=0;j<k;j++)
	{
		val11=val1-(1<<j);
		//cout<<"v1 "<<v1<<"\n";

		//nearest=abs(val-v1);
		nearest=(val>val11) ? val-val11 : val11-val;

		//cout<<"nearest "<<nearest<<"\n";
			mi1=min(mi1,nearest);


	}
	cout<<mi<<" "<<mi1<<"\n";
	cout<<min(mi,mi1)<<"\n";
	//while()

}
	
	return 0;
}
*/

#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cassert>
using namespace std;
constexpr unsigned int NBITS = 32 ; // #bits required to cater to numbers up to 10^9


// sanity checks
//static_assert( std::numeric_limits<unsigned int>::digits >= NBITS, "" ) ;
//static_assert( ( (1U<<(NBITS-1)) + (1U<<(NBITS-2)) ) > 1'000'000'000, "" ) ;

void fill_higher_bit( unsigned int lower_bit_pos, std::vector<unsigned int>& target_numbers )
{
    const unsigned int low_bit_value = 1U << lower_bit_pos ;
    for( unsigned int pos = lower_bit_pos + 1 ; pos < NBITS ; ++pos )
        target_numbers.push_back( ( 1U << pos ) + low_bit_value ) ;
}

std::vector<unsigned int> make_target_numbers()
{
    std::vector<unsigned int> numbers ;

    for( unsigned int lower_bit_pos = 0 ; lower_bit_pos < (NBITS-1) ; ++lower_bit_pos )
        fill_higher_bit( lower_bit_pos, numbers ) ;

    std::sort( numbers.begin(), numbers.end() ) ; // sort it to enable binary search
    return numbers ;
}

int main()
{
    //const auto start = std::clock() ;
    const std::vector<unsigned int> target_numbers = make_target_numbers() ;
    //const auto end = std::clock() ;
    //std::cout << "creating the look up table (of size " << target_numbers.size() << ") took "
      //        << (end-start) * 1000.0 / CLOCKS_PER_SEC << " milliseconds.\n" ;
    long long t,i,n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    //for( unsigned int n : { 10, 22, 4, 1000, 1'000'000, 1'000'000'000 } )
    {
        // https://en.cppreference.com/w/cpp/algorithm/lower_bound
        const auto next = std::lower_bound( target_numbers.begin(), target_numbers.end(), n ) ;

        if( next == target_numbers.begin() ) std::cout << *next - n << '\n' ;
        else
        {
            const auto prev = next-1 ;
            std::cout << std::min( *next - n, n - *prev ) << '\n' ;
        }
    }

}
return 0;
}
