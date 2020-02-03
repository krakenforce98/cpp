#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  if (n % 3 == 0) {
    cout << 0 << " " << n/3;
    return 0;
  }
  for (int i = 1; i <= n/2; i ++) {
    if ((n - i*2) % 3 == 0) {
      cout << i << " " << (n-i*2)/3;
      return 0;
    }
  }
  cout << n/2 << " " << 0;
  return 0;
}
