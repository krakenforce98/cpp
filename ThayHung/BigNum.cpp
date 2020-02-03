#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
typedef string bignum;

int cmp(bignum a, bignum b) {
  while (a.length() < b.length()) a = '0' + a;
  while (a.length() > b.length()) b = '0' + b;
  if (a > b) return 1;
  if (a < b) return -1;
  if (a == b) return 0;
  return 0;
}

bignum mul (bignum a, int b) {
  bignum c = a;
  int carry = 0;
  for (int i = a.length() - 1; i >= 0; i --) {
    int x = (a[i] - '0') * b + carry;
    c[i] = (char)(x % 10 + '0');
    carry = x / 10;
  }
  if (carry > 0) {
    c = (char)(carry + '0') + c;
  }
  return c;
}

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

bignum sub(bignum a, bignum b) {
  int borrow = 0;
  bignum c;
  bool sign;
  if (cmp(a,b) == -1) {
    sign = 1;
    bignum temp = a;
    a = b;
    b = temp;
  }
  while (a.length() < b.length()) a = '0' + a;
  while (a.length() > b.length()) b = '0' + b;
  for (int i = a.length() - 1; i >= 0; i --) {
      int x = a[i] - b[i] - borrow;
      if (x < 0) {
        x += 10;
        borrow = 1;
      }else{
        borrow = 0;
      }
      c = (char)(x + '0') + c;
  }
  while (c.length() > 1 && c[0] == '0') {
    c.erase(0,1);
  }
  if (sign) {
    c = '-' + c;
  }
  return c;
}

bignum mul2 (bignum a, bignum b) {
  bignum c = "", sum = "0";
  for (int i = b.length() - 1; i >= 0; i --) {
    bignum x = mul(a, b[i] - '0');
    sum = add(sum, x+c);
    c += '0';
  }
  while (sum.length() > 1 && sum[0] == '0') {
    sum.erase(0,1);
  }
  return sum;
}


long long bigmod(bignum a, long long b) {
  long long r = 0;
  for (int i = 0; i <= a.length() - 1; i ++) {
    r = (r * 10 + a[i] - '0') % b;
  }
  return r;
}
int main () {

}
