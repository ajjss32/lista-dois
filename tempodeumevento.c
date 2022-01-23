#include <stdio.h>

int main(){
    int dia,hora,minutos,segundo,diafim,horafim,minutosfim,segundofim;
    int total,totaldia,totalhora,totalminutos,totalsegundo;
    scanf("Dia %d\n",&dia);
    scanf("%d : %d : %d\n",&hora,&minutos,&segundo);
    scanf("Dia %d\n",&diafim);
    scanf("%d : %d : %d\n",&horafim,&minutosfim,&segundofim);
    if((diafim<=30 && dia>=1)|| (dia == 30 && diafim == 30)){
        totaldia = diafim - dia;
    }
    

    totalhora= horafim - hora;
        if(totalhora<0){
            totalhora = 24 + (horafim - hora); 
            totaldia--;
        }

    totalminutos= minutosfim - minutos;
        if(totalminutos<0){
            totalminutos = 60 + (minutosfim - minutos); 
            totalhora--;
        }

     totalsegundo= segundofim - segundo;
        if(totalsegundo<0){
            totalsegundo = 60 + (segundofim - segundo); 
            totalminutos--;
        }

    total = (totaldia*86400) + (totalhora * 3600) + (totalminutos * 60) + (totalsegundo);

    if(total>=60){
        totaldia = total / 86400;
        totalhora = (total%86400)/3600;
        totalminutos = ((total%86400)%3600)/60;
        totalsegundo = ((total%86400)%3600)%60;
        printf("%d dia(s)\n",totaldia);
        printf("%d hora(s)\n",totalhora);
        printf("%d minuto(s)\n",totalminutos);
        printf("%d segundo(s)\n",totalsegundo);
    }

    return 0;
}