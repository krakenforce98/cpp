#include <bits/stdc++.h>
using namespace std;
long long a[100001];
int n;
long long ways = 0;
int main () {
  a[0] = 0;
  freopen ("CARDS.INP","r",stdin);
  freopen ("CARDS.OUT","w",stdout);
  cin >> n;
  for (int i = 1; i <= n; i ++) cin >> a[i];
  for (int i = 1; i <= n; i ++) {
    if (a[i] != 0) {
      a[i] += a[i-1];
      ways += a[i] / 2;
      a[i] -= (a[i] / 2)*2;
    }
  }
  cout << ways;
}
