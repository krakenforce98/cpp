#include <bits/stdc++.h>
using namespace std;
long long num = 1e9;
int main () {
  freopen ("TAMGIAC.INP","r",stdin);
  freopen ("TAMGIAC.OUT","w",stdout);
  long long N;
  cin >> N;
  if (N == 1) {
    cout << 0;
    return 0;
  }
  if (N == 2) {
    cout << 0;
    return 0;
  }
  if (N == 3) {
    cout << 0;
    return 0;
  }
  long long count = 0;
  for (int i = 2; i <= N; i ++) {
    for (int j = i; j <= N; j ++) {
      for (int k = j; k <= N; k ++) {
        if (j + k > i && k + i > j && i + j > k && (i != j && i != k && k != j)) {
          count = (count + 1 )%  num;
        }
      }
    }
  }
  cout << count;
}
