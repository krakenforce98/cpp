#include <bits/stdc++.h>
using namespace std;

int main () {
  long s, n;
  long long a[100001];
  cin >> s >> n;
  for (long i = 1; i <= n; i ++) {
    cin >> a[i];
  }
  a[0] = 0;
  sort(a+1,a+1+n);
  reverse(a+1,a+1+n);
  for (long i = 1; i <= n; i ++) {
    a[i] += a[i-1];
  }
  if (a[n] < s) {
    cout << "impossible";
    return 0;
  }
  cout << lower_bound(a+1,a+1+n,s) - a;
}
