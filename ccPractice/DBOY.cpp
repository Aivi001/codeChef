    /*
    Catagory:Dynamic Programming
    Author:Khadar Basha
    Execution Time:1 sec
    */
    #include<stdio.h>
    #include<string.h>
    #define inf 9999
    #define FOR(i,n) for(i=0;i<n;i++)
    #define FORI(i,a,n) for(i=a;i<=n;i++)
    int main()
    {
    int res=0,dp[1001],hash[501],h[501],s[501],t,n,m=-1,i,j,k,z;
    scanf("%d",&t);
    while(t--)
    {
    m=-1;
    scanf("%d",&n);
    FOR(i,n)
    {
    scanf("%d",&h[i]);
    if(h[i]>m)m=h[i];
    }
    memset(dp,inf,sizeof(dp));
    memset(hash,0,sizeof(hash));
    z=0;
    FOR(i,n)
    {
    scanf("%d",&k);
    if(hash[k]==0)/*used to remove duplicates*/
    {
    s[z++]=k;
    hash[k]=1;
    }
    }
    dp[0]=0;
    FOR(i,z)
    FORI(j,0,2*m-s[i])
    /*This calculation can be done directly whenever we found an unique-element*/
    {
    if(dp[j]+1<dp[j+s[i]])dp[j+s[i]]=dp[j]+1;
/*Here we are adding the coin value and in the Dp table we are updating the total denominations for the resultant sum value*/
    }
    res=0;
    FOR(i,n)
    res+=dp[2*h[i]];
    printf("%d\n",res);

    }
    return 0;
    }

/*Explanation*/
/*This approach can be easily understood by an example
Let us take H={3,1,2} and K={1,2,3}
Max { Hi} =3 hence we need to calculate all the denominations up to 6 (i.e 2*max)
Initialize the base condition dp[0]=0;
Now pick coin 1 i.e add the sum till it does not crossed the 2*max{Hi}
So dp table will become
dp[0+1]=dp[0]+1=1;
dp[1+1]=dp[1]+1=2;
dp[2+1]=dp[2]+1=3;
dp[3+1]=dp[3]+1=4;
dp[4+1]=dp[4]+1=5;
dp[5+1]=dp[5]+1=6
Now pick coin2 i.e 2 and include this coin to get all the sums and update it whenever we find a better solution
Now dp table will becomes
dp[0+2]=dp[0]+1=1//update
dp[1+2]=dp[1]+1=2// the  total denominations to make a sum 3 are  less than the previous one so update the dp table with the optimum value i.e 2
Note: for sum 3 with coin 2 only 2 coins are needed (1+2)//
Similarly
dp[2+2]=dp[4]=dp[2]+1=2 coins needed are (2+2) //previous best is 4
dp[3+2]=dp[5]=dp[3]+1=4 coins needed are (1+1+1+2) //previous best is 5
dp[4+2]=dp[6]=dp[4]+1=3 coins needed are (2+2+2) //previous best is 6
dp[5+2]=dp[7] This sum exploits the  boundary condition because we only need the denominations only upto 2*max{Hi}
Similarly with 3rd coin the dp table will be updated as follows
dp[0+3]=dp[0]+1-->dp[3]=1 (3)//update
dp[1+3]=dp[1]+1-->dp[4]=2 (2+2 or 3+1)//update
dp[2+3]=dp[2]+1-->dp[5]=2 (3+2)//update
dp[3+3]=dp[3]+1-->dp[6]=2 (3+3)//update
Remaining sums are not needed as they are more than 2*max{Hi}*/




read(N)
for i = 1; i ≤ N; i++:
    read(H[i])
for i = 1; i ≤ N; i++:
    read(K[i])

dp[0] = 0
for j = 1; j ≤ max{2 × H[i]}; j++:
    dp[j] = 1000000000

for i = 1; i ≤ N; i++:
    for j = K[i]; j < max{2 × H[i]}; j++:
        dp[j] = min(dp[j], 1 + dp[j-K[i])

int res = 0
for i = 1; i ≤ N; i++:
    res = res + dp[2*H[i]]
println(res)

//best ;)  O(max{h}) space and  O(N*max{h}) time
