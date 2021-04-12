#include<bits/stdc++.h>


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
    int m, n;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, -1));
    int i, j;
    char c;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> c;
            if (c == '.') v[i][j] = 0;
        }
    }
    int k = 0;
    stack<pair<int, int>> stk;
    pair<int, int> p;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (v[i][j] == 0) {
                k++;
                stk.push({i, j});
                v[i][j] = k;
                while (!stk.empty()) {
                    p = stk.top();
                    stk.pop();
                    //up
                    if (p.second >= 1) {
                        if (v[p.first][p.second - 1 ] == 0) {
                            v[p.first][p.second - 1 ] = k;
                            stk.push({p.first, p.second - 1});
                        }
                    }
                    //down
                    if (p.second < m - 1) {
                        if (v[p.first][p.second + 1 ] == 0) {
                            v[p.first][p.second + 1 ] = k;
                            stk.push({p.first, p.second + 1});
                        }
                    }
                    //left
                    if (p.first >= 1) {
                        if (v[p.first - 1][p.second] == 0) {
                            v[p.first - 1][p.second] = k;
                            stk.push({p.first - 1, p.second});
                        }
                    }
                    //right
                    if (p.first < n - 1) {
                        if (v[p.first + 1][p.second] == 0) {
                            v[p.first + 1][p.second] = k;
                            stk.push({p.first + 1, p.second});
                        }
                    }
                }
            }
        }
    }
    print(k);
    /*for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (v[i][j] == -1) v[i][j] = 0;
            cout << v[i][j] << " ";
        } cout << endl;
    }*/
    return 0;
}