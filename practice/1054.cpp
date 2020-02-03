##include <bits/stdc++.h>
using namespace std;

int main () {
  int m;
  cin >> m;
  string a[8];
  a[0] = "vaporeon";
  a[1] = "jolteon";
  a[2] = "flareon";
  a[3] = "espeon";
  a[4] = "umbreon";
  a[5] = "leafeon";
  a[6] = "glaceon";
  a[7] = "sylveon";
  int score[8];
  memset(score, 0, sizeof(score));
  string n;
  cin >> n;
  for (int i = 0; i <= 7; i ++) {
    if (a[i].length() == m) {
      score[i] ++;
    }
  }
  for (int i = 0; i <= n.length() - 1; i ++) {
    if (n[i] != '.') {
      for (int j = 0; j <= 7; j ++) {
        string temp = a[j];
        if (temp[i] == n[i]) score[j] ++;
      }
    }
  }
  int g;
  int max = 0;
  for (int i = 0; i <= 7; i ++) {
    if (score[i] >= max){
      max = score[i];
      g = i;
    }
  }
  cout << a[g];
}
