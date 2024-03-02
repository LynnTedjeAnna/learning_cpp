#include <iostream>

void log(const char* message) {
    std::cout << message << std::endl;
}

int main()
{
    log("Hello world");
    std::cin.get();
}
