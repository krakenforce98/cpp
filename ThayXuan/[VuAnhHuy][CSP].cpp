#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
long long n, m;
int main () {
  freopen ("CSP.INP","r",stdin);
  freopen ("CSP.OUT","w",stdout);

  cin >> n >> m;
  for (long long i = 1; i <= n; i ++) {
    cin >> a[i];
  }
  long long sum = 0;
  sort(a+1, a+1+n);
  for (long long i = 1; i < n; i ++) {
    if(a[i] + a[i+1] <= m) {
    long long j = upper_bound(a+1,a+1+n,m-a[i]) - a;
    j --;
    sum += j - i;
  }
  }
  cout << sum;
}
