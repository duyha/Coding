#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isPowerOfTwo(int n) {
  // return __builtin_popcount(n) == 1;
  if (n <= 0) {
    return false;
  }
  while (n > 0) {
    int bit = n % 2;
    n = n / 2;
    if (n > 0 && bit != 0) {
      return false;
    }
  }
  return true;
}

bool isPowerOfK(int n, int k) {
  if (n <= 0) {
    return false;
  }
  if (n == 1) {
    return true;
  }
  if (n > 1 && n < k) {
    return false;
  }
  return (n % k == 0) && isPowerOfK(n / k, k);
}

int main()
{
  cout << 100 << endl;
  vector<int> inputs{0, 1, 2, 3, 4, 5, 8, 16, 20, 1 << 30};
  for (const auto& i : inputs) {
    cout << i << " : " << isPowerOfTwo(i) << endl;
  }

  // Check power of 3
  vector<int> inputs2{-1, 1, 2, 3, 4, 9, 27, 30, 100};
  for (const auto& i : inputs2) {
    cout << "power of 3: " << i << " => " << isPowerOfK(i, 3) << endl;
  }
  return 0;
}
