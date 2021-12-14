#include "Gun.h"
#include "Soldier.h"

void test() 
{
    Solider sanduo("xusanduo");             //实例化一个Solider类对象为sanduo,通过构造器传入string "xuanduo"
    sanduo.addGun(new Gun("AK47"));         //新建一个Gun指针,传入string"AK47"
    sanduo.addBulletToGun(20);
    sanduo.fire();
}

int main()
{
    test();
    return 0;
}