#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n = 4;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// initially the count of bags is 1
		int cnt = 1;
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			// if the bag can handle the current size of the boxes, then keep on adding
			// the boxes, otherwise, get the new bag (by incrementing) and set the
			// current element as the first item in the bag
			if (sum + a[i] <= a[n - 1]) {
				sum += a[i];
			} else {
				cnt++;
				sum = a[i];
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
