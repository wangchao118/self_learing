#pragma once //防止头文件重复包含
#include <iostream>

class swap
{
public:
    swap(int a, int b)
    {
        this->_a = a;
        this->_b = b;
    }
    void run();
    void printInfo();  //定义两个接口
private:
    int _a;
    int _b;
};