#include <bits/stdc++.h>
using namespace std;
//0 0 0 1 0 0 0
//0 0 0 0 1 1 1
//0 0 0 0 0 0 0
//0 0 0 0 0 0 0
int main () {
  freopen ("SEATING.INP","r",stdin);
  freopen ("SEATING.OUT","w",stdout);
  pair <long long, long long> a[101];
  long long n, m;
  long  k;
  cin >> n >> m >> k;
  long long able = n * (m-1);
  for (long  i = 1; i <= k; i ++) {
    cin >> a[i].first >> a[i].second;
  }
  if (able == 0) {
    cout << 0;
    return 0;
  }
  sort(a+1,a+1+k);
  for (long  i = 1; i <= k; i ++) {
    if (a[i].first != a[i-1].first) {
      if (a[i].second == 1)
        able -= 1;
      else if (a[i].second == m) {
        able -= 1;
      }
      else
        able -= 2;
      } else{
      if (a[i].second == a[i-1].second + 1) {
        if (a[i].second != m) able -= 1;
      }else if (a[i].second == m)
        able -= 1;
      else able -= 2;
    }
  }
  cout << able;
}
