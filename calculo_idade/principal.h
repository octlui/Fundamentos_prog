#include "pessoa.h"

class principal{
    private:
        Pessoa Einstein;
        Pessoa Newton;
    
    public:
        principal();
        ~principal(); //destrutora sem parametros
        void executar();
};