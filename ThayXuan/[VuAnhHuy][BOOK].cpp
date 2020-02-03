#include <bits/stdc++.h>
using namespace std;
int N;
long sum = 0, C[1000001];
int main () {
  freopen ("BOOK.INP","r",stdin);
  freopen ("BOOK.OUT","w",stdout);
  cin >> N;
  for (int i = 1; i <= N; i ++) cin >> C[i];
  sort(C+1,C+1+N);
  if (N < 3) {
    for (int i = 1; i <= N; i ++) sum += C[i];
    cout << sum;
    return 0;
  }
  int cnt = 1;
  for (int i = N; i >= 1; i --) {
    if (cnt != 3)  {
      sum += C[i];
      cnt ++;
    }
    else cnt = 1;
  }
  cout <<  sum;
}
