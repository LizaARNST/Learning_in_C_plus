#include <iostream>
using namespace std;
int main() {
  int n = 10;
  int count = 0;
  while (n) {
    count += 1;
    if (count % 2 == 1)
      cout << count << " ";
    n -= 1;
  }
  return 0;
}
