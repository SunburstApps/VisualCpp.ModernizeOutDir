#include <iostream>

void SayHello(const char* toWhom) {
    if (toWhom == nullptr) std::cout << "Hello, World!" << std::endl;
    else std::cout << "Hello, " << toWhom << "!" << std::endl;
}
