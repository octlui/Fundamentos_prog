#include "pessoa.h"

int main(){
    
    Pessoa Einstein (14, 3, 1879);
    Pessoa Newton (4, 1, 1643);

    Einstein.calc_idade(11, 1, 2009); //tanto einstein quanto newton tem seu próprio calculo_idade
    Newton.calc_idade(11, 1, 2009); 

    printf("A idade de Newton seria de %d \n", Newton.informaIdade());
    printf("A idade de Einstein seria de %d \n", Einstein.informaIdade());

    getchar(); //dá standby na tela
    return 0;
}