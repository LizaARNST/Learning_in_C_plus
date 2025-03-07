#include <iostream>
using namespace std;
int main() {
  double km;
  cin >> km;
  double const k_ml = 0.621371;
  double ml = km * k_ml;
  cout << ml;

  return 0;
}