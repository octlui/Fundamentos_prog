#include "pessoa.h"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa){
    diaP = diaNa;
    mesP = mesNa;   //as variaveis dentro de uma classe são chamadas de atributos
    anoP= anoNa;
    idadeP = -1;
}

void Pessoa::calc_idade(int diaAT, int mesAT, int ano_atualAT){ //funções dentro de uma classe são chamadas de métodos  
    idadeP = ano_atualAT - anoP;                            
    if(mesAT < mesP){
            idadeP -= 1; //se a pessoa não fez aniversário, é -1 ano;
        }else{
            if(mesP == mesAT){
                if(diaP > diaAT){
                    idadeP -= 1;
                }
            }
    }
}
int Pessoa::informaIdade(){
    return idadeP;
}