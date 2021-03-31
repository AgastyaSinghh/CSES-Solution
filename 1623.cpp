#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007

ll sum(const vector<int> &v) {
    ll res = 0;
    for (int x : v) res += x;
    return res;
}

void getRes(int i, ll &res, const vector<int> &v, int n, vector<int> &v1, vector<int> &v2) {
    if (i == n) {
        res = min(res, abs(sum(v1) - sum(v2)));
        return;
    }
    v1.push_back(v[i]);
    getRes(i + 1, res, v, n, v1, v2);
    v1.pop_back();
    v2.push_back(v[i]);
    getRes(i + 1, res, v, n, v1, v2);
    v2.pop_back();
}

//main function-----------------------------------

int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> v(n), v1, v2;
    for (int &x : v) cin >> x;
    ll res = INT_MAX;
    getRes(0, res, v, n, v1, v2);
    print(res);
    return 0;
}
