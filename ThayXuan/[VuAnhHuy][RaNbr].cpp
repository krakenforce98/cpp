#include <bits/stdc++.h>
using namespace std;

int main () {
  freopen ("RaNbr.INP","r",stdin);
  freopen ("RaNbr.OUT","w",stdout);
  int N;
  cin >> N;
  int count = 1;
  if (N == 0) {
    cout << 0;
    return 0;
  }
  for (int i = 1; i <= N; i ++) {
    for (int j = i; j <= N; j ++) {
      if (__gcd(i,j) == 1) {
        //cout << i << " " << j << endl;
        count ++;
      }
    }
  }
  cout << count;
}
