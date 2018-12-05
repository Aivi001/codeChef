            #include <bits/stdc++.h>
             
            using namespace std;
             
            const int MaxN = 1e5 + 10;
             
            int d[MaxN], t[MaxN], s[MaxN];
             
            void solve() {
                int n, D;
                scanf("%d%d", &n, &D);
                assert (1 <= n && n <= 1e5);
                assert (1 <= D && D <= 1e5);
                vector < pair < int, int > > all;
                long long total = 0;
                for (int i = 0; i < n; ++i) {
                    scanf("%d%d%d", &d[i], &t[i], &s[i]);
                    assert (1 <= d[i] && d[i] <= D);
                    assert (1 <= t[i] && t[i] <= D);
                    assert (1 <= s[i] && s[i] <= 1e5);
                    all.push_back({s[i], i});
                    total += 1LL * s[i] * t[i];
                }
                sort(all.begin(), all.end());
                reverse(all.begin(), all.end());
                set < int > st;
                for (int i = 1; i <= D; ++i) {
                    st.insert(st.end(), i);
                }
                for (auto tra : all) {
                    int who = tra.second;
                    while (t[who] --> 0) {
                        auto it = st.lower_bound(d[who]);
                        if (it == st.end()) {
                            break;
                        }
                        st.erase(it);
                        total -= s[who];
                    }
                }
                cout << total << '\n';
            }
             
            int main() {
                int t;
                cin >> t;
                assert (t >= 1 && t <= 10);
                while (t --> 0) {
                    solve();
                }
                return 0;
            }
                 