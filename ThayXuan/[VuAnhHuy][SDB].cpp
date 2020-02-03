#include <bits/stdc++.h>
using namespace std;
long long a[1000001],ts[1000001],gt[1000001];
long N;
int main () {
  freopen ("SDB.INP","r",stdin);
  freopen ("SDB.OUT","w",stdout);
  cin >> N;
  for (long i = 1; i <= N; i ++) {
    cin >> a[i];
    ts[i] = 1;
  }
  sort(a+1,a+1+N);
  long count = 1;
  gt[0] = 1234;
  for (long i = 1; i <= N; i++) {
    if (a[i] != a[i - 1]) {
      gt[count] = a[i];
      count++;
    }
    else {
      count--;
      ts[count]++;
      count++;
    }
  }
  count--;
  for (long i = 1; i <= count; i ++) {
    if (ts[i] == 1) {
      cout << gt[i];
      return 0;
    }
  }
}
