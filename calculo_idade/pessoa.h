#include <stdio.h>
class Pessoa{ 
    private:    
        int diaP, mesP, anoP, idadeP;
        char nomeP[30];
    
    //função construtora inicializa as variaveis, pega as variaveis do main e atribui a elas os atributos dos objetos
    public: 
        Pessoa(int diaNa, int mesNa, int anoNa, const char* nome); //poderia inicializar como nome[]="", para ser um valor default, o que é interessante
        
        Pessoa();

        void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);

        void calcula_imprime_idade(int diaAT, int mesAT, int ano_atualAT);

        void imprime_idade();

        void calc_idade(int diaAT, int mesAT, int ano_atualAT); 

        int informaIdade(); //valores default não aparecem no .h mas no .cpp sempre
};                          //se int anoNa=0, o valor padrão é 0, mas se não for atribuído, o valor padrão é lixo de memória, o que pode causar problemas
