#include <stdio.h>

int main(){
    int horas,minutos,horafinal,minutosfinal,totalhoras,totalminutos;
    scanf("%d %d %d %d",&horas,&minutos,&horafinal,&minutosfinal);

    if (horas>=0 && horafinal>=0 && minutos>=0 && minutosfinal>=0)
    {
        if((horas==horafinal)&&(minutosfinal==minutos)){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
    else{
        totalhoras= horafinal - horas;
        totalminutos= minutosfinal - minutos;
        if(totalhoras<0){
            totalhoras = 24 + (horafinal - horas); 
        }
        if(totalminutos<0){
            totalminutos = 60 + (minutosfinal - minutos); 
            totalhoras--;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",totalhoras,totalminutos);
        }
    }
    return 0;
}