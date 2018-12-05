#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <bitset> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <utility> 
#include <sstream> 
#include <iostream> 
#include <iomanip> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <cctype> 
#include <string> 
#include <cstring> 
#include <ctime> 
#include <fstream> 
#include <cassert> 
using namespace std; 
 
#define ll long long 
#define gc getchar
#define pc putchar 
 
int a[10005];
multiset<int> b;
vector<int> c;
pair<int,int> d[10005];
 
int main() {
#ifdef amit 
	freopen("in.txt","r",stdin); 
	freopen("out.txt","w",stdout); 
	freopen("err.txt","w",stderr); 
#endif
	ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t-->0){ 
		int n,k1,k2,k3;
		cin>>n>>k1>>k2>>k3;
		for(int i=0; i<n; i++) {
			cin>>a[i];
			d[i].second = i;
		}
		d[0].first = a[0];
		for(int i=1; i<n; i++) {
			d[i].first = max(d[i-1].first+a[i],a[i]);
		}
		sort(d,d+n,greater<pair<int,int> >());
		b.clear();
		for(int i=0; i<n; i++) {
			if(b.size()>=k3 && d[i].first<=*b.begin()) break;
			int t = 0;
			for(int j=d[i].second; j>=0; j--) {
				t+=a[j];
				if(b.size()<k3 || *b.begin()<t) {
					b.insert(t);
					if(b.size()>k3) b.erase(b.begin());
				}
			}
		}
		c.clear();
		for(multiset<int>::reverse_iterator it = b.rbegin(); it!=b.rend(); it++) c.push_back(*it);
		cout<<c[k1-1]<<" "<<c[k2-1]<<" "<<c[k3-1]<<endl;
	}
	return 0;
} 
Comments 
