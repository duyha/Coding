#include <iostream>
#include <vector>
#include <map>
using namespace std;

int climbStairs(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }
    int r0 = 1, r1 = 2;
    for (int i = 0; i < n - 2; i++) {
        int r2 = r0 + r1;
        r0 = r1; 
        r1 = r2;
    }
    return r1;
}

int main()
{
  vector<int> test_values {1, 2, 3, 4, 30};
  for (const auto n : test_values) {
    cout << "n = " << n << ": " << climbStairs(n) << endl;
  }
  return 0;
}
