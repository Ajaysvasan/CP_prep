#include <bits/stdc++.h>
using namespace std;
class Solution {

public:
  void merge(vector<int> &nums, int left, int right, int mid) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1);
    vector<int> R(n2);
    for (int i = 0; i < n1; i++) {
      L[i] = nums[i + left];
    }
    for (int i = 0; i < n2; i++) {
      R[i] = nums[mid + i + 1];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
      if (L[i] <= R[j]) {
        nums[k] = L[i];
        i++;
      } else {
        nums[k] = R[j];
        j++;
      }
      k++;
    }
    while (i < n1) {
      nums[k] = L[i];
      i++;
      k++;
    }

    while (j < n2) {
      nums[k] = R[j];
      j++;
      k++;
    }
  }
  void merge_sort(vector<int> &nums, int left, int right) {
    if (left >= right)
      return;
    int mid = left + (right - left) / 2;
    merge_sort(nums, left, mid);
    merge_sort(nums, mid + 1, right);
    merge(nums, left, right, mid);
  }
  vector<int> mergeSort(vector<int> &nums) {
    int left = 0, right = nums.size() - 1;
    merge_sort(nums, left, right);
    return nums;
  }
};
