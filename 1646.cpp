#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007

//main function-----------------------------------
int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, m, i, j;
    cin >> n >> m;
    vector<ll> v(n + 1), sum(n + 1, 0);
    for (i = 1; i <= n; i++) {
        cin >> v[i];
        sum[i] = sum[i - 1] + v[i];
    }
    while (m--) {
        cin >> i >> j;
        print((sum[j] - sum[i - 1]));
    }
    return 0;
}