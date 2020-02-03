#include <bits/stdc++.h>
using namespace std;
string arr[101];
string _dna;
int main () {
  freopen ("DNA.INP","r",stdin);
  freopen ("DNA.OUT","w",stdout);
  int n;
  cin >> _dna >> n;
  for (int i = 1; i <= n; i ++) {
    cin >> arr[i];
  }
  for (int i = 1; i <= n; i ++) {
    if (arr[i].length() == _dna.length()) {
      int temp = 0;
      for (int j = 0; j <= arr[i].length()-1; j ++) {
        if (arr[i][j] != _dna[j]) temp ++;
      }
      if (temp <= 2) cout << i << " ";
    }
  }
}
