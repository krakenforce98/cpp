#include <iostream>
using namespace std;

int main () {
  int a[11], z; a[0] = 0;
  int max = 1000;
  for (int i = 1; i <= 10; i ++) cin >> a[i];
  for (int i = 1; i <= 10; i ++) a[i] += a[i-1];
  for (int i = 1; i <= 10; i ++) {
    if (abs(a[i] - 100) < max) {
      z = a[i];
      max = abs(a[i] - 100);
    }else if (abs(a[i] - 100) == max) {
      if (a[i] > z) z = a[i];
    }
  }
}
