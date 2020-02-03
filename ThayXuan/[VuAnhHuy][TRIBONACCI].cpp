#include <bits/stdc++.h>
using namespace std;
long long A[51];
int main () {
  freopen ("TRIBONACCI.INP","r",stdin);
  freopen ("TRIBONACCI.OUT","w",stdout);
  A[0] = 0;
  A[1] = 0;
  A[2] = 1;
  for (int i = 3; i <= 50; i ++) A[i] = A[i-1] + A[i-2] + A[i-3];
  long long n;
  while (cin >> n) {
    cout << A[lower_bound(A, A+51,n) - A] << endl;
  }
}
