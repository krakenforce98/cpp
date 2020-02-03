#include <bits/stdc++.h>
using namespace std;
int N;
long long Distance;
long long a[100001], b[100001];
long long Min = 10000000010000LL;
int main () {
  freopen ("RBPOINT2.INP","r",stdin);
  freopen ("RBPOINT2.OUT","w",stdout);
  cin >> N;
  for (int i = 1; i <= N; i ++) cin >> a[i];
  for (int i = 1; i <= N; i ++) cin >> b[i];
  sort(a+1,a+1+N);
  sort(b+1,b+1+N);

  for (int i = 1; i <= N; i ++) {
    //a[i]
    int j = lower_bound(b+1,b+1+N,a[i]) - b;
    if (j != 1)
      Distance = min(abs(b[j] - a[i]), abs(b[j-1] - a[i]));
    else
      Distance = abs(b[j] - a[i]);
    if (Distance < Min) Min = Distance;
  }
  cout << Min;
}
