#include <bits/stdc++.h>
using namespace std;
long long n,m,a[1000001],ans;

int main () {
  freopen ("FM.INP","r",stdin);
  freopen ("FM.OUT","w",stdout);
  cin >> n >> m;
  for (int i = 1; i <= n; i ++) cin >> a[i];
  ans = 0;
  sort(a+1,a+1+n);
  for (int i = 1; i <= n; i ++) {
    long long j = upper_bound(a+1,a+1+n,m-a[i])-a;
    j --;
    ans += j;
    if (j >= i) ans --;
  }
  ans /= 2;
  cout << ans;
}
