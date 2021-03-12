#include<iostream>
#include<vector>
 
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, c;
	cin >> n;
	std::vector<bool> v(1000000007, 0);
	int t;
	c = 0;
	while (n--) {
		//cout << n << endl;
		cin >> t;
		if (v[t] == 0) {
			v[t] = 1;
			c++;
		}
	}
	cout << c << endl;
}
