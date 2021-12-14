/* ********************指针函数********************* */
// #include <stdio.h>

// char *getWord(char);

// char *getWord(char c)
// {
//     switch (c)
//     {
//     case 'A': return "Apple";
//     case 'B': return "Banana";
//     case 'C': return "Cat";
//     case 'D': return "Dog";
//     default: return "None";
//     }
// }

// int main()
// {
//     char input;
//     printf("请输入一个字母:");
//     scanf("%c", &input);
//     printf("%s\n", getWord(input));
//     return 0;
// }


/* ********************函数指针********************* */

#include <stdio.h>

int square(int);

int square(int num)
{
    return num*num;
}

int main()
{
    int num;
    int (*fp)(int);
    printf("请输入一个整数:");
    scanf("%d", &num);

    fp = square;
    printf("%d * %d = %d\n", num, num, (*fp)(num));
 
    return 0;
}