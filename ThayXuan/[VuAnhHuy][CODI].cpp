#include <bits/stdc++.h>
using namespace std;
long long _CODI[1000001];
long long CODI[1000001];
long long T, A, B;
long long divisor(long long x) {
  long long res = 0;
  for (long long i = 1; i < sqrt(x); ++ i) {
    if (x % i == 0) res += 2;
  }
  long long y = sqrt(x);
  if (y * y == x) res ++;
  return res;
}
int main () {
  freopen ("CODI.INP","r",stdin);
  freopen ("CODI.OUT","w",stdout);
  _CODI[1] = 1;
  _CODI[2] = 2;
  for (long long i = 3; i <= 10000; i++) {
    _CODI[i] = _CODI[i-1] + divisor(_CODI[i-1]);
  }
  for (int i = 1; i <= 1000001; i ++) CODI[i] = 0;
  for (long long i = 1; i <= 10000; i++) {
    CODI[_CODI[i]] = 1;
  }

  for (long long i = 1; i <= 1000001; i ++) {
    CODI[i] += CODI[i-1];
  }
  cin >> T;
  for (long long i = 1; i <= T; i ++) {
    cin >> A >> B;
    cout << CODI[B] - CODI[A-1] << endl;
  }

}
