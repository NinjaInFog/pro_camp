#include <stdlib.h>
#include <stdio.h>

//тут я не знал как это реализовать, поэтому сам алгоритм скопировал
void RGB_convert(unsigned short *rgb, unsigned char r, unsigned char g, unsigned char b)
{
    *rgb = ((r & 0b11111000) << 8) | ((g & 0b11111100) << 3) | (b >> 3);
}

int main()
{
    unsigned char r = 200, g = 150, b = 100;
    unsigned short result;
    RGB_convert(&result, r, g, b);
    printf("The result of convert = %hu\n", result);

    //а тут у меня возник вопрос по поводу размера типов данных. дело в том, что у меня результат 
    //выполнения функции sizeof  над переменными типов long, long int, long long int возвращают один и тот же результат (8 байт). почему так?
    /*
    short a;
    char b;
    long l;
    long int li;
    long long int lli;
    printf("sieze of short = %lu \nsieze of char = %lu \nsieze of long = %lu \nsieze of long int = %lu \nsieze of long long int = %lu \n", sizeof(a),sizeof(b),sizeof(l),sizeof(li),sizeof(lli));
    */
    return 0;
}