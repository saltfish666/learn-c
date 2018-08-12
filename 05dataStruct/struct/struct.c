#include <stdio.h>

struct People{
    char name[10];
    int age;
};

int main(){
    struct People p1 = {"lishuai", 22};
    printf("p1's name %s", p1.name);
    printf("p1's name %lu", sizeof p1); // 16 为甚是16？ 10 + 4 = 14 啊
    return 0;
}