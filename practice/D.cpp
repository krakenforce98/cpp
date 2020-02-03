#include <bits/stdc++.h>
using namespace std;
int sum(long a) {
  int s = 0;
  while (a > 0) {
    s += a % 10;
    a /= 10;
  }
  return s;
}
int main () {
  long a,b;
  cin >> a >> b;
  long c = __gcd(a,b);
  int Max = 0;
  for (long i = 1; i <= sqrt(c); i ++) {
    if (c % i == 0) {
      long x = c/i;
      long y = i;
      if (max(sum(x), sum(y)) > Max)
      Max = max(sum(x), sum(y));
    }
  }
  cout << Max;
}
