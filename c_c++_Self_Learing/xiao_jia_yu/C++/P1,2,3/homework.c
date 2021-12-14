/* 输入任意个数的整数,他们之间以空格键隔开,求他们的和 */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    int sum = 0;
    char ch;
    printf("请输入一串整数和任意数目的空格:");
    while(scanf("%d", &i) == 1)           //scanf函数接受数据后正常返回值为1,当不正常时不会执行while循环
    {
        sum += i;
        while((ch=getchar()) == ' ')     //getchar()为获取一个字符,当该字符为" "即空格时执行下一行;啥也没有,相当与屏蔽了" "空格
            ;
        if(ch == '\n')
        {
            break;
        }
        ungetc(ch, stdin);     //将变量ch中存放的字符退回给stdin输入流.
    }
    printf("结果是:%d", sum);
    printf("\n");
    system("pause");
}