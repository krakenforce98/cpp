#include <bits/stdc++.h>
using namespace std;
long long A[1001];
int N;
int binarySearch(long long arr[], int l, int r, long long x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
int main () {
  freopen ("TRIANGLE.INP","r",stdin);
  freopen ("TRIANGLE.OUT","w",stdout);
  int cnt = 0;
  cin >> N;
  if (N < 3) {
    cout << 0;
    return 0;
  }
  for (int i = 1; i <= N; i ++) {
    cin >> A[i];
    A[i] *= A[i];
  }
  sort(A+1,A+1+N);
  for (int i = 1; i <= N - 2; i ++) {
    for (int j = i + 1; j <= N - 1; j ++) {
      if (binarySearch(A,j+1,N,A[i] + A[j]) != -1) cnt ++;
    }
  }
  cout << cnt;
}
