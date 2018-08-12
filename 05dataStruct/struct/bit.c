#include <stdio.h>

struct People{
    unsigned int age: 3;
};

int main(){
    struct People p1 = { 7};
    // struct People p2 = { 8}; error
    printf("p1's age %c", p1.age); // 
    printf("p1's size %lu", sizeof p1); // 4
    return 0;
}