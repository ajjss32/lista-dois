#include <stdio.h>

int main(){
    int INICIO,FINAL,TOTAL;
    scanf("%d %d",&INICIO,&FINAL);

    if (INICIO>FINAL)
    {
        TOTAL = abs((FINAL) + (24-INICIO));
    }else if (INICIO<FINAL)
    {
        TOTAL = abs((FINAL) - (INICIO));
    }else {
        TOTAL = 24;

    }

    printf("O JOGO DUROU %d HORA(S)\n",TOTAL);
    return 0;
}