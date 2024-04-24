// C Program to deallocate the memory at runtime
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int* str = (int*)malloc(sizeof(int));
     str = 3;
     printf("%p\n", (int*) str);

     /* Reallocating memory */
     //str = (int*)realloc(str, 25);
     //strcat(str, 31);
     //printf("String = %d,  Address = %u\n", str, str);

     free(str);

     str = NULL;
    
    
    return 0;
}
