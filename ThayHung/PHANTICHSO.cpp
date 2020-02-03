#include <bits/stdc++.h>
using namespace std;
void calc (int n, int x[], int t[], int i) {
  for (int j = x[i-1]; j <= n - t[i-1]; j ++) {
    x[i] = j;
    t[i] = t[i-1] + x[i];
    if (t[i] == n) {
      for (int temp = 1; temp <= i; temp ++) {
        cout << x[temp] << " ";
      }
      cout << endl;
    }else{
      calc(n, x, t, i + 1);
    }
  }
}
int main () {
  int n;
  cin >> n;
  int x[101], t[101];
  t[0] = 0;
  x[0] = 1;
  calc(n,x,t,1);
}
