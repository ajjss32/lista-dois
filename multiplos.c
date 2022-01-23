#include <stdio.h>

int main(){
        int A,B,MAIOR,MENOR;
    scanf("%d %d",&A,&B);
    //IF ELES FOREM DIFERENTE
    if (A==B)
    {
        printf("Sao Multiplos\n");
    }
    else{
        MAIOR = A;
        MENOR = B;
        if (B>A){
            MAIOR = B;
            MENOR = A;
        }
        if (MAIOR%MENOR==0)
        {
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
    }
    return 0;
}