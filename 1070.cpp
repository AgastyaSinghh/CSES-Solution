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
    list<int> v;
    if (n == 2 || n == 3) {cout << "NO SOLUTION" << endl; return;}
    v.push_back(1);
    int i = 2, t;
    stack<int> q;
    bool added;
    while (i <= n || !q.empty()) {
        added = 0;
        if (i <= n) q.push(i++);
        t = q.top();
        q.pop();
        if (abs(v.front() - t) != 1) {
            v.push_front(t);
            added = 1;
        }
        else if (abs(*(v.rbegin()) - t) != 1) {
            v.push_back(t);
            added = 1;
        }
        if (!added) {
            q.push(t);
        }
    }
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
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