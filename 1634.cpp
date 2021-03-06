#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007

//functions prototype------------------------------

vector<string> getInput();


//solve function-----------------------------------

void solve(void) {
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    vector<ll> dp(k + 1, -1);
    dp[0] = 0;
    int i;
    for (i = 0; i < n; i++) cin >> coins[i];
    for (i = 0; i < k; i++) {
        if (dp[i] != -1) {
            for (int x : coins) {
                if (i + x <= k) {
                    if (dp[i + x] == -1) {
                        dp[i + x] = dp[i] + 1;
                    }
                    else {
                        dp[i + x] = min((dp[i] + 1), (dp[i + x]));
                    }
                }
            }
        }
    }
    print(dp[k]);
}


//main function-----------------------------------
int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
