/* ********************全局变量********************* */
// #include <stdio.h>

// void a();
// void b();
// void c();

// int count = 0;

// void a()
// {
//     count ++;
// }

// void b()
// {
//     count ++;
// }
 
// void c()
// {
//     count ++;
// }

// int main()
// {
//     a();
//     b();
//     c();
//     b();
//     printf("count = %d\n", count);
//     return 0;
// }

/* ********************extern关键字********************* */

#include <stdio.h>

void func();

void func()
{
    extern count;
    count ++;
}

int count = 0;

int main()
{
    func();
    printf("%d\n", count);
    return 0;
}