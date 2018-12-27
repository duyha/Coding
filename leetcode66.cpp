#include <iostream>
#include <vector>
#include <map>
using namespace std;

template <typename T>
void printVector(vector<T>& vec) {
  std::copy(vec.begin(), 
            --vec.end(), 
            std::ostream_iterator<T>(std::cout, ","));
  std::cout << vec.back() << endl;
}

vector<int> plusOne(vector<int>& digits) {
  vector<int> vec;
  int digit = 0;
  int carry = 1;
  for (int idx = digits.size() - 1; idx >= 0; idx--) {
    digit = digits[idx] + carry;
    carry = digit / 10;
    digit = digit % 10;
    vec.push_back(digit);
  }
  if (carry > 0) {
    vec.push_back(carry);
  }
  std::reverse(vec.begin(), vec.end());
  return vec;
}

int main()
{
  cout << 100 << endl;
  vector<int> vec{1, 0, 9};
  printVector(vec);
  auto result = plusOne(vec);
  printVector(result);
  return 0;
}
