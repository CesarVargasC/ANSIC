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

enum weekday {Mon, Tue, Wed, Thu, Fry, Sat, Sun};
//Cuando se hacen enumeraciones, los elementos internos tomarán un valor consecutivo comenzando en 0 (En caso de no definir nada distinto), y pueden ser usados en lugar del valor
//Para definir un valor especifico se define así: 
//enum weekday {Mon, Tue, Wed = 5, Thu, Fry, Sat, Sun};
//Wed va a valer 5 y los elementos siguientes serán números consecutivos. El valor de SUN en este caso será = 9 

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
    x.e = Sun; //Se asigna el valor 0b110 = 6 a la variable e de 3 bits
    printf("El valor de x es: %d \n", x);

    return 0;
}