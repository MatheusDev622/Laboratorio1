#include <stdio.h>
#include <math.h>
double potencia(double base, int exp){
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
    printf("%d elevado a %d = %lf",base,expoente,potencia(base,expoente));
}