#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
long long m, n, temp, num = 1e9+7;
void ext_gcd(long long a, long long b, long long &d,
             long long &x, long long &y) {
  if (b == 0) {
    d = a;
    x = 1;
    y = 0;
  }else{
    long long x1, y1;
    ext_gcd(b, a % b, d, x1, y1);
    x = y1;
    y = x1 - (a/b) * y1;
  }
}
long long mod_inverse(long long a, long long m) {
  long long x,y,d;
  ext_gcd(a,m,d,x,y);
  if (d != 1) {
    return - 1;
  }
  else return (x % m + m) % m;
}

long long C(long long n, long long k) {
  // long long a = 1;
  // for (long long i = n-k+1; i <= n; ++i) a = (a*i)%num;
  // long long b = 1;
  // for (long long i = 2; i <= k; ++i) b = (b*i)%num;
  // return (a * (pow2(b,num-2)%num)) % num;
  long long res = 1;
  for (long long i = 2; i <= k; i ++) res = res * i % num;
  res = mod_inverse(res,num);
  for (long long i = n-k+1; i <= n; i ++) res = res * i % num;
  return res%num;
}
int main () {
  freopen ("PAPERS.INP","r",stdin);
  freopen ("PAPERS.OUT","w",stdout);
  cin >> m >> n;
  for (long long i = 1; i <= n; i ++) {
    cin >> temp;
    m = m - temp + 1;
  }
  if (n > m) cout << 0;
  else cout << C(m-1,n-1);

}
