#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
    char *mem_alloc;
    mem_alloc = malloc( 20 * sizeof(char));

    if (mem_alloc == NULL)
    {
        printf("Couldnt allocate requested memory\n");
    }
    else {
        strcpy(mem_alloc, "Pan-Atlantic");
    }

    printf("Dynamically allocated memory : %s\n" , mem_alloc);
    mem_alloc = realloc(mem_alloc,100*sizeof(char));
    
    if (mem_alloc == NULL)
    {
        printf("Couldnt allocate requested memory\n");
    }
    else {
        strcpy(mem_alloc, " memory space is extended upto 100 characters");
    }

    printf("Resized memory : %s\n", mem_alloc);
    free(mem_alloc);


}