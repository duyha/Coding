#include <iostream>
#include <vector>
#include <map>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int current_sum = 0, max_sum = INT_MIN, min_sum = 0;
  for (const auto& num : nums) {
    current_sum += num;
    auto diff = current_sum - min_sum;
    max_sum = std::max(max_sum, diff);
    min_sum = std::min(min_sum, current_sum);
  }
  return max_sum;
}

int main()
{
  vector<int> nums1{1, 2, 3, -2, 7, -10, 8};
  cout << maxSubArray(nums1) << endl;
  vector<int> nums2{1};
  cout << maxSubArray(nums2) << endl;
  vector<int> nums3{-1, -2};
  cout << maxSubArray(nums3) << endl;
  vector<int> nums4{};
  cout << maxSubArray(nums4) << endl;
  return 0;
}
