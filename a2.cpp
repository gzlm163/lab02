/**********************
 * Автор: Гинжул Мария*
 * Дата: 25.09.2025   *
 * Вариант: 3         *
 * ********************/
 
#include <cmath>
 
#include <iostream>
 
using namespace std;
 
int main() {
  double e;
  double r;
  double R;
  double P;
   
  cout << " e = ";
  cin >> e;
  cout << " r = ";
  cin >> r;
  cout << " R = ";
  cin >> R;
   
  while (R < 50) {
    P = R * pow(e / (R + r), 2);
    cout << " R = " << R << "  " << " P = " << P << endl;
    R += 10;
  }
   
  while (R <= 300) {
    P = R * pow(e / (R + r), 2);
    cout << " R = " << R << "  " << " P = " << P << endl;
    R += 50;
  }
   
  return 0;
}