#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T,j;
    cin >> T;
    while (T --> 0) {
        int N;
        cin >> N;
        vector<int> v(1 << N);
        for (int i = 0; i < (1 << N); i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        map<int, int> cnt;

        for (int i = 0; i < N; i++) {
            vector<int> left;
            cout << v[1] << ' ';

            for (int j = 0; j < v.size(); j++) {
//cout<<"Before "<<cnt[v[j]]<<"\n";

              if (cnt[v[j]])
                    cnt[v[j]]--;
                else {
                    left.push_back(v[j]);
               //cout<<"Pushback "<<v[j]<<"\n";
                    cnt[v[j] + v[1]]++;
              //cout<<"Increment "<<cnt[v[j] + v[1]]<<"\n\n";
                }
            }

            v = left;
        }

        cout << '\n';
    }

    return 0;
}
