// July Challenge Problem - 3 //
#include <cstdio>
#include<vector>
#include<algorithm>
using namespace std;
// Our utility Functions //
vector<long int> v;
bool myfunction (long int i,long int j) { return (v[i]<v[j]); }
// Main Starts here //
int main() {
 
	vector<long int> vcopy;
 
	long int k,n;
	long int p,it;
	long int A,B;
	long int mins,maxs;
	long int ad=0;
	long int seclast;
// --------- Variable Declarations Over ------ //	
	scanf("%ld",&n);
	scanf("%ld",&k);
	scanf("%ld",&p);
 v.resize(n);
 vcopy.resize(n);
	for(it=0;it<n;it++)
	{
	  scanf("%ld",&v[it]);
	  vcopy[it]=it;
		} 
		// Pre processing steps //
sort(vcopy.begin(),vcopy.end(),myfunction);       // sort with respect to v ( nlogn algorithm)
it=0;
ad=0;
seclast=v[vcopy[n-2]];
 
for(it=0;it<(n-1);it++)
{
	if((v[vcopy[it+1]]-v[vcopy[it]])<=k)
	{
		v[vcopy[it]]=ad;
		//it++;
	}
	else
	{
		v[vcopy[it]]=ad;
	 //     it++;
 
	      ad++;
	}
 }
 if((v[vcopy[n-1]]-seclast)<=k)
 {
 	v[vcopy[n-1]]=ad;
 }
 else
 {
 	v[vcopy[n-1]]=ad+1;
 }
 
 
 // Time for answering the queries in O(1) after O(nlogn +n) algorithms //
 while(p--)
 {
 	scanf("%ld",&A);
 	A--;
 	scanf("%ld",&B);
 	B--;
 	if(v[A]==v[B])
 	{
 		printf("Yes\n");
 	}
 	else
 	{
 		printf("No\n");
 	}
 }
	return 0;
}