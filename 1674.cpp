/*


    Problem Link: https://cses.fi/problemset/task/1674


            ┏━━━┓╋╋╋╋╋╋╋╋┏┓╋╋╋╋╋╋╋╋┏━━━┓╋╋╋╋╋╋┏┓
            ┃┏━┓┃╋╋╋╋╋╋╋┏┛┗┓╋╋╋╋╋╋╋┃┏━┓┃╋╋╋╋╋╋┃┃
            ┃┃╋┃┣━━┳━━┳━┻┓┏╋┓╋┏┳━━┓┃┗━━┳┳━┓┏━━┫┗━┓
            ┃┗━┛┃┏┓┃┏┓┃━━┫┃┃┃╋┃┃┏┓┃┗━━┓┣┫┏┓┫┏┓┃┏┓┃
            ┃┏━┓┃┗┛┃┏┓┣━━┃┗┫┗━┛┃┏┓┃┃┗━┛┃┃┃┃┃┗┛┃┃┃┃
            ┗┛╋┗┻━┓┣┛┗┻━━┻━┻━┓┏┻┛┗┛┗━━━┻┻┛┗┻━┓┣┛┗┛
            ╋╋╋╋┏━┛┃╋╋╋╋╋╋╋┏━┛┃╋╋╋╋╋╋╋╋╋╋╋╋┏━┛┃
            ╋╋╋╋┗━━┛╋╋╋╋╋╋╋┗━━┛╋╋╋╋╋╋╋╋╋╋╋╋┗━━┛

*/

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
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;

//functions prototype------------------------------

void noOfSub(int node, const vvi &sub, vi &ns) {
    if (sub[node].size() == 0) {
        ns[node] = 0;
        return;
    }
    int x = 0;
    for (int child : sub[node]) {
        noOfSub(child, sub, ns);
        x += (1 + ns[child]);
    }
    //cout << node << ": " << x << endl;
    ns[node] = x;
    return;
}

//solve function-----------------------------------

void solve(void) {
    int n;
    cin >> n;
    vvi sub(n);
    int i, j;
    for (i = 1; i < n; i++) {
        cin >> j;
        sub[j - 1].push_back(i);
    }
    vi ns(n, 0);
    noOfSub(0, sub, ns);
    for (int x : ns) {
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
    // cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
