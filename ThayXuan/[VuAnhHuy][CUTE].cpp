#include <bits/stdc++.h>
using namespace std;
int check[1000001] = {0};
int number[1000001];
int n;
bool prime (int x) {
  if (x < 2) return false;
  for (int i = 2; i <= sqrt(x); i ++) {
    if (x % i == 0) return false;
  }
  return true;
}
int digitsum1 (int x) {
  int sum = 0, y = x;
  while (y != 0) {
    sum += y % 10;
    y /= 10;
  }
  return sum;
}
int digitsum2 (int x) {
  int sum = 0, y = x;
  while (y != 0) {
    sum += (y % 10) * (y % 10);
    y /= 10;
  }
  return sum;
}
int main () {
  freopen ("CUTE.INP","r",stdin);
  freopen ("CUTE.OUT","w",stdout);
  cin >> n;
  int l,r;
  for (int i = 1; i <= 1e6; i ++) {
    if (prime(digitsum1(i)) == true && prime(digitsum2(i)) == true) {
      check[i] = 1;
    }
  }
  for (int i = 1; i <= 1e6; i ++) {
    check[i] += check[i-1];
  }
  for (int i = 1; i <= n; i ++) {
    cin >> l >> r;
    cout << check[r] - check[l-1] << endl;
  }
}
