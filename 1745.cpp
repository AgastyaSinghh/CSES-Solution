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
    int n;
    cin >> n;
    std::vector<int> input(n);
    for (int&x : input) cin >> x;
    set<int> prev, total;
    for (int x : input) {
        prev = total;
        total.insert(x);
        for (int y : prev) {
            total.insert(x + y);
        }
    }
    print(total.size());
    for (int x : total) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
