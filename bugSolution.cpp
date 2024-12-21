#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Problematic use of std::vector<bool>
  std::vector<bool> boolVec(10);
  // Unexpected result. May not work as expected!
  boolVec[0] = true;

  // Better Alternatives
  std::vector<char> charVec(10);
  charVec[0] = 1; //Representing True

  std::vector<int> intVec(10);
  intVec[0] = 1; //Representing True

  return 0;
}
