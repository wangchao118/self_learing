#include<iostream>
#define ITEM 10
using namespace std;

int main()
{
    int num[ITEM];
    cout<<"请输入"<<ITEM<<"个整型数据!\n"<<endl;
    for(int i = 0; i<ITEM; i++)
    {
        cout<<"请输入第"<<i+1<<"个数据:"<<endl;
        cin>>num[i];
    }

    int total = 0;
    for(int j=0; j<ITEM; j++)
    {
        total += num[j];
    }

    cout<<"总和是:"<<total<<"\n";
    cout<<"均值是:"<<(float)total/ITEM;
    cout<<"\n";
    return 0;

}