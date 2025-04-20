#include <stdio.h>
#include <math.h>
double potencia(int base, int exp){
    double resultado;
    resultado = pow(base,exp);
    return resultado;
} 

int main(){
    int base,expoente;
    puts("Digite a base: ");
    scanf("%d",&base);
    puts("Digite o expoente");
    scanf("%d",&expoente);
    double resul = potencia(base,expoente);
    printf("%d elevado a %d = %lf",base,expoente,resul);
}