#include <stdio.h>
#include <limits.h>
 
int main()
{
    // 整数类型
    int a = 4;
    printf("int 存储大小 : %lu \n", sizeof a);  // 4
    char ch = 97;
    printf("char 97 = : %c \n", ch);  
    printf("char 存储大小 : %lu \n", sizeof ch);//1
    unsigned long ul = 1;
    printf("unsigned long 存储大小 : %lu \n", sizeof ul);

    // 浮点类型
    float b = 4.453;
    printf("float 存储大小 : %lu \n", sizeof b);
    double c = 4.325;
    printf("double 存储大小 : %lu \n", sizeof c);
    long double ld = 3;
    printf("long double 存储大小 : %lu \n", sizeof ld);

    // 枚举类型
    enum Color{Red, Blue, Green};
    printf("%d, %d, %d",Red, Blue, Green);
    // 这个不行，只能将值设定为int类型

    return 0;
}