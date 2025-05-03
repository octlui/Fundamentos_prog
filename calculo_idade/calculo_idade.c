#include <stdio.h>
typedef struct{
    int dia, mes, ano, idade;
}Pessoa;

int calc_idade(Pessoa p, int dia, int mes, int ano_atual){
    int idade;
    idade = ano_atual - p.ano;
    if(mes < p.mes){
            idade -= 1; //se a pessoa não fez aniversário, é -1 ano;
        }else{
            if(p.mes == mes){
                if(p.dia > dia){
                    idade -= 1;
                }
            }
    };
    return idade;
}
int main(){
    Pessoa Newton, Einstein;
    
    Newton.dia= 4;
    Newton.mes= 1;
    Newton.ano= 1643;
    Newton.idade = -1; //inicializar qualquer variável como -1

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;
    Einstein.idade = -1;

    Newton.idade = calc_idade(Newton, 11, 1, 2009);
    Einstein.idade = calc_idade(Einstein, 11, 1, 2009);

    printf("A idade de Newton seria de %d \n", Newton.idade);
    printf("A idade de Einstein seria de %d \n", Einstein.idade);

    return 0;
}