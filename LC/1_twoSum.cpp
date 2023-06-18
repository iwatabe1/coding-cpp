#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
      int sub = target - nums[i];
      if (mp.count(sub)) {
        return {mp[sub], i};
      }
      mp[nums[i]] = i;
    }

    return {0, 1};
  }
};

int main(void) {
  Solution solution;
  vector<int> nums = {3, 2, 3};
  int target = 6;
  vector<int> ans = solution.twoSum(nums, target);
  cout << '[' << ans[0] << ',' << ans[1] << ']' << endl;
}
