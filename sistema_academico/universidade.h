#ifndef _UNIVERSIDADE_H_ //evita repetições de inclusões
#define _UNIVERSIDADE_H_

class Universidade{
    private:
        char nome[30];
    
    public:
        Universidade(char* n=""); //construtora cujo parâmetro é um valor default
        ~Universidade();

        void setNome(char* n);
        char* getNome();
};

#endif