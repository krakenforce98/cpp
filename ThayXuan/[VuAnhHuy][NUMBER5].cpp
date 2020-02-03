#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string conv(ll x) {
  string res;
  while(x != 0) {
    res = (char)(x % 10 + '0') + res;
    x /= 10;
  }
  return res;
}
ll pow2(ll n, ll m) {
  if (m == 0) return 1;
  if (m == 1) return n;
  ll ans = pow2(n, m/2);
  if (m % 2 == 0) {
    return ans * ans;
  }else{
    return ans * ans * n;
  }
}
ll calc(string a) {
  ll resa = 0;
  for (int i = 1; i <= a.length()-1;i ++) {
    if (a[i] - '0' < 5) {
      resa += pow2(3, (a.length() - i - 1)*2) * (a[i] - '0');
    }
    if (a[i] - '0' > 5) {
      resa += pow2(3, (a.length() - i - 1)*2) * (a[i] - '0' - 1);
    }
    if (a[i] - '0' == 5) {
      resa += pow2(3, (a.length() - i - 1)*2) * (a[i] - '0') - 1;
      break;
    }
  }
  return resa;
}
ll m, n;
string a, b;
int main () {
  // freopen ("NUMBER5.INP","r",stdin);
  // freopen ("NUMBER5.OUT","w",stdout);
  cin >> m >> n;
  ll resa, resb;
  a = conv(m - 1);
  b = conv(n);
  a = "0" + a;
  b = "0" + b;
  if (m - 1 <= 0) resa = 0;
  else resa = calc(a);
  resb = calc(b);
  cout << resa << endl << resb << endl;
  ll ans = n - m + 1 - (resb - resa);
  cout << ans;
}
