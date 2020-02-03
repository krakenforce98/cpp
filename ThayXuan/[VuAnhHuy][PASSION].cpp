#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main () {
  long long a,b,c,k;
  freopen ("PASSION.INP","r",stdin);
  freopen ("PASSION.OUT","w",stdout);
  cin >> a >> b >> c >> k;
  if (a == 0) {
    cout << "NO " << 2;
    return 0;
  }
  long long delta = b*b - 4*a*c;
  if (delta <= 0) {
    cout << "NO " << 2;
    return 0;
  }
  long long P = c / a;
  long long S = (-1)*b/a;
  if (S*S - 2*P == k) {
    cout << "YES";
  }else{
    cout << "NO " << 1;
  }
  return 0;
}
