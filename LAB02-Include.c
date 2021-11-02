#include <stdio.h> //Se encuentra en la carpeta include del compilador
//#include "var1_def.h" //Las comillas dicen que la ubicación de este archivo es la carpeta del programa
//#include "subcarpeta/var1_def.h" //Así se denota cuando el archivo .h se encuentra en una subcarpeta
//O simplemete puedes poner la ruta del archivo

#define MAX = 100;
const int Min = 10;
int Nbin, Nint;

int main ()
{
    printf("Hola mundo \n");
    Nint = 100;
    Nbin = 0b1111;

    return 0;
}