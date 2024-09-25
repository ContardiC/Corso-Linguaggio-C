#include <stdio.h>

void F(int x, int y, int *h) {
    *h = x + y;
}

int main() {
    int a = 15, b = 5;
    int somma =150;
    F(a, b, &somma);
    
    printf("Somma: %d \n", somma);
    return 0;
}
