#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
        long long n;
        int t;
        float x,y,z;
        cin>>t;

        while(t--)
        {
            float fintot=0;
            vector<float>p;
            vector<float>q;
            vector<float>d;
            cin>>n;
            for(int i=0;i<n;i++)
            {
            cin>>x>>y>>z;
            p.push_back(x);
            q.push_back(y);
            d.push_back(z);
            }

            float tot=0;
            for(int j=0;j<n;j++)
            {
                float disc=0,reduc=0,newv,fin,percent;
                if(d[j]!=0)
                    percent=d[j]/100;
                else percent=0;
                //cout<<"\npercent "<<percent;
                    disc+=(1+percent);
                //cout<<"\ndisc "<<disc;
                    newv=p[j]*disc;
                //cout<<"\nnewv "<<newv;
                    reduc=1-percent;
                //cout<<"\nreduc "<<reduc;
                    fin=newv*reduc;
                //cout<<"\nfin "<<fin;
                tot = fin<p[j] ? (p[j]-fin):0;
                //cout<<"\ntot "<<tot;
                tot*=q[j];
                //cout<<"\ntot "<<tot;
                fintot+=tot;
                //cout<<"\nfintot ";

            }
            //printf("%0.6f\n",fintot);
            cout<<setprecision(9)<<fixed<<fintot;

        }
        return 0;
}
