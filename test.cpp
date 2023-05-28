#include <bits/stdc++.h>
using namespace std;

// vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記

  int ans = 0;
  for (int a : A) {
    for (int p : P) {
      if (S == (a + p)) {
        ans++;
      }
    }
  }

  cout << ans << endl;
}
