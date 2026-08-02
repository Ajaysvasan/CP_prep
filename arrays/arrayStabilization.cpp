#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> a;
  int data;
  while (std::cin >> data) {
    a.push_back(data);
  }
  int left_val = a[0];
  int answer = 0;
  for (int num : a) {
    if (num != left_val) {
      answer++;
    }
  }
  std::cout << answer;
  return 0;
}
