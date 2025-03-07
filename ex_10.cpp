#include <iostream>
using namespace std;
int main() {
  double km;
  cout << "Скорость в км/ч: ";
  cin >> km;
  double const km_in_m = 0.2778;
  double m = km * km_in_m;
  cout << "Скорость в м/с: " << m << endl;

  return 0;
}