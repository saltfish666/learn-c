#include <stdio.h>

int main()
{
   FILE *fp = NULL;
   char buff[255];
 
   fp = fopen("./test.txt", "w+");
   fprintf(fp, "Amazing! This is testing for fprintf...\n");
   fputs("Hello, world! This is testing for fputs...\n", fp);
   fclose(fp);
}