#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a = 1;
  int b = 1;
  while (n) {

    cout << a << " ";
    int c;
    c = a;
    a = b;
    b = a + c;
    n -= 1;
  }
  return 0;
}
