#include <iostream>
using namespace std;

int main () {
  long long m, n, k;
  cin >> m >> n >> k;
  long long team;
  if (m / 2 >= n) {
    team = n;
  }
  if (m / 2 < n) {
    team = m / 2;
  }
  k -= m - team*2 + n - team;
  if (k >= 0) {
    if (k % 3 == 0) {
      team -= k/3;
    }else{
      team -= k/3 + 1;
    }
  }
  cout << team;
}
