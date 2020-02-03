#include <bits/stdc++.h>
using namespace std;
int binarySearch(pair<long long, int> arr[], int l, int r, long long x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid].first == x)
            return mid;
        if (arr[mid].first > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main () {
  //ap = aq + k
  freopen ("SEQ.INP","r",stdin);
  freopen ("SEQ.OUT","w",stdout);
  int n;
  pair <long long, int> a[100001];
  long long k;
  cin >> n >> k;
  for (int i = 1; i <= n; i ++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a+1,a+1+n);
  for (int i = 1; i <= n; i ++) {
    int res = binarySearch(a, 1, n, a[i].first + k);
    if (res != -1 && a[res].second != a[i].second) {
      cout << a[res].second << " " << a[i].second;
      return 0;
    }
  }
  cout << 0 << " " << 0;
}
