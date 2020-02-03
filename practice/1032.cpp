#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  if (n == 1) {
    cout << -1;
    return 0;
  }
  if (n == 2) {
    cout << -1;
    return 0;
  }
  if (n == 3) {
    cout << 1;
    return 0;
  }
  int min = 10000;
  for (int i = 0; i <= n/3; i ++) {
    if ((n - i*3) % 5 == 0) {
      if (i + (n-i*3)/5 < min) {
        min = i + (n-i*3)/5;
      }
    }
  }
  if (min != 10000) {
    cout << min;
    return 0;
  }
  cout << -1;
  return 0;

}
