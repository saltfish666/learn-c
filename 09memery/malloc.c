#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char *description;

   /* 动态分配内存 */
   description = malloc( 2000000000000000 * sizeof(char) );
   if( description == NULL ){
      printf("Error - unable to allocate required memory\n");
   } else {
      strcpy( description, "Zara ali a DPS student in class 10th");
   }
   printf("Description: %s\n", description );
}