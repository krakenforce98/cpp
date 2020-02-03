#include <iostream>
using namespace std;
long a[100001];
int main () {
    int n;
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; i ++) {
      cin >> a[i];
      cout << a[i]*i - a[i-1]*(i-1) << ' ';
    }

}
