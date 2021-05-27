/*

Problem Link: https://cses.fi/problemset/task/1754


┏━━━┓╋╋╋╋╋╋╋╋┏┓╋╋╋╋╋╋╋╋┏━━━┓╋╋╋╋╋╋┏┓
┃┏━┓┃╋╋╋╋╋╋╋┏┛┗┓╋╋╋╋╋╋╋┃┏━┓┃╋╋╋╋╋╋┃┃
┃┃╋┃┣━━┳━━┳━┻┓┏╋┓╋┏┳━━┓┃┗━━┳┳━┓┏━━┫┗━┓
┃┗━┛┃┏┓┃┏┓┃━━┫┃┃┃╋┃┃┏┓┃┗━━┓┣┫┏┓┫┏┓┃┏┓┃
┃┏━┓┃┗┛┃┏┓┣━━┃┗┫┗━┛┃┏┓┃┃┗━┛┃┃┃┃┃┗┛┃┃┃┃
┗┛╋┗┻━┓┣┛┗┻━━┻━┻━┓┏┻┛┗┛┗━━━┻┻┛┗┻━┓┣┛┗┛
╋╋╋╋┏━┛┃╋╋╋╋╋╋╋┏━┛┃╋╋╋╋╋╋╋╋╋╋╋╋┏━┛┃
╋╋╋╋┗━━┛╋╋╋╋╋╋╋┗━━┛╋╋╋╋╋╋╋╋╋╋╋╋┗━━┛






╭━╮╱╱╱╱╱╱╭╮╱╱╱╭╮╭╮╱╱╱╭━━╮╱╱╱╱╭━┳╮╱╱╱╱╱╱╭━━┳╮╱╱╱╱╭╮
┃╭╋┳┳━┳━╮┃╰┳━┳╯┃┃╰┳┳╮┃╭╮┣━┳━╮┃━┫╰┳┳┳━╮╱┃━━╋╋━┳┳━┫╰╮
┃╰┫╭┫┻┫╋╰┫╭┫┻┫╋┃┃╋┃┃┃┃┣┫┃╋┃╋╰╋━┃╭┫┃┃╋╰╮┣━━┃┃┃┃┃╋┃┃┃
╰━┻╯╰━┻━━┻━┻━┻━╯╰━╋╮┃╰╯╰╋╮┣━━┻━┻━╋╮┣━━╯╰━━┻┻┻━╋╮┣┻╯
╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╰━╯╱╱╱╰━╯╱╱╱╱╱╱╰━╯╱╱╱╱╱╱╱╱╱╱╰━╯


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

//functions prototype------------------------------

vector<string> getInput();


//solve function-----------------------------------
int sol(ll x, ll y) {
    float a, b;
    if ((2 * x - y) % 3) return 0;
    a = float(2 * x - y) / 3;
    b = x - (2 * a);
    if (a < 0 || b < 0) return 0;
    return 1;
}
void solve(void) {
    ll  x, y;
    cin >> x >> y;
    if (sol(x, y))print("YES");
    else print("NO");
}


//main function-----------------------------------
int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}