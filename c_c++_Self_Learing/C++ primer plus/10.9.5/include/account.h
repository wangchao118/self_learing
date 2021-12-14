#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
using namespace std;

class Account
{
private:
    std::string account_name;
    std::string ID;
    int cash;

public:
    Account(std::string account_name_, std::string ID_, int cash_);
    ~Account();
    void show_info();
    int put_in_cash(int cash_in_);
    int get_out_cash(int cash_out_);

};

#endif