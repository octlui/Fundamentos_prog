#ifndef _UNIVERSIDADE_H_ //evita repetições de inclusões
#define _UNIVERSIDADE_H_

class universidade{
    private:
        char nome[30];
    
    public:
        universidade(char* n=""); //construtora cujo parâmetro é um valor default
        ~universidade();

        void setNome(char *n);
        char *getNome();
};

#endif