#include "principal.h"

principal::principal(){
    Einstein.inicializa(14, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    executar();
}

void principal::executar(){
    Einstein.calcula_imprime_idade(11, 1, 2009);
    Newton.calcula_imprime_idade(11, 1, 2009);
}