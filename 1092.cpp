#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007
void solve() {
    ll n;
    cin >> n;
    ll tSum = n * (n + 1) / 2;
    //print(tSum);
    if (tSum % 2) {print("NO"); return;}
    ll target = tSum / 2;
    ll k = 0;
    ll z = n;
    vector<bool> v(n + 1, 0);
    while (z <= target) {
        if (z == 0) {print("NO"); return;}
        target -= z;
        v[z--] = 1;
        k++;
    }
    if (target) {
        if (v[target] == 0) {
            v[target] = 1; k++;
        } else {
            while (z > 0) {
                if (target == 0) break;
                if (z <= target) {
                    target -= z;
                    v[z--] = 1;
                    k++;
                }
            }
            if (target) {print("NO"); return;}
        }
    }
    print("YES");
    print(k);
    for (int x = 1; x <= n; x++) {
        if (v[x] == 1) cout << x << " ";
    }
    cout << endl;
    print(n - k);
    for (int x = 1; x <= n; x++) {
        if (v[x] == 0) cout << x << " ";
    }
    return;
}
//main function-----------------------------------
int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}