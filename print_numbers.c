#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    int number;
    if(argc == 2){
        for(int i = 0; i < strlen(argv[1]); i++)
            if(!isdigit(argv[1][i])) {
                printf("Error: your argument is not a number\n");
                goto end;
            }
        number = atoi(argv[1]);
        for (int i = 1; i <= 500; i++)
            if(!(i % number))
                printf("%d\n", i);
    }
    end:
    return 0;
}