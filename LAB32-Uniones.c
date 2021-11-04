typedef union
{
    char base;
    char altura;

} triangulo_t;

//typedrf union
//Cuando se usa union se toma el tamaño del elemento más grande, en este caso si se cambia, el elemento más grande es la estructura Trapecio
//El tamaño de la union será de 4 bytes
typedef struct 
{
    struct
    {
        char base;
        char altura;
    }Triangulo;
    struct
    {
        char largo;
        char ancho;
    }Cuadrado;
    struct
    {
        int base_a;
        char base_b;
        char altura;
    }Trapecio;
}Figuras_t;


int main ()
{
    triangulo_t t;
    Figuras_t f;

    t.base = 5;
    t.altura = 6;

    f.Cuadrado.ancho = 4;
    f.Cuadrado.largo = 5;

    f.Triangulo.base = 3;
    f.Triangulo.altura = 9;

    f.Trapecio.altura = 1;
    f.Trapecio.base_a = 8;
    f.Trapecio.base_b = 2;

    return 0;
}