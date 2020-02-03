#include <bits/stdc++.h>
using namespace std;
long a[1000001];
int b[1000001];
int main () {
  freopen ("SEGMENT.INP","r",stdin);
  freopen ("SEGMENT.OUT","w",stdout);
  int N;
  cin >> N;
  for (int i = 1; i <= N; i ++) {
    cin >> a[i];
    b[i] = 1;
  }
  int maxx = 1;
  for (int i = 1; i <= N; i ++) {
    if (a[i] > a[i-1]) {
      b[i] = b[i-1] + 1;
      if (b[i] > maxx) maxx = b[i];
    }
  }
  cout << maxx;
}
