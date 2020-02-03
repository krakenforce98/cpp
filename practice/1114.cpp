#include <iostream>
using namespace std;

int main () {
  long long m;
  cin >> m;
  long long ans;
  if (m % 2 == 0) {
    ans = m / 2;
  }else{
    ans = - (m + 1) / 2;
  }
  cout << ans;
}
