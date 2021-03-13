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
    int n, k, i;
    cin >> n >> k;
    std::vector<int> coins(n);
    std::vector<long> v(k + 1, 0);
    v[0] = 1;
    for (i = 0; i < n; i++) {
        cin >> coins[i];
    }
    for (i = 0; i < k; i++) {
        if (v[i] != 0) {
            for (int x : coins) {
                if (i + x <= k) {

                    v[i + x] = (v[i] + v[i + x]) % MOD;
                }
            }
        }
        //cout << v[i] << " ";
    }
    print(v[k]);
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

/*
//main function-----------------------------------
int main() {
    ll test = 1;
    cin >> test;
    for (ll x = 0; x < test; x++) {
        cout << "Case #" << x + 1 << ": ";
        solve();
    }
    return 0;
}

vector<string> getInput() {
    vector<string> r;
    string s, str;

    getline(cin, s);
    str = "";
    for (char c : s) {
        if (c == ' ') {
            r.push_back(str);
            str = "";
        }
        else str = str + c;
    }
    r.push_back(str);
    return r;
}
*/