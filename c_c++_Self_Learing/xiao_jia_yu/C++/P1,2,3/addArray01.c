#include<stdio.h>

int addArray(int arrary[], int n);

int main()
{
    int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(data) / sizeof(data[0]);
    printf("data:%d\n", sizeof(data));     //data数组共10个元素,每个元素4个字节,共40字节
    printf("结果是:%d\n", addArray(data, size)); 
    return 0;
}

int addArray(int array[], int n)
{
    int sum = 0;
    int i;
    printf("array:%d\n", sizeof(array));   //指针变量的长度64位操作系统即8个字节
    for(i=0;i<n;i++)
    sum+=array[i];
    return sum;
}