#include <iostream>
using namespace std;
int summa(int n) {
  int s = 0;
  while (n) {
    s = s + n;
    n -= 1;
  }
  return s;
};

int main() {
  int n;
  cin >> n;
  cout << summa(n) << endl;
  return 0;
}