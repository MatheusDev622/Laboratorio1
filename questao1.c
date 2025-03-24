#include <stdio.h>

int main(){
    unsigned int num;
    puts("Digite um número inteiro");
    scanf("%u",&num);
    printf("\n0X\n");
    for(int i = sizeof(num)-1; i>= 0;i--){
        unsigned char byte = (num >> (i*8)) & 0xFF;
        printf("%02X",byte);
    }
    return 0;
}