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
    string s;
    cin >> s;
    std::vector<int> v(26, 0);
    for (char c : s) {
        v[c - 'A']++;
    }
    int c = 0;
    for (int x : v) {
        if (x % 2)c++;
    }
    if (c > 1) {
        print("NO SOLUTION");
        return 0;
    }
    int z; c = -1;
    for (int x = 0; x < 26; x++) {
        if (v[x] % 2) c = x;
        v[x] /= 2;
        z = v[x];
        while (z--) {
            cout << char(x + 'A');
        }
    }
    if (c != -1)cout << char(c + 'A');
    for (int x = 25; x >= 0; x--) {
        while (v[x]--) {
            cout << char(x + 'A');
        }
    }
    return 0;
}