#include <bits/stdc++.h>
using namespace std;
long long num = 1e9 + 7;
long long fibo[1001];
char temp;
int N;
pair<int, long> a[30001];
int query;
int main () {
  freopen ("FIBBOX.INP","r",stdin);
  freopen ("FIBBOX.OUT","w",stdout);
  cin >> N >> query;
  fibo[0] = 0;
  fibo[1] = 1;
  for (int i = 2; i <= 1001; i++){
      fibo[i] = ( fibo[i - 1] % num + fibo[i - 2] % num ) % num;
  }
  for (int i = 1; i <= N; i ++) a[i].first = 0;
  for (int i = 1; i <= query; i ++) {
    cin >> temp;
    if (temp == 'D') {
      int l,r;
      cin >> l >> r;
      for (int j = l; j <= r; j ++) {
        a[j].first ++;
        a[j].second = fibo[a[j].first];
      }
    }
    if (temp == 'S') {
      int l,r;
      cin >> l >> r;
      long long sum = 0;
      for (int j = l; j <= r; j ++) {
        sum = (sum % num + a[j].second % num) % num;
      }
      cout << sum << endl;
    }
  }
}
