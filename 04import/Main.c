#include <stdio.h>
#include "./math.c"

int main(){
    printf("pi is %f \n", pi);
    int b = add(1, 3);
    int c = mut(4, 5);
    printf("add(1, 3) = %d \n", b);
    printf("mut(4, 5) = %d \n", c);
    return 0;
}

