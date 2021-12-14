#include <iostream>
using namespace std;
struct struct_volume
{
    char array[1];
    int volume;
    double name;
};

int main()
{
    // struct_volume ak47;
    // cout<<"volume of ak47: "<<sizeof(ak47)<<endl;
    cout<<sizeof("a")<<endl;
    cout<<sizeof('a')<<endl;
    return 0;
}