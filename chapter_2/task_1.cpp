#include <iostream>
float convert_cubic_foot_to_halon(int cubic_foot);

int main() {
    int cubic_foot = 0;
    std::cout << "Hello! Write down the number of cubic feet you want to convert to halons: ";
    std::cin >> cubic_foot;
    std::cout << cubic_foot << " cubic foot is equal " << convert_cubic_foot_to_halon(cubic_foot) << " halons "
        <<std::endl;
    return 0;
};

float convert_cubic_foot_to_halon(int cubic_foot) {
    const float halon = 7.481F;
    return static_cast<float>(cubic_foot)*halon;
}