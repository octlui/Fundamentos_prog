#include "Universidade.h"
#include <string.h>

Universidade::Universidade(char *n){ //chamando a construtora de universidade e setando o nome
    strcpy(nome, n);                                
}
Universidade::~Universidade(){

}
void Universidade::setNome(char *n){
    strcpy(nome, n);
}
char* Universidade::getNome(){
    return nome;
}