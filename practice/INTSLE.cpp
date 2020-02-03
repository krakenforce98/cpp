#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int n;
long long a1, b1, c1, a2, b2, c2;
long long D, Dx, Dy;

long long gcd(long long a, long long b) {
  while (b != 0) {
    long long r = a % b;
    a = b;
    b = r;
  }
  return abs(a);
}

void solve () {
  D = a1 * b2 - a2 * b1;
  Dx = c1 * b2 - c2 * b1;
  Dy = a1 * c2 - a2 * c1;

  if (D != 0) {
    if (Dx % D == 0 && Dy % D == 0) {
      cout << Dx / D << " " << Dy / D << "\n";
      return;
    }else{
      cout << "NO SOLUTION\n";
      return;
    }
  }

  if (D == 0 && (Dx != 0 || Dy != 0)) {
    cout << "NO SOLUTION\n";
    return;
  }

  bool sol1, sol2;

  if (a1 == 0 && b1 == 0) sol1 = (c1 == 0);
  else sol1 = (c1 % gcd(a1, b1) == 0);

  if (a2 == 0 && b2 == 0) sol2 = (c2 == 0);
  else sol2 = (c2 % gcd(a2, b2) == 0);

  if (sol1 && sol2) cout << "INFINITE\n";
  else cout << "NO SOLUTION\n";
}

int main () {
  freopen ("INTSLE.INP","r",stdin);
  freopen ("INTSLE.OUT","w",stdout);
  cin >> n;
  for (int i = 1; i <= n; i ++) {
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    solve();
  }
  return 0;
}
