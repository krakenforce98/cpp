#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
pair <ll, ll> a[800002];
ll n, m;
int main () {
  freopen ("BASKETBALL.INP","r",stdin);
  freopen ("BASKETBALL.OUT","w",stdout);
  cin >> n;
  for (ll i = 1; i <= n; i ++) {
    cin >> a[i].first;
    a[i].second = 1;
  }
  cin >> m;
  for (ll i = 1; i <= m; i ++) {
    cin >> a[n+i].first;
    a[n+i].second = 2;
  }
  sort(a+1,a+1+n+m);
  ll maxx = n*3 - m*3, maxA = n*3, maxB = m*3;
  ll _a = maxA, _b = maxB;
  ll s = n*3 - m*3;
  for (ll i = 1; i <= m+n; i++) {
    if (a[i].second == 1) {
      s --;
      maxA --;
    }else {
      s ++;
      maxB --;
    }
    if (s > maxx) {
      maxx = s;
      _a = maxA;
      _b = maxB;
    }
  }
  cout << _a << ":" << _b;
}
