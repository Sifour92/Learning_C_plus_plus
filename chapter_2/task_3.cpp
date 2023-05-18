#include <iostream>

int main() {
    int src_number = 10;
    std::cout << src_number << std::endl;
    src_number *= 2;
    std::cout << src_number << std::endl;
    std::cout << --src_number << std::endl;
    return 0;
}