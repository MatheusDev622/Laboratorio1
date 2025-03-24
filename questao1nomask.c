#include <stdio.h>

int main(){
    int num;
    puts("Digite um número para ver sua forma em hexadecimal");
    scanf("%d",&num);
    printf("Resultado: 0x%08X",num);
    return 0;
}