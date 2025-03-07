#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введите количество чисел" << endl;
  cin >> n;
  int arr[n + 1];
  for (int i; i <= n; i++) {

    cin >> arr[i];
  }

  return 0;
}