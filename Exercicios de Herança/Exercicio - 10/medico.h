#ifndef MEDICO_H
#define MEDICO_H
#include<funcionario.h>

namespace dnn {

class Medico : public Funcionario
{
private:
    std::string especializacao;

public:
    Medico(): Funcionario(), especializacao("") {}
    std::string funcao()const{return "Médico";}
    std::string getEspecializacao() const{return especializacao;}
    void setEspecializacao(const std::string &value){especializacao = value;}
};


}

#endif // MEDICO_H
