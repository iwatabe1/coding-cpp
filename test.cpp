#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 各操作を行う関数を実装する

int main() {
  ll N;
  cin >> N;
  vector<vector<ll>> XY(N);

  for (int i = 0; i < N; ++i) {
    ll x, y;
    cin >> x >> y;
    XY[i] = {x, y};
  }
  string S;
  cin >> S;

  map<ll, ll> left;
  map<ll, ll> right;

  for (int i = 0; i < N; ++i) {
    if (S.at(i) == 'R') {
      if (right.count(XY[i][1])) {
        right[XY[i][1]] = min(XY[i][0], right[XY[i][1]]);
      } else {
        right[XY[i][1]] = XY[i][0];
      }

    } else {
      if (left.count(XY[i][1])) {
        left[XY[i][1]] = max(XY[i][0], left[XY[i][1]]);
      } else {
        left[XY[i][1]] = XY[i][0];
      }
    }
  }

  string ans = "No";

  for (auto l : left) {
    if (right.count(l.first)) {
      // 両方あるときだけ判定
      if (l.second > right.at(l.first)) {
        ans = "Yes";
        break;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
