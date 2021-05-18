/*Problem Link: https://cses.fi/problemset/task/1629*/

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

class movie {
public:
    int start, end;
    movie() {}
    movie(int a, int b) {
        start = a, end = b;
    }
};

bool cmp(movie a, movie b) {
    return a.end < b.end;
}
//solve function-----------------------------------

void solve(void) {
    int n;
    cin >> n;
    int i, x, y;
    vector<movie> m(n);
    for (i = 0; i < n; i++) {
        cin >> x >> y;
        m[i] = movie(x, y);
    }
    sort(m.begin(), m.end(), cmp);
    int c = 0, e = -1;
    for (i = 0; i < n; i++) {
        if (e <= m[i].start) {
            ++c;
            e = m[i].end;
        }
    }
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