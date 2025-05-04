#include "pessoa.h"
#include <stdio.h>
int main(){
    
    Pessoa Einstein (14, 3, 1879, "Albert Einstein");
    Pessoa Newton (4, 1, 1643, "Isaac Newton");

    Einstein.calc_idade(11, 1, 2009); //tanto einstein quanto newton tem seu próprio calculo_idade
    Newton.calc_idade(11, 1, 2009); 

    getchar(); //dá standby na tela
    return 0;
}