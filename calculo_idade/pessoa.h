//aqui vai as definições

// pessoa.h
#ifndef PESSOA_H
#define PESSOA_H

typedef struct {
    int dia, mes, ano, idade;
} Pessoa;

int calc_idade(Pessoa p, int dia, int mes, int ano_atual);

#endif