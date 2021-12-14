#include <iostream>

using namespace std;

int *getArray()
{
    int array[10];
    for (int i=0; i<10; i++)
    {
        cout<<"请输入第"<<i+1<<"个整数,按Enter键结束"<<endl;
        cin>>array[i];
    }

    return array;
}

int getResult(int &array)
{
    int sum = 0, average;
    for(int i=0; i<10; i++)
    {
        sum += array++;
    }
    
    average = sum/10;
    cout<<"该数组的累加和为:"<<sum<<endl;
    cout<<"该数组的平均值为:"<<average<<endl;
    return 0;
}

int main()
{
    int *array;
    
    array = getArray();
    getResult(*array);

    return 0;
}