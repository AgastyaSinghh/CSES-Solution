#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, k, i, count, t;
	cin >> n >> m >> k;
	multiset<int> appartment;
	multiset<int> requirement;
	for (i = 0; i < n; i++) {
		cin >> t;
		requirement.insert(t);
	}
	for (i = 0; i < m; i++) {
		cin >> t;
		appartment.insert(t);
	}
	count = 0;
	for (int x : requirement) {
		auto it = appartment.lower_bound(x - k);
		if (it != appartment.end()) {
			if (*it <= x + k) {
				count++;
				appartment.erase(it);
			}
		}
	}
	cout << count << endl;
	return 0;
}