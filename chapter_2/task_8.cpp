#include <iostream>
#include <iomanip>
int main() {

long pop1 = 4789426;
long pop2 = 274124;
long pop3 = 9761;

std::cout << std::setw(9) << "Location" << std::setw(12) << "Population" << std::endl
<< std::setw(9) << "Moscow" << std::setw(12) << pop1 << std::endl
<< std::setw(9) << "Kirov" << std::setw(12) << pop2 << std::endl
<< std::setw(9) << "Kursk" << std::setw(12) << pop3 << std::endl;

return 0;
}