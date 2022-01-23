#include <stdio.h>

int main(){
       int A,B,C,MAIOR,MENOR,MEIO;
    scanf("%d %d %d",&A,&B,&C);
    //MENOR
    MENOR = A;
    if (B<A && B<C)
    {
        MENOR = B;
    }
    else if (C<A && C<B)
    {
        MENOR = C;
    }
    //Maior
    MAIOR = A;
    if (B>A && B>C)
    {
        MAIOR = B;
    }
    else if (C>A && C>B)
    {
        MAIOR = C;
    }
    MEIO = A;
    if ((B>A && B<C)||(B<A && B>C))
    {
        MEIO = B;
    }
    else if ((C>A && C<B)||(C<A && C>B))
    {
        MEIO = C;
    }
    printf("%d\n",MENOR);
    printf("%d\n",MEIO);
    printf("%d\n",MAIOR);
    printf("\n");
    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);
    return 0;
}