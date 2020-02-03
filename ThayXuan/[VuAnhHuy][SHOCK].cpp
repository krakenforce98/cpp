#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
typedef long long ll;
ll n, a[200001], f[200001];
int main () {
  freopen ("SHOCK.INP","r",stdin);
  freopen ("SHOCK.OUT","w",stdout);
  cin >> n;
  for (ll i = 1; i <= n; i ++) cin >> a[i];
  f[0] = 0;
  for (ll i = 1; i <= n; i ++) {
    if (a[i] < 0) f[i] = f[i-1] + 1;
    else f[i] = f[i-1];
  }
  ll ans_am = 0, ans_duong = 0;
  for (ll i = 1; i <= n; i ++) {
    if (f[i] % 2 == 1) {
      ans_am ++;
    }
  }
  for (ll i = 1; i <= n; i ++) {
    if (f[i] % 2 == 0) {
      ans_duong ++;
    }
  }
  ll ans_am_final = ans_am * ans_duong + ans_am;
  ll ans_duong_final = ans_duong + ans_duong*(ans_duong-1)/2 + ans_am*(ans_am-1)/2;
  cout << ans_am_final << " " << ans_duong_final;
}
