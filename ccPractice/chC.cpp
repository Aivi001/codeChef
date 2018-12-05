#include<bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
char a[3],b[3];
int cnt=0,k=0,flag=0;
cin>>s1;

for (int i = 0; i < s1.length()/ 2; i++)
		if (s1[i] != s1[s1.length() - i - 1])
			cnt++;

	if (cnt > 1 || (cnt == 0 && s1.size() % 2 == 0))
		cout << "NO" << endl;
	else
		cout << "YES" << endl;



return 0;
}
