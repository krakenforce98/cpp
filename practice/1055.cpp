#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  int n, k, f[2001];
  f[0] = 0;
  cin >> n >> k;
  for (int i = 1; i <= n; i ++) cin >> f[i];
  sort(f+1, f+1+n);
  long time = 0;
  for (int i = n; i >= 1; i -= k) {
      time += (f[i]-1)*2;
  }
  cout << time;
}
