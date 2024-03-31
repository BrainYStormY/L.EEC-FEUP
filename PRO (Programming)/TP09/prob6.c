#include <stdio.h>
#include <math.h> //incluir a biblioteca math.h para poder utilizar a função pow

int converte_codigo_cores(int cor, int pos, float *ret){ //função que atualiza o valor da resistência ("*ret") de acordo com as cores ("cor") e posições ("pos") das bandas
    if(cor<0 || cor>9 || pos<1 || pos>3){return -1;} //verifica se o valor da cor ("cor") está dentro do intervalo válido ([0,9]) e o mesmo para a posição da banda que deve estar no intervalo [1,3], retornando "-1" no caso de erro
    if(pos<3){*ret+=(pow(10,pos-1)*cor);} //se a banda estiver numa das duas primeiras posições ("pos<3"), o efeito do valor da sua cor é tomar a casa decimal na posição "pos-1" *,o que pode ser obtido ao somar ao valor da resistência, que deve ter um 0 nessa casa decimal (dado que é inicializado como 0 e só existe uma banda em cada posição), o produto de "cor" com a potência de 10 com expoente "pos-1" *
    else{*ret*=pow(10,cor-1);} //se, por outro lado, a banda estiver na terceira posição, o efeito do valor da sua cor é multiplicar por potências de 10 com expoente "cor-1" * o valor da resistência
    // * - a razão de se usar sempre, neste caso, expressões do tipo "cor-1" e "pos-1" deve-se ao facto de as posições dos dígitos num número estão indexadas a 0, enquanto que a contagem das bandas da resistência estão indexadas a 1
    return 1; //chegando até este ponto (caso não tenha já havido o retorno do valor "-1" e tenha sido feita a alteração devida ao valor no endereço correspondente a "ret" ("*ret")), a função retorna o valor "1"
}

int main(){
    int cor, i; //variáveis para cor ("cor") e posição ("i") das bandas da resistência
    float resistor = 0.0; //variável que representa o resultado final que se pretende obter, o valor da resistência ("resistor")
    printf("Cores:\n 0 - Black \n 1 - Brown \n 2 - Red \n 3 - Orange \n 4 - Yellow \n 5 - Green \n 6 - Blue \n 7 - Violet \n 8 - Grey \n 9 - White\n\n"); //apresentar (imprimir) informação para o usuário
    for(i = 1; i < 4; i++){ //um "for" que faz uma iteração para cada posição ("i") das bandas da resistência, começando pela primeira ("i=1") e terminando na terceira (inclusive)
        do{ //garante que é:
            printf("Introduza a cor da banda %d: ", i); // pedida a cor da banda na posição "i"
            scanf("%d", &cor); // e lido e guardado em "cor" o valor introduzido
        }while((cor < -1) || (cor > 12)); //caso o valor da cor ("cor") esteja fora do intervalo [-1,12], volta a repetir os passos contidos no "do", sobrescrevendo o valor anteriormente registado em "cor"
        //note-se que o valor da cor deve estar dentro do intervalo [0,9], ou seja, a filtragem feita na linha acima é insuficiente para garantir que os valores introduzidos são utilizáveis
        converte_codigo_cores(cor, i, &resistor); //atualizar o valor da resistência de acordo com a cor e posição da banda recorrendo à função

    }
    printf("Valor da resistencia: %.2f Ohms\n", resistor); //imprimir o resultado (valor da resistência ("resistor"))

}