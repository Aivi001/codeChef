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
                float disc=0,reduc=0.0,newv,fin=0.0,percent;
                float tot=0;
            cin>>x>>y>>z;
            //p.push_back(x);
            //q.push_back(y);
            //d.push_back(z);
            if(z!=0)
                percent=(100+z)/100;
            else percent=0;
            //cout<<"\npercent "<<percent;

            //disc+=(1+percent);
            //cout<<"\ndisc "<<disc;
            newv=x*percent;
            //cout<<"\nnewv "<<newv;
            reduc=(100-z)/100;
            //cout<<"\nreduc "<<reduc;

            fin=newv*reduc;
            //cout<<"\nfin "<<fin;
            tot = fin<x? (x-fin):0;
            //cout<<"\ntot "<<tot;
            tot*=y;
            //cout<<"\ntot "<<tot;
            fintot+=tot;
            //cout<<"\nfintot ";
                }
            //printf("%0.6f\n",fintot);
            cout<<setprecision(9)<<fixed<<fintot<<"\n";

        }
}
