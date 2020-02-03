#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x[1000001] = {0}, n, k, l, r, MAX = 0, temp;
ll max_pos = 0;
int main () {
  freopen ("LAZY.INP","r",stdin);
  freopen ("LAZY.OUT","w",stdout);
  cin >> n >> k;
  for (ll i = 1; i <= n; i ++){
    ll val, pos;
    cin >> val >> pos;
    x[pos] = val;
    if (pos > max_pos) max_pos = pos;
  }
  for (ll i = 1; i <= max_pos; i ++) {
    x[i] += x[i-1];
  }
  // for (ll i = 1; i <= max_pos; i ++) {
  //   cout << x[i] << " ";
  // }
  // cout << endl;
  for (ll i = 1; i <= max_pos; i ++) {
    l = i - k; r = i + k;
    if (l <= 0) l = 0;
    if (r >= max_pos) r = max_pos;
    if (l == 0) {
      temp = x[r];
    }else {
      temp = x[r] - x[l-1];
    }
    if (temp >= MAX) {
      MAX = temp;
    }
  }
  cout << MAX;
}
