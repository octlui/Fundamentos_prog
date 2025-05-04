#include <stdio.h>
typedef struct{
    int diaP, mesP, anoP, idadeP;

    void calc_idade(int diaAT, int mesAT, int ano_atualAT){ 
    idadeP = ano_atualAT - anoP;                            
    if(mesP < mesAT){
            idadeP -= 1; //se a pessoa não fez aniversário, é -1 ano;
        }else{
            if(mesP == mesAT){
                if(diaP > diaAT){
                    idadeP -= 1;
                }
            }
    }
}
}Pessoa;
int main(){
    Pessoa Newton, Einstein; //agora são objetos do tipo pessoa
    
    Newton.diaP= 4;
    Newton.mesP= 1;
    Newton.anoP= 1643;
    Newton.idadeP = -1; //inicializar qualquer variável como -1

    Einstein.diaP = 14;
    Einstein.mesP = 3;
    Einstein.anoP = 1879;
    Einstein.idadeP = -1;

    Einstein.calc_idade(11, 1, 2009); //tanto einstein quanto newton tem seu próprio calculo_idade
    Newton.calc_idade(11, 1, 2009); 

    printf("A idade de Newton seria de %d \n", Newton.idadeP);
    printf("A idade de Einstein seria de %d \n", Einstein.idadeP);

    getchar(); //dá standby na tela
    return 0;
}