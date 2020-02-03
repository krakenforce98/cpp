#include <iostream>
using namespace std;

int main () {
  int n;
  int a[101];
  a[0] = -1;
  cin >> n;
  for (int i = 1; i <= n; i ++) {
    cin >> a[i];
  }
  int sum = 0;
  for (int i = 1; i <= n; i ++) {
    if (a[i-1] >= a[i]) {
      for (int j = i; j >= 1; j --) {
        if (a[j-1] >= a[j]) {
          sum += abs(a[j]-1-a[j-1]);
          a[j-1] = a[j] - 1;
        }
      }
    }
  }
  cout << sum;
}
