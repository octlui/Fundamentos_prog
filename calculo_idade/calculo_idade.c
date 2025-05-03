#include <stdio.h>

typedef struct{
    int dia, mes, ano, idade;
}Pessoa;

int calc_idade(Pessoa p, int ano_atual){
    int idade;
    idade = ano_atual - p.ano;
    return idade;
}
int main(){
    Pessoa Newton, Einstein;
    
    Newton.dia= 4;
    Newton.mes= 1;
    Newton.ano= 1643;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;

    Newton.idade = calc_idade(Newton, 2009);
    Einstein.idade = calc_idade(Einstein, 2009);

    printf("A idade de Einstein seria de %d \n", Einstein.idade);
    printf("A idade de Newton seria de %d \n", Newton.idade);

    return 0;
}