#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n = 10;
    int result = 1;
    for(int i = 1; i <= 10; i++)
        result = result * i;
    printf("factorial of 10 = %d\n", result);
}