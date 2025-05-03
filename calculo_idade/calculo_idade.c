#include <stdio.h>
typedef struct{
    int dia, mes, ano, idade;
}Pessoa;


void calc_idade(Pessoa *p, int dia, int mes, int ano_atual){
    
    p->idade = ano_atual - p->ano; //ao invés da seta, poderia utilizar o (*p).

    if(mes < p->mes){
            p->idade -= 1; //se a pessoa não fez aniversário, é -1 ano;
        }else{
            if(p->mes == mes){
                if(p->dia > dia){
                    p->idade -= 1;
                }
            }
    }
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

    calc_idade(&Newton, 11, 1, 2009);
    calc_idade(&Einstein, 11, 1, 2009);

    printf("A idade de Newton seria de %d \n", Newton.idade);
    printf("A idade de Einstein seria de %d \n", Einstein.idade);

    getchar(); //standby da tela
    return 0;
}