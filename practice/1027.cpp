#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  int a[16];
  a[0] = 2;
  for (int i = 1; i <= n; i ++) {
    a[i] = a[i-1] + a[i-1] - 1;
  }
  cout << a[n] * a[n];
}
