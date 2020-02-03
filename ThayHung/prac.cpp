#include <bits/stdc++.h>
using namespace std;
typedef string bignum;
typedef long long ll;
ll num = 1e9 + 7;
int binarySearch(int a[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2;

    if (a[mid] == x) return mid;

    if (a[mid] > x) return binarySearch(a, l, mid - 1, x);

    return binarySearch(a, mid + 1, r ,x);

  }
  return -1;
}

long long lt(int a, int n) {
  if (n == 0) {
    return 1;
  }
  if (n == 1) {
    return a;
  }
  long long tg = lt(a,n/2);
  if (n % 2 == 0)
    return tg * tg;
  else
    return tg * tg * a;
}
// int main () {
//   int N;
//   long long B;
//   long H[21];
//
//   cin >> N >> B;
//
//   for (int i = 1; i <= N; i ++) {
//     cin >> H[i];
//   }
//
//   long long tong = 0;
//   long long min = 100000000;
  // for (long long T = 0; T <= lt(2,N)-1; T++) {
  //   long long tong = 0;
  //   for (int i = 1; i <= N; i ++) {
  //     if (T % lt(2,i) >= lt(2,i-1)) {
  //     }
  //   }
  // }
//   cout << min - B;
// }
void ext_gcd (long long a, long long b, long long &d, long long &x, long long &y) {
  if (b == 0) {
    d = a;
    x = 1;
    y = 0;
  }else{
    long long x1, y1;
    ext_gcd(b, a%b,d,x1,y1);
    x = y1;
    y = x1 - (a/b)*y1;
  }
}
long long mod_inverse(long long a, long long m) {
  long long d,x,y;
  ext_gcd(a,m,d,x,y);
  if (d != 1) return -1;
  else return (x%m +m)%m;
}
int cmp (bignum a, bignum b) {
  while (a.length() < b.length()) a = '0' + a;
  while (b.length() < a.length()) b = '0' + b;
  if (a < b) return -1;
  if (a > b) return 1;
  if (a == b) return 0;
  return 0;
}
bignum add (bignum a, bignum b) {
  while (a.length() < b.length()) a = '0' + a;
  while (b.length() < a.length()) b = '0' + b;
  int carry = 0;
  bignum c = a;
  for (int i = a.length() - 1; i >= 0; i --) {
    int x = (a[i] - '0') + (b[i] - '0') + carry;
    c[i] = (char)(x % 10 + '0');
    carry = x/10;
  }
  return c;
}
bignum sub (bignum a, bignum b) {
  int borrow = 0;
  bignum c;
  bool sign;
  if (cmp(a,b) == -1) {
    sign = true;
    bignum temp = a;
    a = b;
    b = temp;
  }
  while(a.length() < b.length()) a = '0' + a;
  while(b.length() < a.length()) b = '0' + b;
  for (int i = a.length()-1; i >= 0; i --) {
    int x = a[i] - b[i] - borrow;
    if (x < 0) {
      x += 10;
      borrow = 1;
    }else{
      borrow = 0;
    }
    c = (char)(x + '0') + c;
  }
  while (c.length() > 1 && c[0] == '0') c.erase(0,1);
  if (sign) {
    c = '-' + c;
  }
  return c;
}

long long C(long long n, long long k) {
  long long res = 1;
  for (long long i = 2; i <= k; i ++) res =  res * i % num;
  res = mod_inverse(res,num);
  for (long long i = n - k + 1; i <= n; i ++) res = res * i % num;
  return res % num;
}
int main () {
  cout << C(6,4);
}
