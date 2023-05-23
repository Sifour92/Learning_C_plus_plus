#include <iostream>

int main() {

double divisible_1 = 0;
double divisible_2 = 0;
char sign_1 = 0;
double res_1 = 0;

double divider_1 = 0;
double divider_2 = 0;
char sign_2 = 0;
double res_2 = 0;


std::cout << "Введите первую дробь : ";
std::cin >> divisible_1 >> sign_1 >> divisible_2;
res_1 = divisible_1 / divisible_2;
std::cout << "Введите вторую дробь дробь : ";
std::cin >> divider_1 >> sign_2 >> divider_2;
res_2 = divider_1  /  divider_2;
std::cout << res_2 * res_2 <<std::endl;
return 0;
}