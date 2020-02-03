#include <bits/stdc++.h>
using namespace std;

int main () {
  int a;
  int sum = 0;
  freopen ("DSUM.INP","r",stdin);
  freopen ("DSUM.OUT","w",stdout);
  cin >> a;
  while (a != 0) {
    sum += a % 10;
    a /= 10;
  }
  cout << sum;
}
