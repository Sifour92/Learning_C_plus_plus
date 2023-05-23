#include <iostream>
#include <iomanip>

int main() {

std::cout << std::setiosflags(std::ios::left) << std::setw(10) << "Lastname"<< std::setw(10)<< "Firstname" << std::setw(15) << "Adress"<< std::setw(10) << "City" << std::endl;
std::cout << std::setw(40) << std::setfill('-') << '-' << std::endl;
std::cout << std::setiosflags(std::ios::left) << std::setfill(' ') << std::setw(10) << "Forest"<< std::setw(10)<< "Jhon" << std::setw(15) << "Ten Avenue"<< std::setw(10) << "Chicago" << std::endl;

return 0;
}