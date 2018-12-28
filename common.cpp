#include <iostream>
#include <vector>
#include <map>
using namespace std;

template <typename T>
void printVector(vector<T>& vec) {
  std::copy(vec.begin(), 
            --vec.end(), 
            std::ostream_iterator<T>(std::cout, ", "));
  std::cout << vec.back() << endl;
}
int main()
{
  cout << 100 << endl;
  vector<int> vec{1, 0, 9};
  printVector(vec);
  vector<string> vec2{"a", "bc"};
  printVector(vec2);
  return 0;
}
