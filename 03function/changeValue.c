#include <stdio.h>
#include <limits.h>

void changeValue();
int main(){
    int a = 1;
    int b = 2;
    int c = 4;
    changeValue(a, b);
    printf("a = %d, b = %d", a, b);
}

void changeValue(int a, int b){
    int t = a;
    a = b;
    b = t;
}

