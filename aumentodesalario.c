#include <stdio.h>

int main(){
    double SALARIO,REAJUSTE,novosalario,percentual;
    scanf("%lf",&SALARIO);
    if(SALARIO>0 && SALARIO<=400.00){
        percentual = 15;

    }
    else if (SALARIO>400.01 && SALARIO<=800.00)
    {
        percentual = 12;
    }
    else if (SALARIO>=800.01 && SALARIO<=1200.00)
    {
        percentual = 10;
    }
    else if (SALARIO>1200.01 && SALARIO<=2000.00)
    {
        percentual = 7;
    }
    else
    {
        percentual = 4;
    }

    novosalario = SALARIO * (1+(percentual/100));
    REAJUSTE = novosalario - SALARIO;

    printf("Novo salario: %.2lf\n",novosalario);
    printf("Reajuste ganho: %.2lf\n",REAJUSTE);
    printf("Em percentual: %.0lf %%\n",percentual);
    return 0;
}