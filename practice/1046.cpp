#include <iostream>
#include <string>
#include <cstdio>
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
int main () {
  bignum a,b;
  cin >> a >> b;
  bignum c = a, d = b;
  for (int i = 0; i <= c.length() - 1; i ++) {
    if (c[i] == '6') c[i] = '5';
  }
  for (int i = 0; i <= d.length() - 1; i ++) {
    if (d[i] == '6') d[i] = '5';
  }
  cout << add(c,d) << " ";
  for (int i = 0; i <= a.length() - 1; i ++) {
    if (a[i] == '5') a[i] = '6';
  }
  for (int i = 0; i <= b.length() - 1; i ++) {
    if (b[i] == '5') b[i] = '6';
  }
  cout << add(a,b);

}
