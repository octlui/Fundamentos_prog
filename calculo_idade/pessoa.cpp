#include "pessoa.h"
#include <iostream>
using namespace std;
#include <string.h>
                                                //usando o nome como ponteiro
Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome){ //construtor da classe, inicializa as variaveis
    inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa(){
    inicializa(0,0,0,""); //inicializar com "" por ser char
}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome){
    diaP = diaNa;
    mesP = mesNa;   //as variaveis dentro de uma classe são chamadas de atributos
    anoP= anoNa;
    strcpy(nomeP, nome); //strcpy copia o nome do main para o atributo nomeP, é sempre o oposto do que se espera, o primeiro argumento é o destino e o segundo é a origem
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

void Pessoa::imprime_idade(){
    //printf("A idade de %s seria de %d \n", nomeP, idadeP); 
    cout<<"A idade de "<<nomeP<<" seria de "<<idadeP<<endl;//trabalha orientado a fluxo
}
void Pessoa::calcula_imprime_idade(int diaAT, int mesAT, int ano_atualAT){
    calc_idade(diaAT, mesAT, ano_atualAT);
    imprime_idade();
}
int Pessoa::informaIdade(){
    return idadeP;
}