#include <iostream>
using namespace std;
int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; ++i) {
    result *= i;
  }
  return result;
}
int main() {
  int n;
  cin >> n;
  if (n <= 0) {
    cout << "Error";
    return 0;
  }

  for (int i = 0; i < n + 1; i++) {
    int C = factorial(n) / (factorial(i) * (factorial(n - i)));
    cout << C << " ";
  }
  return 0;
}
