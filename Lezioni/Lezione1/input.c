#include<stdio.h>
int main(){
    int numero_intero;
    float numero_decimale;
    double numero_decimale_doppia_precisione;
    char carattere;
    printf("Inserisci un numero intero \n");
    scanf("%d",&numero_intero);
    printf("Inserisci un numero decimale (lettura con f) \n");
    scanf("%f",&numero_decimale);
    printf("Inserisci un numero decimale (lettura con lf) \n");
    scanf("%lf",&numero_decimale_doppia_precisione);
    printf("Inserisci un carattere\n");
    fflush(stdin);
    scanf("%c",&carattere);
    printf("Hai inserito %d e %.2f e %.2lf  e %c\n", numero_intero,numero_decimale, numero_decimale_doppia_precisione, carattere);

}