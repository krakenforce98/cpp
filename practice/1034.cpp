#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  int t1 = 0, t2 = 0;
  int a[1001], b[1002], c[1002];
  for (int i = 1; i <= n; i ++) {
    cin >> a[i];
    b[i] = a[i];
    c[i] = a[i];
  }
  b[0] = 0;
  c[0] = 1;
  for (int i = 1; i <= n; i ++) {
    if (b[i] == 1 && b[i-1] == 0) {
      t1 ++;
    }
  }
  for (int i = 1; i <= n; i ++) {
    if (c[i] == 0 && c[i-1] == 1) {
      t2 ++;
    }
  }
  cout << min(t1,t2);

}
