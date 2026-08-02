#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> a;
  int data;
  while (std::cin >> data) {
    a.push_back(data);
  }
  int min_val = *std::min_element(a.begin(), a.end());
  int answer = 0;
  for (int num : a) {
    answer += num - min_val;
  }
  std::cout << answer;
  return 0;
}
