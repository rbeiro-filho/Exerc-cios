#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "CONVERSAO.H"



int main(void) {
    //Fila F;
    size_t M;
    long int L, U;


    return 0;
}

/*
Ao receber não será necessário limitar a mantissa, apenas não é possível representá-la por valores negativos
Nos expoentes, o valor da esquerda não pode ser maior que o valor da esquerda
Receber "sinal"+"número em decimal"
Separar de 8 em 8 casas as partes inteiras até o ponto e armazenar em filas
Realizar a conversão antes de receber outro número
Realizar a conversão e se sobrar resto, jogar para a nona casa de inteiros da próxima celula da fila até a conversão total
Verificar se de acordo com o ponto é possível representar ou vai acontecer o estouro, se houver estouro, não será necessário converter a parte binária.
Se isso acontecer, liberar espaço de binário e salvar o erro para ser mostrado "OVERFLOW" ou "UNDERFLOW"
Se for negativo inverter fazendo 0 virar 1 e vice versa
Armazenar as partes fracionarias em pilhas e ir multiplicando a pilha toda por 2 até o limite ou a conversao se feitas
Os valores que ficarem maiores que 10⁷-1 na celula do fundo da pilha, será 1 senao 0 no valor da conversao final
*/