#include <stdio.h>
class Pessoa{ 
    private:    
        int diaP, mesP, anoP, idadeP;
        char nomeP[30];
    
    //função construtora inicializa as variaveis, pega as variaveis do main e atribui a elas os atributos dos objetos
    public: 
        Pessoa(int diaNa, int mesNa, int anoNa, const char nome[]); //o const tira a possibilidade de mudar o valor do argumento, ou seja, não pode ser alterado dentro da função, assim, não perde o valor original
        void calc_idade(int diaAT, int mesAT, int ano_atualAT); //apenas definindo a função no .h
        int informaIdade();
};
