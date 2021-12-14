// #include <stdio.h>

// void listnumbers();

// void listnumbers()
// {
//     int s;
//     for(int i=1; i<5; i++)
//     {
//         for(int j=1; j<5; j++)
//         {
//             for(int k=1; k<5; k++)
//             {
//                 if (i ==j || j ==k || i==k)
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     s = 100*i + 10*j + k;
//                     printf("%d\n", s);
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     listnumbers();
//     return 0;
// }


/*******************************答案*************************************/
#include "stdio.h"
#include "conio.h"
void main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<5;i++)                            /*以下为三重循环*/
        for(j=1;j<5;j++)
            for (k=1;k<5;k++)
                {
                if (i!=k&&i!=j&&j!=k)           /*确保i、j、k三位互不相同*/
                printf("%d,%d,%d\n",i,j,k);
                }
    getch();
}

