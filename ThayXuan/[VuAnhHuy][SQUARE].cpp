#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
  int n;
  freopen ("SQUARE.INP","r",stdin);
  freopen ("SQUARE.OUT","w",stdout);
  cin >> n;
  int a[16];
  a[0] = 2;
  for (int i = 1; i <= n; i ++) {
    a[i] = a[i-1] + a[i-1] - 1;
  }
  cout << a[n] * a[n];
}
