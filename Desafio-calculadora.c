#include <stdio.h>

int main()
{
    printf("\n             ===========================\n                 Calculadora simples!\n             ===========================\n");
    printf("===Essa Simples Calculadora exibe os resultados das===\n=quatro operações básicas entre dois números inteiros=\n");
    int a, b;
    printf("\nQuais números inteiros você gostaria de calcular?\n");
    printf("Digite o primeiro núemro: ");scanf("%d", &a);
    printf("Digite o segundo núemro: ");scanf("%d", &b);        
    
    int soma = a + b;
    int subtracao = a - b;
    int multi = a * b;
    int div = a / b;

    printf("\nO resultado da Soma é: %d\n", soma);
    printf("O resultado da Subtração é: %d\n", subtracao);
    printf("O resultado da Divisão é: %d\n", div);
    printf("O resultado da Multiplicação é: %d\n", multi);

    return 0;
}