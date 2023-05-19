#include <iostream>

int main(){
    double celsius = 0;
    std::cout << "Write down degree in Calsius: ";
    std::cin >> celsius; 
    double fahrenheit = celsius * 9/5 + 32;
    std::cout<< fahrenheit << std::endl;
    return 0;
}