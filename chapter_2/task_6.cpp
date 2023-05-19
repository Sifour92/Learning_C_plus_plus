#include <iostream>

int main() {
    double dollar = 0;
    std::cout << "Write down count of dollar : " << std::endl;
    std::cin >> dollar;
    std::cout << "Conver dollar to sterling : " << dollar*1.487 << std::endl;
    std::cout << "Conver dollar to frank : " << dollar*0.172 << std::endl;
    std::cout << "Conver dollar to mark : " << dollar*0.584 << std::endl;
    std::cout << "Conver dollar to yen : " << dollar*0.00955 << std::endl;

    return 0;
}