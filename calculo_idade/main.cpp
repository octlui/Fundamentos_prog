#include "pessoa.h"
#include <iostream> //biblioteca do cout
using namespace std;

int main(){
    
    Pessoa Einstein (14, 3, 1879, "Albert Einstein");
    Pessoa Newton (4, 1, 1643, "Isaac Newton");

    Einstein.calcula_imprime_idade(11, 1, 2009);
    Newton.calcula_imprime_idade(11, 1, 2009);
    
    cout<<"Fim do programa"<<endl;

    getchar(); //dá standby na tela
    return 0;
}