#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void ext_gcd(ll a, ll b, ll &d, ll &x, ll&y) {
  if (b == 0) {
    d = a;
    x = 1;
    y = 0;
  }else{
    ll x1,y1;
    ext_gcd(b, a%b, d, x1, y1);
    x = y1;
    y = x1 - (a/b)*y1;
  }
}
int main () {
  ll a,b,c,d,x0,y0;
  freopen ("FOOT.INP","r",stdin);
  freopen ("FOOT.OUT","w",stdout);
  cin >> a >> b >> c;
  /*
  a = a/gcd(a,b)
  b = b/gcd(a,b)
  c = c/gcd(a,b)

  {
    ax0 + by0 = c
  }
  */
  ext_gcd(a,b,d,x0,y0);
  if (c % d != 0) {
    cout << 0;
    return 0;
  }
  //ax0 + by0 = d
  ll t1 = ceil(-1.0 * x0 * c / b);
  if (x0 * c % b == 0) t1 ++;
  ll t2 = floor(1.0 * y0 * c / a);
  if (y0 * c % a == 0) t2 --;
  ll ans = t2 - t1 + 1;
  cout << ans;
}
