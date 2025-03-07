#include <iostream>
using namespace std;
int power(int a, int n) {

  int res = 1;
  if (n > 0) {
    while (n) {
      res *= a;
      n--;
    }
  }

  return res;
}

int main() {
  int n;
  cout << "Введите количество чисел";
  cin >> n;
  int arr[n + 1];
  for (int i; i <= n; i++) {

    arr[i] = power(2, i);
    cout << arr[i] << " ";
  }

  return 0;
}