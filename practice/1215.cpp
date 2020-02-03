#include <bits/stdc++.h>
using namespace std;
long binarySearch(long arr[], long l, long r, long x)
{
    if (r >= l) {
        long mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
long n, a[100001];
int main () {
  cin >> n;
  for (long i = 1; i <= n; i++) {
    cin >> a[i];
  }
  long b = a[1];
  for (long i = 1; i <= n; i ++) {
    b = __gcd(b,a[i]);
  }
  sort(a+1,a+1+n);
  if (binarySearch(a,1,n,b) != -1) {
    cout << b;
  }else{
    cout << -1;
  }

}
