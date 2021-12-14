#include <iostream>     //iostream.h是C92标准,当时没有引入命名空间的概念,故选择用.h头文件,C99标准变为<iostream> 
using namespace std;
int addArray(int *array, int n);

int main()
{
    int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(data)/sizeof(data[0]);
    cout<<"结果是:"<<addArray(data, size)<<endl;
    return 0;
}

int addArray(int *array, int n)
{
    int sum = 0;
    int i;
    for(i=0; i<n; i++)
    {
        // cout<<*array;
        sum += *array++;   //数组名是该数组的首地址指针
    }
    return sum;
}