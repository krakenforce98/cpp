#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, res = 1;
int main () {
  freopen ("TOTAL.INP","r",stdin);
  freopen ("TOTAL.OUT","w",stdout);
  cin >> n;
  ll z = 0;
  for (ll i = 0; i <= n; i ++) {
    z += i;
    if (((n - z) % (z+1) == 0) && ((n - z) / (z + 1) != 0)) res ++;
    if (n - z < z + 1) break;
  }
  cout << res;
}
