#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;


const set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

inline bool is_vowel(char c) {
  return (vowels.find(char(std::tolower(c))) != vowels.end());
}

std::string reverseVowels(std::string r) {
    int left = 0, right = r.size() - 1;
    while (left < right) {
      if (!is_vowel(r[left])) {
        left++;
      } else if (!is_vowel(r[right])) {
        right--;
      }
      else {
        std::swap(r[left], r[right]);
        left++;
        right--;
      }
    }
    return r;
}

int main()
{
  std::vector<std::string> test_values {"hello", "abc", "abceko", ""};
  for (const auto n : test_values) {
    cout << "n = " << n << ": " << reverseVowels(n) << ", " << endl; 
  }
  return 0;
}
