#include <stdio.h>

int main(){
    int codigo,quantidade;
    double preco;
    scanf("%d %d",&codigo,&quantidade);
    

    switch (codigo)
    {
    case 1:
        preco = 4.00;
        printf("Total: R$ %.2lf\n",preco*quantidade);
        break;
    case 2:
        preco = 4.50;
        printf("Total: R$ %.2lf\n",preco*quantidade);
        break;
    case 3:
        preco = 5.00;
        printf("Total: R$ %.2lf\n",preco*quantidade);
        break;
    case 4:
        preco = 2.00;
        printf("Total: R$ %.2lf\n",preco*quantidade);
        break;
    case 5:
        preco = 1.50;
        printf("Total: R$ %.2lf\n",preco*quantidade);
        break;
    
    default:
        break;
    }
    return 0;
}