#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a = 0;
  for (int i = 0; i <= n; i++) {
    a = 4 * i + 3;
    cout << a << " ";
  }
  return 0;
}
