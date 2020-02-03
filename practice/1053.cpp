#include <bits/stdc++.h>
using namespace std;

int main () {
	long n;
	cin >> n;
	if (n == 0) {
		cout << "No";
		return 0;
	}else if (n == 1) {
		cout << "No";
		return 0;
	}else if (n == 2) {
		cout << "Yes";
		return 0;
	}
	for (long i = 2; i <= sqrt(n); i ++) {
		if (n % i == 0) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}
