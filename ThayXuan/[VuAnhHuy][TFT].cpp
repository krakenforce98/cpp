#include <bits/stdc++.h>
using namespace std;

int main () {
  long n, a = 0, b = 0;
  //freopen ("TFT.INP","r",stdin);
  //freopen ("TFT.OUT","w",stdout);
  cin >> n;
  if (n == 1) {
    cout << -1;
    return 0;
  }
  for (long i = 1; i <= n/2; i ++) {
    if ((n - i*2) % 3 == 0) {
      a = i;
      b = (n-i*2)/3;
      break;
    }
  }
  if (a == 0 && b == 0) {
    cout << -1;
    return 0;
  }
  cout << a << " " << b;
}
