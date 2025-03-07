#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введите количество чисел" << endl;
  cin >> n;
  int arr[n + 1];
  for (int i; i <= n; i++) {
    if (i % 2 == 0) {
      arr[i] = i;
      cout << arr[i] << " ";
    } else {
      arr[i] = i * i;
      cout << arr[i] << " ";
    }
  }

  return 0;
}