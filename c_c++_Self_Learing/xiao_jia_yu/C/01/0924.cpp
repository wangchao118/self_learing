#include <iostream>

#define FULL_GAS 85

class Car
{
public:
    std::string color;
    std::string engine;
    unsigned int gas_tank;
    unsigned int wheel;

    Car(void);                  //声名构造器,需要现在类内部进行声明
    void setColor(std::string col);
    void setEngine(std::string eng);
    void setWheel(unsigned int whe);
    void fillTank(int liter);
    int running(void);
    void warning(void);
};

Car::Car(void)                 //创建构造器,没有任何返回值,不用void
{
    color = "White";
    engine = "V8";
    wheel = 4;
    gas_tank = FULL_GAS;

}

void Car::setColor(std::string col)
{
    color = col;
}

void Car::setEngine(std::string eng)
{
    engine = eng;
}

void Car::fillTank(int liter)
{
    gas_tank += liter;
}

int Car::running(void)
{
    char i;
    std::cout<<"我正在以120的时速往前移动...\n";
    gas_tank--;
    std::cout<<"当前还剩"<<100*gas_tank/FULL_GAS<<"%"<<"油量!\n";

    if(gas_tank < 10)
    {
        std::cout<<"请问是否需要加满油再行驶?(Y/N)\n";
        std::cin>>i;
        if('Y' == i || 'y' == i)
        {
            fillTank(FULL_GAS);
        }

        if ( 0 == gas_tank)
        {
            std::cout<<"拋锚中....";
            return 1;
        }
    }

    return 0;
}

void Car::warning(void)
{
    std::cout<<"WARING!"<<"还剩"<<100*gas_tank/FULL_GAS<<"%"<<"油量!";
}

int main()
{
    Car mycar;
    while (!mycar.running())
    {
        ;
    }
    return 0;
}

