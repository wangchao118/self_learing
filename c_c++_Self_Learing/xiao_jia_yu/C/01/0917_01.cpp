# include <fstream>
# include <iostream>
using namespace std;

int main()
{
    fstream fp("test.txt", ios::in | ios::out);
    if(!fp)
    {
        cerr<<"打开文件失败"<<endl;
        return 0;
    }
    fp<<"I love FishC.com!";
    static char str[10];
    fp.seekg(ios::beg);
    fp>>str;
    cout<<str<<endl;

    return 0;
}

