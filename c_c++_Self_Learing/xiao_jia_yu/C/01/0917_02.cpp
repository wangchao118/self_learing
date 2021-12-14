# include <iostream>

int main()
{
    char answer;

    std::cout<<"请问是否格式化!![Y/N]"<<"\n";
    std::cin >>answer;

    switch(answer)
    {
    case 'Y':
    case 'y':
        std::cout<<"别格式化 "<<"\n";
        break;
    case'N':
    case'n':
        std::cout<<"很明智"<<"\n";
        break;
    default:
        std::cout<<"输入有问题"<<"\n";
        break;
    }

    std::cout<<"输入任何程序结束!"<<"\n";
    std::cin.get();
    return 0;
}

