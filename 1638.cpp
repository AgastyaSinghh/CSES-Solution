#include<bits/stdc++.h>
//CSES 1638 - solued in two ways

using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007
typedef pair<int, int> pi;
//functions prototype------------------------------

//solve function-----------------------------------

void solve(void) {
    int result;
    int i, j, n;
    char t;
    cin >> n;
    std::vector<bool> v(n + 1, 0);
    std::vector<int> row(n + 1, 0);
    std::vector<std::vector<bool>> mat(n + 1, v);
    std::vector<std::vector<int>> dp(n + 1, row);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >> t;
            if (t == '*') mat[i][j] = 1;
        }
    }
    /*dp[0][1] = 1;
    dp[1][0] = 1;*/
    ll res;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (mat[i][j] == 1) {dp[i][j] = 0; continue;}
            if (i == 1 && j == 1) dp[i][j] = 1;
            else {
                res = dp[i - 1][j] + dp[i][j - 1];
                res = res % MOD;
                dp[i][j] = res;
            }
        }
    }
    //print(dp[1][1]);
    print(dp[n][n]);
}


//main function-----------------------------------
int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test = 1;
    while (test--) {
        solve();
    }
    return 0;
}

