#include <bits/stdc++.h>
using namespace std;
struct hs {
  string name;
  int age, score;
};
hs arr[1000001];
bool compare(hs a, hs b) {
  if (a.score != b.score) return a.score < b.score;
  else return a.age < b.age;
}
int main () {
  freopen ("HS.INP","r",stdin);
  freopen ("HS.OUT","w",stdout);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> arr[i].name >> arr[i].age >> arr[i].score;
  sort(arr+1,arr+1+n,compare);
  for (int i = 1; i <= n; i ++) {
    cout << arr[i].name << " " << arr[i].age << " " << arr[i].score << endl;
  }
}
