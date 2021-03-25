#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007
typedef std::vector<int> vi;
//solve function-----------------------------------
void solve() {
    int n, k, i, res, j, r1, r2, left;
    cin >> n >> k;
    vi price(n + 1, 0);
    vi pages(n + 1, 0);
    for (i = 1; i <= n; i++) cin >> price[i];
    for (i = 1; i <= n; i++) cin >> pages[i];
    std::vector<vi> dp(n + 1, vector<int> (k + 1, 0));
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= k; j++) {
            r1 = dp[i - 1][j];
            left = j - price[i];
            r2 = 0;
            if (left >= 0) {
                r2 = dp[i - 1][left] + pages[i];
            }
            dp[i][j] = max(r1, r2);
        }
    }
    print(dp[n][k]);
}
//main function-----------------------------------
int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test = 1;
    //cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}