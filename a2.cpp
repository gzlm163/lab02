/**********************
 * Автор: Гинжул Мария*
 * Дата: 28.09.2025   *
 * Вариант: 3         *
 * ********************/
 
#include <cmath>
 
#include <iostream>
 
using namespace std;
 
int main() {
  double emf;
  double r;
  double R;
  double R5;
  double R10;
  double P;
   
  cout << " emf = ";
  cin >> emf;
  cout << " r = ";
  cin >> r;
  cout << " R = ";
  cin >> R;
  cout << " R5 = ";
  cin >> R5;
  cout << " R10 = ";
  cin >> R10;
 
   
  while (R < R5) {
    P = R * pow(emf / (R + r), 2.0);
    cout << " R = " << R << "  " << " P = " << P << endl;
    R += 10.0;
  }
   
  do {
    P = R * pow(emf / (R + r), 2.0);
    cout << " R = " << R << "  " << " P = " << P << endl;
    R += 50.0; } while (R <= R10);
   
  return 0;

}
