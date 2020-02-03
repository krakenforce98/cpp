#include <bits/stdc++.h>
using namespace std;
long long a[101];
int N;
int _count = 0;
int main () {
  freopen ("CHIAHET.INP","r",stdin);
  freopen ("CHIAHET.OUT","w",stdout);
  cin >> N;
  for (int i = 1; i <= N; i ++) {
    cin >> a[i];
  }
  for (int i = 1; i <= N; i ++) {
    if (a[i] == 1 || a[i] == 9) {
      _count ++;
    }else if (a[i] != 2 && a[i] != 3 && a[i] != 4) {
      for (long long j = 2; j < sqrt(a[i]); j ++) {
        if (a[i] % j == 0) {
          _count ++;
          break;
        }
      }
    }
  }
  cout << _count;
}
