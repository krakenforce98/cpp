#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  long long sum = 0;
  long long a;
  for (int i = 1; i <= n; i ++) {
    cin >> a;
    if (a > 0) sum += a;
  }
  sum = sum * 2;
  cout << sum;
}
