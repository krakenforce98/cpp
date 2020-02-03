#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll num = 1e9 + 7;
void ext_gcd(ll a, ll b, ll &d, ll &x, ll &y) {
  if (b == 0) {
    d = a;
    x = 1;
    y = 0;
  }else{
    ll x1, y1;
    ext_gcd(b, a % b, d, x1, y1);
    x = y1;
    y = x1 - (a/b)*y1;
  }
}
ll mod_inverse(ll a, ll m) {
  ll d,x,y;
  ext_gcd(a,m,d,x,y);
  if (d != 1) {
    return - 1;
  }
  else return (x % m + m) % m;
}
ll nCk(ll n, ll k) {
  long long res = 1;
  for (long long i = 2; i <= k; i ++) res = res * i % num;
  res = mod_inverse(res,num);
  for (long long i = n-k+1; i <= n; i ++) res = res * i % num;
  return res%num;
}

int main () {
  ll m, n, temp;
  freopen ("EQUATION.INP","r",stdin);
  freopen ("EQUATION.OUT","w",stdout);
  cin >> m >> n;
  for (ll i = 1; i <= n; i ++) {
    cin >> temp;
    m = m - temp + 1;
  }
  if (n > m) cout << 0;
  else{
    cout << nCk(m-1,n-1);
  }
}
