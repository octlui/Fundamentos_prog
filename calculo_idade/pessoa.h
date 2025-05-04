#include <stdio.h>
class Pessoa{ //classe representa uma estrutura geral de um conjunto de elementos
    private:    //em uma classe os elementos são private por definição (em uma struct, são public por definição)
        int diaP, mesP, anoP, idadeP; 
    
    //função construtora inicializa as variaveis, pega as variaveis do main e atribui a elas os atributos dos objetos
    public:
        Pessoa(int diaNa, int mesNa, int anoNa);
        void calc_idade(int diaAT, int mesAT, int ano_atualAT); //apenas definindo a função no .h
        int informaIdade();
};