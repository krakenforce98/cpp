#include <bits/stdc++.h>
using namespace std;
int n;
long long s, res = 0;
long long a[100001];
long long b[100001];
int main () {
  freopen ("ASUM.INP","r",stdin);
  freopen ("ASUM.OUT","w",stdout);
  b[0] = 0;
  cin >> n >> s;
  for (int i = 1; i <= n; i ++) {
    scanf("%lld", &a[i]);
  }
  for (int i = 1;i <= n; i ++) {
    b[i] = b[i-1] + a[i];
  }
  sort(b, b+n+1);
  for (int i = 0; i <= n; i ++) {
    int t = upper_bound(b, b+1+n, b[i] + s) - b;
    if (t < n+1) res += n - t + 1;
  }
  cout << res;
}
