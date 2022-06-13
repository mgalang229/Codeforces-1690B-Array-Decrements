#include <bits/stdc++.h>
using namespace std;

void test_case() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}
	bool valid = true;
	for(int i = 0; i < n; i++) {
		valid &= (a[i] >= b[i]);
	}
	if(!valid) {
		cout << "NO\n";
		return;
	}
	int mx = 0;
	for(int i = 0; i < n; i++) {
		mx = max(mx, a[i] - b[i]);
	}
	bool checker = true;
	for(int i = 0; i < n; i++) {
		if(a[i] - b[i] <= mx) {
			if (a[i] - b[i] < mx && b[i] != 0) {
				checker = false;
				break;
			}
		}
		else {
			checker = false;
			break;
		}
	}
	cout << (checker ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		test_case();
	}
}
