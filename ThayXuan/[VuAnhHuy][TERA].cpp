#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long binarySearch(long long arr[], long long l, long long r, long long x)
{
    if (r >= l) {
        long long mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
ll a[1001], b[1001], c[1001], d[1001], gt_ab[1000001], ts_ab[1000001], ab[1000001], t = 0, n, L, t2 = 1;
int main () {
  freopen ("TERA.INP","r",stdin);
  freopen ("TERA.OUT","w",stdout);
  cin >> n >> L;
  for (ll i = 1; i <= n; i ++) cin >> a[i];
  for (ll i = 1; i <= n; i ++) cin >> b[i];
  for (ll i = 1; i <= n; i ++) cin >> c[i];
  for (ll i = 1; i <= n; i ++) cin >> d[i];
  for (ll i = 1; i <= n; i ++) {
    for (ll j = 1; j <= n; j ++) {
      t ++;
      ts_ab[t] = 1;
      ab[t] = a[i] + b[j];
    }
  }
  sort(ab+1,ab+1+t);
  for (ll i = 1; i <= t; i ++) {
    if (ab[i] != ab[i-1]) {
      gt_ab[t2] = ab[i];
      t2 ++;
    }else{
      t2 --;
      ts_ab[t2] ++;
      t2 ++;
    }
  }
  t2 --;
  ll ans = 0;
  for (ll i = 1; i <= n; i ++) {
    for (ll j = 1; j <= n; j ++) {
      ll tg = L - c[i] - d[j];
      ll temp = binarySearch(gt_ab, 1, t2, tg);
      if (temp != -1) {
        ans += ts_ab[temp];
      }
    }
  }
  cout << ans;
}
