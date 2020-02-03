#include <bits/stdc++.h>
using namespace std;

int main () {
  //freopen ("ANTS.INP","r",stdin);
  //freopen ("ANTS.OUT","w",stdout);
  int n;
  long long r;
  long long max = 0;
  cin >> n >> r;
  long long temp;
  for (int i = 1; i <= n; i ++) {
    cin >> temp;
    if (temp <= 0) {
      temp = - temp;
    }else{
      temp = r - temp;
    }
    if (temp > max) max = temp;
  }
  cout << max;
}
