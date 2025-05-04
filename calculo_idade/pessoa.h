#include <stdio.h>
struct Pessoa{
    public:
        int diaP, mesP, anoP, idadeP; //informações acessíveis de fora;
    
    //função construtora inicializa as variaveis, pega as variaveis do main e atribui a elas os atributos dos objetos
    Pessoa(int diaNa, int mesNa, int anoNa){
        diaP = diaNa;
        mesP = mesNa;
        anoP= anoNa;
        idadeP = -1;
    }

    //função dentro da struct
    void calc_idade(int diaAT, int mesAT, int ano_atualAT){ 
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
};