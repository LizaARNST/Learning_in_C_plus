#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введите количество чисел" << endl;
  cin >> n;
  int arr[n + 1];
  for (int i; i < 2 * n; i++) {

    if ((i % 2) == 0) {
      arr[i / 2] = i;
      cout << " " << arr[i / 2];
    }
  }

  return 0;
}