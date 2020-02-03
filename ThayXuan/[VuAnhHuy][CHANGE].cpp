#include <bits/stdc++.h>
using namespace std;

int main () {
  freopen ("CHANGE.INP","r",stdin);
  freopen ("CHANGE.OUT","w",stdout);
  long long N;
  cin >> N;
  long long dem = 0, k = 0;
  while (N > 0) {
    dem += N%2;
    N/=2;
    k ++;
  }
  cout << k << endl << dem;
}
