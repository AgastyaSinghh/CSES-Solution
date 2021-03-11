#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007
typedef vector<int> vi;
//functions prototype------------------------------

vector<string> getInput();


//solve function-----------------------------------

void solve(void) {
    int n, i;
    cin >> n;
    ll c = 0;
    int prev, cur;
    cin >> cur;
    for (i = 1; i < n; i++) {
        prev = cur;
        cin >> cur;
        if (cur < prev) {
            c += (prev - cur);
            cur = prev;
        }

    }
    /*
    --------------------------------------------------------------

                        //method 2
    --------------------------------------------------------------

    vi v(n);
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            c += (v[i - 1] - v[i]);
            v[i] += (v[i - 1] - v[i]);
        }
    }

    */
    print(c);
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