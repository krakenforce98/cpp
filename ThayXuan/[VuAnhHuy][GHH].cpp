#include <bits/stdc++.h>
using namespace std;
int k;
long long a;
int main () {
  freopen ("GHH.INP","r",stdin);
  freopen ("GHH.OUT","w",stdout);
  cin >> k;
  for (int i = 1; i <= k; i ++) {
    cin >> a;
    long long tong = 0;
    for (long long i = 1; i <= sqrt(a); i ++) {
      if (a % i == 0) {
        if (a / i != i) tong += a / i + i;
      }
    }
    if (a * 2 <= tong) cout << 1 << endl;
    else cout << 0 << endl;
  }
}
