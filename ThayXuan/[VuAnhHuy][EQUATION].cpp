ro#include <bits/stdc++.h>
using namespace std;

int main () {
  freopen ("EQUATION.INP","r",stdin);
  freopen ("EQUATION.OUT","w",stdout);
  int a,b,c,d,v;
  cin >> a >> b >> c >> d >> v;
  // (vc - a)x = b - dv
  if (v*c - a == 0) {
    if (b - d*v == 0) {
      cout << "MULTIPLE";
      return 0;
    }else{
      cout << "NONE";
      return 0;
    }
  }
  if (c == d && d == 0) {
    cout << "NONE";
    return 0;
  }
  int tu, mau;
  tu = (b - d*v) / __gcd(b-d*v, v*c-a);
  mau = (v*c - a) / __gcd(b-d*v, v*c-a);
  if (mau < 0 && tu > 0) {
    tu = -tu;
    mau = abs(mau);
  }
  if (c*tu + d*mau == 0) {
    cout << "NONE";
    return 0;
  }
  if (a == c && a == 0 && b == v*d) {
      cout << "MULTIPLE";
      return 0;
  }
  cout <<"X = "<< tu << "/" << mau;
}
