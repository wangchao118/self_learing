#include <iostream>
#include "account.h"
using namespace std;

Account::Account(std::string account_name_, std::string ID_, int cash_)
{
    account_name = account_name_;
    ID = ID_;
    cash = cash_;
}

void Account::show_info()
{
    cout<<"account_name: "<<account_name<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"cash: "<<cash<<endl;
}

int Account::put_in_cash(int cash_in_)
{
    cash += cash_in_;
    return cash;
}

int Account::get_out_cash(int cash_out_)
{
    cash -= cash_out_;
    return cash;
}

Account::~Account()
{

}
