#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
typedef unsigned long long ull;
ull a[1001][1001];
ull f[1001][1001] = {0};
ull n,m,k;
int main () {
  // freopen ("ER.INP","r",stdin);
  // freopen ("ER.OUT","w",stdout);
  cin >> n >> m >> k;
  for (ull i = 1; i <= n; i ++) {
    for (ull j = 1; j <= n; j ++) {
      cin >> a[i][j];
    }
  }
  f[1][1] = a[1][1];
  for (ull i = 1; i <= n; i ++) {
    for (ull j = 1; j <= n; j ++) {
      f[i][j] = a[i][j] + f[i-1][j] + f[i][j-1] - f[i-1][j-1];
    }
  }
  ull ans = 0;
  for (ull i = 1; i <= n; i ++) {
    for (ull j = 1; j <= n; j ++) {
      if (i + m - 1 > n) continue;
      if (j + m - 1 > n) continue;
      ull sum = f[i+m-1][j+m-1] - f[i+m-1][j-1] - f[i-1][j+m-1] + f[i-1][j-1];
      if (sum >= k) ans ++;
    }
  }
  cout << ans;
}
