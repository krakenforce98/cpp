#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
typedef long long ll;
ll m,n,a[101][101],f[101][101] = {0},num = 1e9+7;
bool check (ll x) {
  if (x == 0) return false;
  if (x == 1) return false;
  if (x == 2) return true;
  for (ll i = 2; i <= sqrt(x); i ++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}
int main () {
  //freopen ("ROBOT.INP","r",stdin);
  //freopen ("ROBOT.OUT","w",stdout);
  cin >> m >> n;
  for (ll i = 1; i <= m; i ++) {
    for (ll j = 1; j <= n; j ++) {
      cin >> a[i][j];
    }
  }
  f[1][1] = 1;
  for (ll i = 1; i <= m; i ++) {
    for (ll j = 1; j <= n; j ++) {
      ll tg1 = abs(a[i][j] - a[i-1][j]);
      if (check(tg1) == true) f[i][j] = (f[i][j] + f[i-1][j])%num;
      ll tg2 = abs(a[i][j] - a[i][j-1]);
      if (check(tg2) == true) f[i][j] = (f[i][j] + f[i][j-1])%num;
    }
  }
  cout << f[m][n];
}
