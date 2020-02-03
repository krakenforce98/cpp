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
    c[i] = (char)(x % 10 + '0');//number to char
    carry = x / 10;
  }
  if (carry) { //if carry = 1
    c = '1' + c;
  }
  return c;
}
int cmp(bignum a, bignum b) {
  while (a.length() < b.length()) a = '0' + a;
  while (a.length() > b.length()) b = '0' + b;
  if (a > b) return 1;
  if (a < b) return -1;
  if (a == b) return 0;
  return 0;
}
int main () {
  bignum a,b,c,d,e,sum1,sum2;
  int l;
  freopen ("SPLIT.INP","r",stdin);
  freopen ("SPLIT.OUT","w",stdout);
  cin >> l >> a;
  l --;
  int split = l/2;
  for (int i = split; i >= 0; i --) {
    if (a[i] != '0') {
      b = a.substr(0,i);
      c = a.substr(i,l-i+1);
      sum1 = add(b,c);
      break;
    }
    if (i == 0) {
      sum1 = a;
    }
  }
  for (int i = split+1; i <= l; i ++) {
    if (a[i] != '0') {
      d = a.substr(0,i);
      e = a.substr(i,l-i+1);
      sum2 = add(d,e);
      break;
    }
    if (i == l) {
      sum2 = a;
    }
  }
  if (cmp(sum1,sum2) == -1) {
    cout << sum1;
  }else{
    cout << sum2;
  }
}
