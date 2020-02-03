#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;

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
//solve ax + by = d with d = gcd(a,b)
// function gcd(a, b);
// begin
//   while b ≠ 0 do
//     begin
//       r:= a mod b; a:= b; b:= r;
//     end;
//   Result:= a;
// end;
long long EuclidGCD(long long a, long long b)
{
	// while (b != 0)
	// {
	// 	r = a % b;	// remainder
	// 	a = b;
	// 	b = r;
	// }
  if (b == 0) {
    return a;
  }
  return EuclidGCD(b, a % b);
}

void EuclidSolve(long long a, long long b) {
  long long d = EuclidGCD(a,b);
  long long m = a,
      xm = 1,
      n = b,
      xn = 0;
  while (n != 0) {
    long long q = m / n;
    long long r = m - q*n;
    long long xr = xm - q * xn;
    m = n;
    xm = xn;
    n = r;
    xn = xr;
  }
  cout << xm << " " << (d - a*xm)/b;
}

long long mod_inverse(long long a, long long m) {
  long long x,y,d;
  ext_gcd(a,m,d,x,y);
  if (d != 1) {
    return - 1;
  }
  else return (x % m + m) % m;
}
int main () {
  
}
