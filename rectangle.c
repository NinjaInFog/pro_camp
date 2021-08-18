#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void m_to_inch(double *height, double *width)
{
    *height = *height / 0.0254;
    *width = *width / 0.0254; 
}

double perimeter(double height, double width)
{
    return 2 * height + 2 * width;
}

double area(double height, double width)
{
    return height * width;
}

int main(int argc, char *argv[])
{
    double height, width;
    double res_area, res_perimeter;
    if(argc > 1 && argc <<3)
    {
        for(int i = 0; i < strlen(argv[1]); i++)
            if(!isdigit(argv[1][i])) {
                printf("Error: your first argument is not a number\n");
                goto end;
            }
        for(int i = 0; i < strlen(argv[2]); i++)
            if(!isdigit(argv[2][i])){
                printf("Error: your second argument is not a number\n");
                goto end;
            }
        height = atof(argv[1]);
        width = atof(argv[2]);
        if(height <= 0 || width <= 0){
            printf("Error: one or both of your arguments are zero or less\n");
            goto end;
        }
        m_to_inch(&height, &width);
        res_perimeter = perimeter(height, width);
        res_area = area(height, width);
        printf("perimeter = %f \narea = %f \n", res_perimeter, res_area);
    }
    else
        printf("Error: incorrect number of arguments\n");
    end:
    return 0;
}