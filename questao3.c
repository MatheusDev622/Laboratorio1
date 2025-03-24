#include <stdio.h>

int main(){
    int cedulas_total = 0,cedula200 = 0,cedula100 = 0,cedula50 = 0,cedula20 = 0,cedula10 = 0,cedula5 = 0,cedula2 = 0;
    int moedas_total = 0,moeda1 = 0,moeda50 = 0,moeda25 = 0,moeda10 = 0,moeda05 = 0;
    float saque;
    puts("Digite o valor que você deseja sacar");
    scanf("%f",&saque);
    float vlr_rst = saque;
    while(vlr_rst != 0){
        if(vlr_rst >= 200){
            vlr_rst -= 200;
            cedulas_total++;
            cedula200++;
        }else if(vlr_rst < 200 && vlr_rst >= 100 ){
            vlr_rst -= 100;
            cedulas_total++;
            cedula100++; 
        }else if(vlr_rst < 100 && vlr_rst >= 50){
            vlr_rst -= 50;
            cedulas_total++;
            cedula50++;
        }else if(vlr_rst < 50 && vlr_rst>=20){
            vlr_rst -= 20;
            cedulas_total++;
            cedula20++;
        }else if(vlr_rst < 20 && vlr_rst >= 10){
            vlr_rst -= 10;
            cedulas_total++;
            cedula10++;
        }else if(vlr_rst <10 && vlr_rst >= 5){
            vlr_rst -= 5;
            cedulas_total++;
            cedula5++;
        }else if(vlr_rst < 5 && vlr_rst >= 2){
            vlr_rst -= 2;
            cedulas_total++;
            cedula2++;
        }else if(vlr_rst < 2 && vlr_rst >= 1){
            vlr_rst -= 1;
            moedas_total++;
            moeda1++;
        }else if(vlr_rst < 1 && vlr_rst >= 0.50){
            vlr_rst -= 0.50;
            moedas_total++;
            moeda50++;
        }else if(vlr_rst < 0.50 && vlr_rst >= 0.25){
            vlr_rst -= 0.25;
            moedas_total++;
            moeda25++;
        }else if(vlr_rst < 0.25 && vlr_rst >= 0.10){
            vlr_rst -= 0.10;
            moedas_total++;
            moeda10++;
        }else if(vlr_rst < 0.10 && vlr_rst >= 0.05){
            vlr_rst -= 0.05;
            moedas_total++;
            moeda05++;
        }else{
            break;
        }
    }
    printf("Saque feito: %.2f",saque);
    puts("\n---Celudas---\n");
    printf("cedulas de 200 reais: %d\n",cedula200);
    printf("Ceculas de 100 reais : %d\n",cedula100);
    printf("cedulas de 50 reais : %d\n",cedula50);
    printf("Cedulas de 20 reais : %d\n",cedula20);
    printf("Cedulas de 10 reais : %d\n",cedula10);
    printf("Cedulas de 5 reais: %d\n",cedula5);
    printf("Cedula de 2 reais : %d\n",cedula2);
    printf("Cedulas totais reais : %d\n",cedulas_total);

    puts("\n---Moedas---\n");
    printf("Moeda de 1 real: %d\n",moeda1);
    printf("Moeda de 50 centavos: %d\n",moeda50);
    printf("Moeda de 25 centavos: %d\n",moeda25);
    printf("Moeda de 10 centavos: %d\n",moeda10);
    printf("Moeda de 05 centavos: %d\n",moeda05);
    printf("Moedas totais: %d\n",moedas_total);
    printf("Valor restante: %.2f",vlr_rst);
    return 0;
}