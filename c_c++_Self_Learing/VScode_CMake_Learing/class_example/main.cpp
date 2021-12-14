#include "swap.h"

int main(int argc, char **argv)
{
    swap myswap(10, 20);
    std::cout << "before swap" << std::endl;
    myswap.printInfo();
    myswap.run();
    std::cout << "after swap" << std::endl;
    myswap.printInfo();

    return 0;
}