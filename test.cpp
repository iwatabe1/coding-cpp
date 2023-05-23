#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, W;
  cin >> N >> W;
  vector<pair<long long, long long>> V(N);
  for (auto &v : V) {
    cin >> v.first >> v.second;
  }

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  long long ans = 0;
  for (auto &v : V) {
    ans += v.first * min(W, v.second);
    W -= min(W, v.second);
  }
  cout << ans << endl;
  return 0;
}
