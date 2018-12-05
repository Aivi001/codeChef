#include<bits/stdc++.h>
using namespace std;
const long long MX = (1<<17);
long long T , n , D;
vector < pair < long long , long long > > v[MX];
int main(){
    cin>>T;
    while(T--){
        scanf("%lld %lld",&n,&D);
        for(long long j = 1 ; j <= D ; j++) v[j].clear();
        long long ans = 0 , demand = 0;
        for(long long j = 1 ; j <= n ; j++){
            long long a , b , c;
            scanf("%lld %lld %lld",&a,&b,&c);
            v[a].push_back({c , b});
        }
        multiset < pair < long long , long long > > S;
        for(long long day = 1 ; day <= D ; day++){
            for(auto pp : v[day]){
                demand += pp.second;
                S.insert(pp);
            }
            long long rem = D - day + 1;
		cout<<"D "<<D<<"day "<<day<<"REM "<<rem<<"\n";
            long long sub = demand - rem;
            cout<<"SUB "<<sub<<"\n";
            demand = min(demand , rem);
            cout<<"DEM "<<demand<<"\n";
            while(sub > 0){
                auto small = *S.begin(); S.erase(S.begin());
                if(small.second <= sub){
                    ans += 1ll * small.first * small.second;
                    sub -= small.second;
                    continue;
                }
                else{
                    ans += 1ll * small.first * sub;
                    small.second -= sub;
                    sub = 0;
                    if(small.second)
                        S.insert(small);
                    continue;
                }
            }
            if(S.size()){
                auto big = *--S.end(); S.erase(--S.end());
                big.second--;
                if(big.second) S.insert(big);
                --demand;
            }

        }
      //  puts("!");
        cout<<ans<<endl;
    }

}
