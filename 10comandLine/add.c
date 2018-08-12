#include <stdio.h>

int main( int argc, char *argv[]){
    int sum = 0;
    for( int i = 1; i<argc; i++){
        printf("%s \n", argv[i]);
        int t = 0;
        t = (int)argv[i];

        // error   https://stackoverflow.com/questions/7021725/how-to-convert-a-string-to-integer-in-c
        // str to int 这个函数还真不是那么简单
        printf("%d \n", t);
        sum += t;
    }
    printf("sum is : %d", sum);
}