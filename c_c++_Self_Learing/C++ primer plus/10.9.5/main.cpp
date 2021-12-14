#include <iostream>
#include "account.h"

using namespace std;
int main()
{
    Account Tom("Tom", "123456", 10000);

    Tom.show_info();
    Tom.put_in_cash(2000);
    Tom.show_info();
    return 0;
}
