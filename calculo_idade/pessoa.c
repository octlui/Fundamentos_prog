#include "pessoa.h"

int calc_idade(Pessoa p, int dia, int mes, int ano_atual){
    p.idade = ano_atual - p.ano;
    if(mes < p.mes){
            p.idade -= 1; //se a pessoa não fez aniversário, é -1 ano;
        }else{
            if(p.mes == mes){
                if(p.dia > dia){
                    p.idade -= 1; //como p.idade já é a idade da pessoa, não preciso de uma variável só pra isso
                }
            }
    };
    return p.idade;
}