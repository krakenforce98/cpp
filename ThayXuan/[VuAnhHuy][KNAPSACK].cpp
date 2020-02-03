#include <bits/stdc++.h>
using namespace std;
int B[5001][5001] = {0};
int N, M;
int W[5001], V[5001];

int main () {
  freopen  ("KNAPSACK.INP","r",stdin);
  freopen  ("KNAPSACK.OUT","w",stdout);
   cin >> N >> M;
   for (int i = 1; i <= N; i ++) cin >> W[i] >> V[i];
   for (int i = 1; i <= N; i ++) {
     for (int j = 0; j <= M; j ++) {
       B[i][j] = B[i-1][j];
       if (j >= W[i] && B[i][j] < B[i-1][j-W[i]] + V[i])
          B[i][j] = B[i - 1][j - W[i]] + V[i];
     }
   }
   cout << B[N][M];
}
