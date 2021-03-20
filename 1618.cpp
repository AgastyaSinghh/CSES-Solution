#include<bits/stdc++.h>

/*

To get the numeber of zeros we need to get number of numbers <= given number that are divisible by five

we can also conclude no(2) >> no(5)

So we need to find the number of 5's which are divisible by all numbers upto given number;



*/

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
    ll n, div, n1;
    int count, adder;
    cin >> n;
    div = 5; adder = 1; count = 0;
    while (div <= n) {
        count += ((n / div));
        div *= 5;
    }
    print(count);
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
