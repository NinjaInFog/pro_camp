#include <stdlib.h>
#include <stdio.h>

typedef unsigned long int uint64;
typedef unsigned int uint32;
typedef unsigned short uint16;


void swap16(uint16 *x)
{
    *x = (*x << 8) | (*x >> 8);
}

void swap32(uint32 *x)
{
    *x = (*x >> 24) | ((*x >> 8) & 0x0000FF00) | ((*x << 8) & 0x00FF0000) | (*x << 24);
}

void swap64(uint64 *x)
{
    *x = (*x >> 56) | ((*x >> 40) & 0x000000000000FF00) | ((*x >> 24) & 0x0000000000FF0000) | ((*x >> 8)  & 0x00000000FF000000) 
        | ((*x << 8)  & 0x000000FF00000000) | ((*x << 24) & 0x0000FF0000000000) | ((*x << 40) & 0x00FF000000000000) | (*x << 56);
}

int main(int argc, char * argvp[])
{
    uint64 b = 549755813888;
    uint32 c = 4294967294;
    uint16 a = 12345;
    printf("size of uint is %zu \n", sizeof(c));
    printf("size of ulong is %zu \n", sizeof(b));
    printf("size of ulong is %zu \n", sizeof(a));
    swap16(&a);
    swap32(&c);
    swap64(&b);
    printf("result of swap16 = %d \n", a);
    printf("result of swap32 = %u \n", c);
    printf("result of swap64 = %lu \n", b);
    return 0;
}