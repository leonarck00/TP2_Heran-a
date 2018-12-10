#ifndef MOTORISTA_H
#define MOTORISTA_H
#include<funcionario.h>

namespace dnn {

class Motorista : public Funcionario
{
private:
    std::string carro;

public:
    Motorista() : Funcionario(), carro("") {}
    std::string getCarro() const{return carro;}
    void setCarro(const std::string &value){carro = value;}
    std::string getFuncao()const{return "Motorista";}
};

}


#endif // MOTORISTA_H
