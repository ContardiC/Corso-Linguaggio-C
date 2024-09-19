#include <stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    short intero_corto = 32767;                               // short: 2 byte
    int intero = 3;                                           // int: 4 byte
    long intero_lungo = 9223372036854775807L;                 // long: 8 byte
    float numero_decimale = 3.14f;                            // float: 4 byte
    double numero_decimale_doppia_precisione = 3.14159265359; // double: 8 byte
    char carattere = 'A';                                     // char: 1 byte

    // Stampa il range di short
    printf("Range di short: %d a %d\n", SHRT_MIN, SHRT_MAX);

    // Stampa il range di int
    printf("Range di int: %d a %d\n", INT_MIN, INT_MAX);

    // Stampa il range di long
    printf("Range di long: %ld a %ld\n", LONG_MIN, LONG_MAX);

    // Stampa il range di float
    printf("Range di float: %e a %e\n", FLT_MIN, FLT_MAX);

    // Stampa il range di double
    printf("Range di double: %e a %e\n", DBL_MIN, DBL_MAX);

    // Stampa il range di char
    printf("Range di char: %d a %d\n", CHAR_MIN, CHAR_MAX);

}