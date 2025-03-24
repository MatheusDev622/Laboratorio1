#include <stdio.h>

int main() {
    int binario, decimal = 0, peso = 1;

    printf("Insira um número binário: ");
    scanf("%d", &binario);
    
    for (int i = 0; i < 8; i++) {
        int bit = binario % 10;  
        decimal += bit * peso;   
        binario /= 10;           
        peso *= 2;               
    }

    if (decimal >= 128) { 
        decimal -= 256;
    }

    printf("Resultado: %d\n", decimal);
    return 0;
}
