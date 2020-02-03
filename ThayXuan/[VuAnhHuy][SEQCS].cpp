#include <bits/stdc++.h>
using namespace std;
long N, M;
pair<long, long> A[100001], B[100001];
long binarySearch(pair<long, long> arr[], long l, long r, long x)
{
    if (r >= l) {
        long mid = l + (r - l) / 2;

        if (arr[mid].first == x)
            return mid;

        if (arr[mid].first > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
int main () {
  freopen ("SEQCS.INP","r",stdin);
  freopen ("SEQCS.OUT","w",stdout);
  cin >> N >> M;
  for (long i = 1; i <= N; i ++) {
    cin >> A[i].first;
    A[i].second = i;
  }
  for (long i = 1; i <= M; i ++) {
    cin >> B[i].first;
  }
  sort(A+1,A+1+N);
  for (long i = 1; i <= M; i ++) {
    //B[i]
    long pos = binarySearch(A, 1, N, B[i].first);
    if (pos == -1) {
      cout << -1 << endl;
    }else{
      cout << A[pos].second << endl;
    }

  }
}
