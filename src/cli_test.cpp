// cli_test.cpp: определяет точку входа для приложения.
//

#include "../headers/cli_test.h"


int main()
{
    std::cout << "2 + 3 = " << add(2, 3) << "\n";
    std::cout << "10 - 4 = " << subtract(10, 4) << "\n";
    std::cout << "15 / 2 = " << divide(15, 2) << "\n";
    return 0;
}
