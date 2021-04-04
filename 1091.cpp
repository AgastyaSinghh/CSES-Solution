#include<bits/stdc++.h>

/*

        Problem Statement: https://cses.fi/problemset/task/1091/

                                                                    */


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
    int m, t, n;
    cin >> n >> m;
    multiset <int> tkt;
    while (n--) {
        cin >> t;
        tkt.insert(t);
    }
    while (m--) {
        cin >> t;
        auto it = tkt.upper_bound(t);
        if (it == tkt.begin()) {
            print(-1);
        } else {
            it--;
            print((*it));
            tkt.erase(it);
        }
    }
    return 0;
}
