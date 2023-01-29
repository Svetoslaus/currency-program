#include <iostream>

int main() {
  
  //rates to USD
  double pesos = 0.00040;
  double reais = 0.30;
  double soles = 0.4;

  double count;
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cin >> reais,
  std::cin >> soles;

 double dollars = 0.00040 * pesos + 0.30 * reais + 0.4 * soles;

 std::cout << "US Dollars = $" <<
 dollars << "\n";


}
