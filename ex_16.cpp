#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введите количество чисел" << endl;
  cin >> n;
  int arr[n + 1];
  for (int i; i < n; i++) {

    arr[i] = (i + 1) * (i + 1);
    cout << arr[i] << " ";
  }

  return 0;
}