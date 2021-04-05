#include<bits/stdc++.h>


using namespace std;

//macros-------------------------------------------
#define deb(x) cout<<#x<<" : "<<x<<endl
#define print(x) cout<<x<<endl
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define nl "\n"
#define MOD 1000000007
void getRes(vector<int>&v, set<string>&res,unsigned int n, string curr = "") {
    if (curr.length() == n)res.insert(curr);
    for (int x=0; x<26; x++) {
        if(v[x]){
            v[x]--;
            getRes(v, res, n,curr + char('a'+x));
            v[x]++;
        }       
    }
}
//main function-----------------------------------
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin >> s;
    vector<int> v(26,0);
    for (char c : s) v[c-'a']++;    
    set<string> res;
    getRes(v, res,s.size());
    print(res.size());
    for (string str : res) print(str);
    return 0;
}