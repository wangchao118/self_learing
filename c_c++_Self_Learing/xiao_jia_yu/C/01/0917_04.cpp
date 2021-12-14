# include <iostream>

void convertTempature(double tempIn, char typrIn);

int main()
{
    double tempIn;
    char typeIn;
    std::cout<<"请以[xx.x C]或[xx.x F]的形式输入温度:";
    std::cin.ignore(100, '\n');
    std::cout<<'\n';
    convertTempature(tempIn, typeIn);
    return 0;
}

void convertTemperature(double tempIn, char typeIn)
{
    const unsigned short ADD_SUBTRACT = 32;
    const double RATIO = 9.0/5.0;

    float tempOut;
    char typeOut;

}