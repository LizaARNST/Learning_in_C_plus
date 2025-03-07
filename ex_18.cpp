
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введите количество чисел" << endl;
  cin >> n;
  int arr[n + 1];
  int a = 1;
  int b = 1;
  int c;
  for (int i = 0; i < n; i++) {

    while (n) {

      arr[i] = a;
      cout << arr[i] << " ";
      int c;
      c = a;
      a = b;
      b = a + c;
      n -= 1;
    }
  }

  return 0;
}
