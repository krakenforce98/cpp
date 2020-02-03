#include <iostream>
using namespace std;

int main () {
  int a, b;
  cin >> a >> b;
  int sum = a * 60 + b;
  sum -= 45;
  if (a == 0 && b-45 < 0) {
    cout << 23 << " " << (sum + 60) % 60;
  }else
  cout << sum / 60 << " " <<  ( sum + 60 )% 60;
  return 0;
}
