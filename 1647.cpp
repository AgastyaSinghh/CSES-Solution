#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007

ll getMin(const vector<ll> &st, const ll i, const ll j, ll sti, ll stj, ll k = 0) {
    if (i <= sti && j >= stj) return st[k];
    if (j < sti || stj < i) return INT_MAX;
    ll c1, c2, sti1, sti2, stj1, stj2;
    sti1 = sti; stj1 = ((sti + stj + 1) / 2) - 1;
    stj2 = stj; sti2 = stj1 + 1;
    c1 = c2 = INT_MAX;
    ll mid = ((sti + stj + 1) / 2) - 1;
    c1 = getMin(st, i, j, sti, mid, (2 * k) + 1);
    c2 = getMin(st, i, j, mid + 1, stj, (2 * k) + 2);
    return min(c1, c2);
}

//main function-----------------------------------
int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, z;
    cin >> n >> z;
    vector<ll> v(n + 1);
    ll i, j;
    for (i = 1; i <= n; i++) {
        cin >> v[i];
    }
    //forming the segment tree
    ll k, sSeg;
    k = ceil(log2(n));
    ll vecSize = pow(2, k);
    for (i = n + 1; i <= vecSize; i++) v.push_back(INT_MAX);
    sSeg = 1 << (k + 1); sSeg--;
    std::vector<ll> st(sSeg, INT_MAX);
    j = sSeg - 1;
    for (i = v.size() - 1; i > 0; i--) {
        st[j] = v[i]; j--;
    }
    for (i = j; i >= 0; i--) {
        st[i] = min(st[(2 * i) + 1], st[(2 * i) + 2]);
    }
    ll res;
    //searching in segment tree
    while (z--) {
        cin >> i >> j;
        res = getMin(st, i, j, 1, v.size() - 1);
        print(res);
    }
    return 0;
}
