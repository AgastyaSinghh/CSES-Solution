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
    ll n;
    cin >> n;
    //int c = 0;
    cout << n << " ";
    //while (n != 1 && c < 20) {
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3;
            n++;
        }
        //c++;
        cout << n << " ";
    }
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
