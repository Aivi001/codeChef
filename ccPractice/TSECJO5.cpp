#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, k, i, j;
    cin >> t;
    while(t--){
        cin >> k >> n;
        vector < int > v(n + 1), solution(n + 1, -1);
        priority_queue < int,vector<int>,greater < int > > que;
        for(i = 1; i <= n; i++)
            cin >> v[i];
        for(i = 1; i <= n; i++){
            if(que.size() < k){
                que.push(v[i]);
                if(que.size() == k)
                    solution[i] = que.top();
            }
            else{
                if(v[i] > que.top()){
                    que.pop();
                    que.push(v[i]);
                }
                solution[i] = que.top();
            }
        }
        for(i = 1; i <= n; i++)
            cout << solution[i] << " ";
        cout << "\n";
    }
    return 0;
}

//can be optimised by storing ans in a variable instead of soln vector and not creating a vector to store the array val (using an int var for that also:))
