#include <iostream>
using namespace std;
int main() {
  double sn, ar;
  cout << "Введите  сажени ";
  cin >> sn;
  cout << "Введите аршины  ";
  cin >> ar;
  double const k_sn = 2.16;
  double m, sm;
  sn = sn + double(ar / 3);
  m = sn * k_sn;
  m = (int)(m / 1);
  //   cout << m ;
  sm = (sn * k_sn - m) * 100;

  cout << "Метры: " << m << " Cантиметры:" << sm << endl;

  return 0;
}