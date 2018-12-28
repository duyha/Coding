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

int main()
{
  cout << 100 << endl;
  vector<int> inputs{0, 1, 2, 3, 4, 5, 8, 16, 20, 1 << 30};
  for (const auto& i : inputs) {
    cout << i << " : " << isPowerOfTwo(i) << endl;
  }
  return 0;
}
