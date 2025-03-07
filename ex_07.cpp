#include <iostream>
using namespace std;
int main() {
  double km, m;
  cout << "Введите  километры ";
  cin >> km;
  cout << "Введите метры ";
  cin >> m;
  double const k_ml = 0.621371;
  double const k_ft = 5280;
  double ml, ft;
  m = m + (km * 1000);
  ft = m * 3.28;
  ml = (int)(ft / 5280);
  ft = ft - ml * 5280;
  cout << "Мили:" << ml << "Футы:" << ft;

  return 0;
}