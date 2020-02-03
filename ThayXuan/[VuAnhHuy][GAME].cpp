#include <bits/stdc++.h>
using namespace std;
int ts[10001];
int gt[10001];
int main () {
  freopen ("GAME.INP","r",stdin);
  freopen ("GAME.OUT","w",stdout);
  int a[10001];
  int N;
  cin >> N;
  for (int i = 1; i <= N; i ++) {
    cin >> a[i];
    ts[i] = 1;
  }
  sort(a+1,a+1+N);
  int count = 1;
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
  int max = 0;
  for (int i = 1; i <= count; i ++) {
    if (ts[i] > max) max = ts[i];
  }
  cout << max;
}
