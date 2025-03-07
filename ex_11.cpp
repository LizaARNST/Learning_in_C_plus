#include <iostream>
using namespace std;
int main() {
  double m;
  cout << "Скорость в м/с: ";
  cin >> m;
  double const m_in_km = 3.6;
  double km = m * m_in_km;
  cout << "Скорость в км/ч: " << km << endl;

  return 0;
}