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
    int n;
    cin >> n;
    std::vector<ll> v(n + 1, INT_MAX);
    v[0] = 0;
    int i, num, digit;
    for (i = 1; i < 10; i++) v[i] = 1;
    for (i = 10; i <= n; i++) {
        num = i;
        while (num) {
            digit = num % 10;
            if (digit) {
                v[i] = min(v[i], v[i - digit] + 1);
            }
            num /= 10;
        }
    }
    print(v[n]);
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