#include <bits/stdc++.h>
using namespace std;
string string1, string2;
char char1[50],char2[50];

int main () {
  freopen ("XAUCHUNG.INP","r",stdin);
  freopen ("XAUCHUNG.OUT","w",stdout);
  gets(char1);
  gets(char2);
  string1 += char1;
  string2 += char2;

  int len1 = string1.length() - 1;
  int max = 0;
  int z = 0;
  string temp = "";
  for (int i = 0; i <= len1; i ++) {
    for (int j = i; j <= len1; j ++) {
      temp += string1[j];
      if (string2.find(temp) != string::npos) {
        if (temp.length() > max) max = temp.length();
      }
    }
    temp = "";
  }
  cout << max;
}
