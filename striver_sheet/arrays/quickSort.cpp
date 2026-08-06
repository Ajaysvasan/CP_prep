#include <bits/stdc++.h>
using namespace std;

class Solution {
  int partition(vector<int> &nums, int left, int right) {
    int pivot = nums[right];
    int i = left - 1;
    for (int j = left; j <= right; j++) {
      if (nums[j] < pivot) {
        ++i;
        swap(nums[j], nums[i]);
      }
    }
    swap(nums[i + 1], nums[right]);
    return i + 1;
  }

  void quick_sort(vector<int> &nums, int left, int right) {
    if (left < right) {
      int pi = partition(nums, left, right);
      quick_sort(nums, left, pi - 1);
      quick_sort(nums, pi + 1, right);
    }
  }

public:
  vector<int> quickSort(vector<int> &nums) {
    int left = 0, right = nums.size() - 1;
    quick_sort(nums, left, right);
    return nums;
  }
};
