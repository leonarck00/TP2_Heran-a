#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include<funcionario.h>

namespace dnn {

class Engenheiro : public Funcionario
{
public:
    Engenheiro() : Funcionario() {}
    std::string getFuncao()const{return "Engenheiro";}
};

}

#endif // ENGENHEIRO_H
