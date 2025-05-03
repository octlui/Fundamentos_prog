#include "pessoa.h"

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