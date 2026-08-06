#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    unordered_set<ll> set;
    int max_count = 1;
    int n = nums.size();
    for (int num : nums) {
      set.insert(num);
    }
    for (int i = 0; i < n; i++) {
      if (set.find(nums[i] - 1) == set.end()) {
        int current_count = 1;
        int temp = nums[i] + 1;
        while (set.find(temp) != set.end()) {
          current_count++;
          temp++;
        }
        max_count = max(current_count, max_count);
      }
    }
    return max_count;
  }
};
