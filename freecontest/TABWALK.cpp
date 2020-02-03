#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N;
int main () {
  cin >> N;
  ll res = 0;
  for (ll i = sqrt(N); i >= 1; i --) {
    if (N % i == 0) {
      res += N / i - 1 + i - 1;
      cout << res;
      return 0;
    }
  }
}
