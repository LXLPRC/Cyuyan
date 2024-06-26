/***循环
 * 1.while:
 *  while ( condition )
    {
        code;
    }
 * 2.for:
 * for (size_t i = 0; i < count; i++)
    {
        code;
    }
 * 3.do while:
    do
    {
        code;
    } while (condition);
 * 4.循环中的break和continue
    break:
    跳出本层循环，注意只会跳出一层
    continue：
    本次循环结束，continue后面代码不再执行，继续下次循环
  */

#include <stdio.h>
int main()
{
    int a = 0;
    // while
    while (a < 5) // while(1)死循环
    {
        printf("while循环中a=%d\n", a);
        a++;
        if (a == 4)
        {
            break;
        }
    }
    // for：更加简洁明了，尽量不要在for循环体内改变循环变量i，防止循环失去控制
    //建议循环控制变量的取值采用前闭后开区间的写法
    //10次循环
    //10次打印
    //10个元素
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
    }
    //for循环的初始化、判断、调整都可以省略
    //判断省略后，就全为真，故形成死循环
    //如果不是很熟练代码，建议不要随便省略
    for (; a > 0; a--)
    {
        if (a == 1)
        {
            continue;
            ;
        }
        printf("for循环中a=%d\n", a);
    }
    // do while
    do
    {
        printf("do while循环中a=%d\n", a);
        a++;
    } while (a < 3);
    //示例1
    int ch = 0;
    ch = getchar(); // getchar()每次可以读取输入缓冲区的一个字符
    putchar(ch);    // putchar()每次输出一个字符
    printf("\nsizeof(ch)=%d\n", sizeof(ch));
    printf("%d\n", ch);             // 输出的是字符的ASCII编码值
    printf("-----------\n");        // 检测线
    while ((ch = getchar()) != EOF) // EOF=Ctrl+c=end of file
    {
        printf("============\n"); // 检测线
        putchar(ch);
    }
    //示例2
    
    return 0;
}