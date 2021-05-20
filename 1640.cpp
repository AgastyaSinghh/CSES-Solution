/*


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

bool cmp(pair<int, int> p1, pair<int, int> p2) {
	return p1.first == p2.first;
}
//solve function-----------------------------------

void solve(void) {
	int n, x;
	cin >> n >> x;
	int i, t;
	multiset <pair<int, int>> s;
	for (i = 0; i < n; i++) {
		cin >> t;
		s.insert({t, i});
	}
	for (auto it = s.begin(); it != s.end(); it++) {
		auto t1 = *it;
		auto t2 = s.upper_bound({x - t1.first, it->second});
		if (t2 == s.end()) continue;
		if (t1.first + t2->first == x) {cout << t1.second + 1 << " " << t2->second + 1; return;}
	}
	print("IMPOSSIBLE");
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

/*
//main function-----------------------------------
int main() {
    ll test = 1;
    cin >> test;
    for (ll x = 0; x < test; x++) {
        cout << "Case #" << x + 1 << ": ";
        solve();
    }
    return 0;
}

vector<string> getInput() {
    vector<string> r;
    string s, str;

    getline(cin, s);
    str = "";
    for (char c : s) {
        if (c == ' ') {
            r.push_back(str);
            str = "";
        }
        else str = str + c;
    }
    r.push_back(str);
    return r;
}
*/