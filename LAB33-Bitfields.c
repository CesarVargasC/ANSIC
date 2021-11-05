#include <stdio.h>

struct byteBits
{
    union 
    {
        char all;
        struct
        {
            unsigned int a : 1;
            unsigned int b : 1;
            unsigned int c : 2;
            unsigned int d : 1;
            unsigned int e : 3;
        };
        
    };
} x;

int main()
{
    x.a = 1;
    x.b = 0b1;
    x.c = 0b10;
    x.d = 0;
    x.e = 5;
    //El valor del byte completo que vale x es = 10101011 = 171
    printf("El valor de x es: %d \n", x);
    x.all = 155;
    printf("El valor de x es: %d \n", x);

    return 0;
}