#include <bits/stdc++.h>
using namespace std;

int main () {
  string a, b;
  cin >> a >> b;
  int _a[10];
  int _b[10];
  memset(_a, 0, sizeof(a));
  memset(_b, 0, sizeof(b));
  for (int i = 0; i <= a.length()-1; i ++) {
    if (a[i] == '1') _a[1] ++;
    if (a[i] == '2') _a[2] ++;
    if (a[i] == '3') _a[3] ++;
    if (a[i] == '4') _a[4] ++;
    if (a[i] == '5') _a[5] ++;
    if (a[i] == '6') _a[6] ++;
    if (a[i] == '7') _a[7] ++;
    if (a[i] == '8') _a[8] ++;
    if (a[i] == '9') _a[9] ++;
    if (a[i] == '0') _a[0] ++;
  }
  for (int i = 0; i <= b.length()-1; i ++) {
    if (b[i] == '1') _b[1] ++;
    if (b[i] == '2') _b[2] ++;
    if (b[i] == '3') _b[3] ++;
    if (b[i] == '4') _b[4] ++;
    if (b[i] == '5') _b[5] ++;
    if (b[i] == '6') _b[6] ++;
    if (b[i] == '7') _b[7] ++;
    if (b[i] == '8') _b[8] ++;
    if (b[i] == '9') _b[9] ++;
    if (b[i] == '0') _b[0] ++;
  }
  int m = 0;
  for (int i = 9; i >= 0; i --) {
    for (int j = 1; j <= min(_a[i],_b[i]); j ++) {
      cout << i;
      m ++;
    }
  }
  if (m == 0) {
    cout << "-1";
  }

}
