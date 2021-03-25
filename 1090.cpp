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
    int n, x, t, i;
    cin >> n >> x;
    multiset<int>s;
    for (i = 0; i < n; i++) {
        cin >> t;
        s.insert(t);
    }
    t = 0;
    while (s.size() > 1) {
        auto it1 = s.begin();
        i = x - *it1;
        auto it = s.upper_bound(i);
        s.erase(it1);
        if (i < *s.begin()) {t++; continue;}
        if (it != s.begin()) it--;
        //cout<<""

        s.erase(it);
        t++;
    }
    if (s.size()) t++;
    print(t);
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