#include <stdio.h>
class Pessoa{ //classe representa uma estrutura geral de um conjunto de elementos
    private:    //em uma classe os elementos são private por definição (em uma struct, são public por definição)
        int diaP, mesP, anoP, idadeP; 
    
    //função construtora inicializa as variaveis, pega as variaveis do main e atribui a elas os atributos dos objetos
    public:
        Pessoa(int diaNa, int mesNa, int anoNa){
            diaP = diaNa;
            mesP = mesNa;   //as variaveis dentro de uma classe são chamadas de atributos
            anoP= anoNa;
            idadeP = -1;
        }

        //função dentro da struct
        void calc_idade(int diaAT, int mesAT, int ano_atualAT){ //funções dentro de uma classe são chamadas de métodos  
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
        int informaIdade(){
            return idadeP;
        }
};