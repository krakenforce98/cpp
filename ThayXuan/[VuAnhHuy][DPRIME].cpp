#include <bits/stdc++.h>
using namespace std;
int N, cnt = 1;
long long A[1001], B[1001];
bool prime(long long x) {
  if (x == 0) return false;
  if (x == 1) return false;
  if (x == 2) return true;
  for (long long i = 2; i <= sqrt(x); i ++) {
    if (x % i == 0) return false;
  }
  return true;
}
long long sumcs(long long x) {
  long long ans = 0;
  long long y = x;
  while(y != 0) {
    ans += y % 10;
    y /= 10;
  }
  return ans;
}
int main () {
  freopen ("DPRIME.INP","r",stdin);
  freopen ("DPRIME.OUT","w",stdout);
  cin >> N;
  for (int i = 1; i <= N; i ++) cin >> A[i];
  for (int i = 1; i <= N; i ++) {
    if (A[i] <= 0) continue;
    if (prime(sumcs(A[i])) == false) {
      continue;
    }else{
      if (prime(A[i]) == false) continue;
      else {
        B[cnt] = A[i];
        cnt ++;
      }
    }
  }
  cnt --;
  cout << cnt << endl;
  for (int i = 1; i <= cnt; i ++) cout << B[i] << " ";
}
