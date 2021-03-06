#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define forup(i,a,b) for(int i=(a);i<=(b);i++)
#define rdarr(a,n) rep(i,n) cin >> a[i];
#define tcsolve() int tcs; cin >> tcs; forup(tc, 1, tcs) solve();
 
// dp[i] true if a subset of a has xor value j
bool dp[1024];
 
void solve() {
	memset(dp, 0, sizeof dp);
	int n, k, ans;
	cin >> n >> k;
	int a[n];
	rdarr(a, n);
	// xor value of 0 is always possible
	dp[0] = true;
	rep (i, n)
		rep (j, 1024)
			// If val of j is possible, so is j^a[i]
			dp[j^a[i]] |= dp[j];
	ans = k;
	rep (i, 1024)
		if (dp[i])
			ans = max(ans, k^i);
	cout << ans << endl;
}
 
int main () {
	std::ios::sync_with_stdio(false);
	tcsolve();
	return 0;
}
