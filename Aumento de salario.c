#include <stdio.h>
 
int main() { 
    float salario, ajuste;
   
    scanf("%f", &salario);
    
    if (salario >= 0 && salario <= 400) {
        ajuste = salario * 0.15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", ajuste+salario, ajuste);
    }else if (salario >400 && salario <= 800) {
        ajuste = salario * 0.12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", ajuste+salario, ajuste);
    }else if (salario > 800 && salario <= 1200) {
        ajuste = salario * 0.10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", ajuste+salario, ajuste);
    }else if (salario > 1200 && salario <= 2000) {
        ajuste = salario * 0.07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", ajuste+salario, ajuste);
    }else {
        ajuste = salario *0.02;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", ajuste+salario, ajuste);
    }
return 0;
}