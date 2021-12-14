#include "math.h"
#include "stdio.h"
#include "conio.h"
void main()
{
    int i, x, y;
    for(i=0; i<100001; i++)
    {
        x = sqrt(i+100);
        y = sqrt(i+168);
        if (x*x == i+100 && y*y == i+168)
            printf("%d\n", i);
    }
}