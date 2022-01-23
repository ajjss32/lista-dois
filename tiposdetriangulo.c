#include <stdio.h>

int main(){
    double A,B,C,D,E,F,MAIOR,MENOR,MEIO;
    scanf("%lf %lf %lf",&D,&E,&F);
 
        MENOR = D;
    if (E<D && E<F)
    {
        MENOR = E;
    }
    else if (F<D && F<E)
    {
        MENOR = F;
    }
    //Maior
    MAIOR = D;
    if (E>D && E>F)
    {
        MAIOR = E;
    }
    else if (F>D && F>E)
    {
        MAIOR = F;
    }
    MEIO = D;
    if ((E>D && E<F)||(E<D && E>F))
    {
        MEIO = E;
    }
    else if ((F>D && F<E)||(F<D && F>E))
    {
        MEIO = F;
    }
    A = MAIOR;
    B = MEIO;
    C = MENOR;

    
    if (A>0 && B>0 && C>0)
    {
        //o tipo de tri ANGULO
        if(A>=(B+C)){
            printf("NAO FORMA TRIANGULO\n");
        }
        else{

        if((A*A)==((B*B)+(C*C))){
            printf("TRIANGULO RETANGULO\n");
        }else if((A*A)>((B*B)+(C*C))){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if ((A*A)<((B*B)+(C*C)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        //o tipo de tri LADO

        if (A==B && A==C && B==C)
        {
             printf("TRIANGULO EQUILATERO\n");
        }else if(A==B || A==C || B==C){
             printf("TRIANGULO ISOSCELES\n");
        }
        }



    }else if((A<=0 && B<=0 && C<=0)|| (A<=0 || B<=0 || C<=0)){
        printf("NAO FORMA TRIANGULO\n");
    }
    return 0;
}