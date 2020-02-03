#include <bits/stdc++.h>
using namespace std;
typedef string bignum;
bignum add(bignum a, bignum b) {
  while (a.length() < b.length()) a = '0' + a;
  while (a.length() > b.length()) b = '0' + b;

  bignum c = a;// xau se co do dai bang xau a
  int carry = 0;

  for (int i = a.length() - 1; i >= 0; i --) {
    int x = (a[i] - '0') + (b[i] - '0') + carry;
    c[i] = (char)(x % 10 + '0');
    carry = x / 10;
  }
  if (carry) { //if carry = 1
    c = '1' + c;
  }
  return c;
}
bignum fibo[1001];
long T;
int temp;
int main () {
  freopen ("FIBO.INP","r",stdin);
  freopen ("FIBO.OUT","w",stdout);
  fibo[1] = "1";
  fibo[2] = "1";
  for (int i = 3; i <= 1000; i ++) {
    fibo[i] = add(fibo[i-1],fibo[i-2]);
  }
  cin >> T;
  for (long i = 1; i <= T; i ++) {
    cin >> temp;
    cout << fibo[temp] << endl;
  }
}
