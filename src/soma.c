// Este programa pede ao usuário dois números, e realiza a soma
// entre eles e ao final exibe o resultado
#include <stdio.h>
int main()
{
    // declarar as variáveis que irão receber os números digitados
    // pelos usuários
    int numero1;
    int numero2;
    int resultado;
    // vamos pedir ao usuário entrar com o primeiro valor
    printf("Digite um número: \n");
    //  capturando o número digitado pelo usuário
    // com o comando scanf
    scanf("%d",&numero1);

    printf("Digite outro número inteiro e tecle Enter: \n");
    scanf("%d",&numero2);

    // vamos realizar a soma entre os números 1 e 2
    resultado = numero1 + numero2;

    // apresentar o resultado em tela
    printf("A soma do número %d com o número %d é: %d \n", numero1,numero2, resultado);

    return 0;

}