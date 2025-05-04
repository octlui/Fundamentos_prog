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
int main(){
    
    Pessoa Einstein (14, 3, 1879);
    Pessoa Newton (4, 1, 1643);

    Einstein.calc_idade(11, 1, 2009); //tanto einstein quanto newton tem seu próprio calculo_idade
    Newton.calc_idade(11, 1, 2009); 

    printf("A idade de Newton seria de %d \n", Newton.idadeP);
    printf("A idade de Einstein seria de %d \n", Einstein.idadeP);

    getchar(); //dá standby na tela
    return 0;
}