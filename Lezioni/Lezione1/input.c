#include<stdio.h>
int main(){
    int numero_intero;
    double numero_decimale;
    char carattere;
    printf("Inserisci un numero intero \n");
    scanf("%d",&numero_intero);
    printf("Inserisci un numero decimale\n");
    scanf("%lf",&numero_decimale);
    printf("Inserisci un carattere\n");
    fflush(stdin);
    scanf("%c",&carattere);
    printf("Hai inserito %d e %.2lf  e %c\n", numero_intero,numero_decimale, carattere);
}
