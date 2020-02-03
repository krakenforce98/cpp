#include <bits/stdc++.h>
using namespace std;

int main () {
  //freopen ("TURTLE.INP","r",stdin);
  //freopen ("TURTLE.OUT","w",stdout);
  long long a[5];
  cin >> a[1] >> a[2] >> a[3] >> a[4];
  sort(a+1,a+1+4);
  long long ans = a[1] * a[3];
  cout << ans;
}
