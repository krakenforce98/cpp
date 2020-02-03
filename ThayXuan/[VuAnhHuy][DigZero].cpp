#include <bits/stdc++.h>
using namespace std;

int main () {
  freopen ("DigZero.INP","r",stdin);
  freopen ("DigZero.OUT","w",stdout);
  long long N;
  cin >> N;
  int count = 0;
  for (long i = 5; N / i >= 1; i *= 5) count += N/i;
  cout << count;
}
