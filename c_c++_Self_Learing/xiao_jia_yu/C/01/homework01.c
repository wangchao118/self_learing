# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void main()
{
    int i;
    int sum = 0;
    char ch;
    printf("请输入一串整数和任意数目的空格:");
    while(scanf("%d", &i) == 1)
    {
        sum += i;
        while((ch=getchar())==' ')
        ;
        if (ch == '\n')
        {
            break;
        }

        ungetc(ch, stdin);   //将变量ch中存放的字符退回给stdin输入流
    }
    printf("结果是:%d", sum);
    printf("\n");
    pause();
}

