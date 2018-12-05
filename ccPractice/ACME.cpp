#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int N,C,t;
	//cin>>t;
	//while(t--)
	//{
	cin>>N>>C;
	int arr[N];
	for(int i=0;i<N;i++)
	cin>>arr[i];
sort(arr,arr+N);
int lo=0,hi=arr[N-1]-arr[0],midVal;
		while(hi-lo>1)
	{
		midVal=lo+((hi-lo)/2);
	int required = 1, current_load = 0;
	      for ( int i=0; i<N; ++i ) {
	         if ( current_load + arr[i] <=midVal) {
	            // the current worker can handle it
	            current_load += arr[i];
	         }
	         else {
	            // assign next worker
	            ++required;
	            current_load = arr[i];
	         }


				 }
					 if(required<=C)
					 hi=midVal;
					 else
					 lo=midVal+1;
	      }

cout<<lo<<"\n";


	return 0;
}
