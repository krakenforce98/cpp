#include <bits/stdc++.h>
using namespace std;
//.first.first : so lan
//.first.second : a
//.second.first : b
//.second.second : c
pair <pair<int,int>, pair<int,int> > a[100001];
bool ok[100001];
int main () {
  freopen ("POLI.INP","r",stdin);
  freopen ("POLI.OUT","w",stdout);
  int N,K;
  int count = 0;
  cin >> N >> K;
  for (int i = 1; i <= N; i ++) {
    a[i].first.first = 0;
    cin >> a[i].first.second >> a[i].second.first >> a[i].second.second;
  }
  for (int i = 1; i <= N; i ++) {
    if (a[i].first.second > a[i].second.first) a[i].first.first = 0;
    else {
      while (a[i].first.second < a[i].second.first) {
        a[i].first.second += min(a[i].second.first, a[i].second.second);
        a[i].second.first -= min(a[i].second.first, a[i].second.second);
        a[i].first.first ++;
      }
    }
  }
  sort(a+1,a+1+N);
  for (int i = 1; i <= N; i ++) {
    if (K >= a[i].first.first) {
      K -= a[i].first.first;
      count ++;
    }else{
      break;
    }
  }
  cout << count;
}
