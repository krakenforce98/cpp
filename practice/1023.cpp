#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  long sum = 0;
  for (int i = 0; i <= n; i ++) {
    sum += i*(i+1) + i*(i+1)/2;
  }
  cout << sum;
  return 0;
}
