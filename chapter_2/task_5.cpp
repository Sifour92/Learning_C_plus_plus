#include <iostream>
#include <ctype.h>

int main() {
    char symbol = 0;
    std::cout << "Write down one char. If upper i show you zero and 1 if char is lower: ";
    std::cin >> symbol;
    std::cout << islower(symbol);
    return 0; 
}