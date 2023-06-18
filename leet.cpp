#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int maxMon = 0;
    int minMon = prices[0];
    for (int i = 1; i < prices.size(); ++i) {
      minMon = min(minMon, prices[i - 1]);
      maxMon = max(maxMon, prices[i] - minMon);
    }
    return maxMon;
  }
};

int main(void) {
  Solution solution;
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  int ans = solution.maxProfit(prices);
  cout << ans << endl;
}
