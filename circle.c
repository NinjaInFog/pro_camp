#include <stdlib.h>
#include <stdio.h>

int main()
{
    int radius = 6;
    double perimeter, area;
    perimeter = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    printf("perimeter of circle = %.2f \narea of circle = %.2f \n", perimeter, area);

    return 0;
}