#include <bits/stdc++.h>
using namespace std;

long long pow2(long long n, long long m) {

  if (m == 0) return 1;

  if (m == 1) return n;

  long long ans = pow2(n, m/2);

  if (m % 2 == 0) {

    return ans * ans;

  }else{

    return ans * ans * n;

  }
}

int binarySearch(int arr[], int l, int r, int x)
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

}
