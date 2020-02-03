#include <bits/stdc++.h>
using namespace std;

int main () {
  long a[100001];
  int n;
  cin >> n;
  for (int i = 1; i <= n; i ++) cin >> a[i];
  int max = 0;
  if (n == 1) {
    cout << 1;
    return 0;
  }
  int temp = 1;
  for (int i = 2; i <= n; i ++) {

    if (a[i] >= a[i-1]) {
      temp ++;
    }else{
      if (temp > max) max = temp;
      temp = 1;
    }
    if (i == n) {
      if (temp > max) max = temp;
    }
  }
  cout << max;
}
