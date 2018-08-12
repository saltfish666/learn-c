#include <stdio.h>
#define PI 3.1415;

int main(){
    double pi = PI;

    // https://stackoverflow.com/questions/4264127/correct-format-specifier-for-double-in-printf
    printf("magic: %f", pi);
    return 0;
}