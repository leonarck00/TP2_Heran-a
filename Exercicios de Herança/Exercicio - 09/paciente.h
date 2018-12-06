#ifndef PACIENTE_H
#define PACIENTE_H
#include<string>

namespace dnn {

class Paciente
{
protected:
    std::string nome;
    int idade;

public:
    Paciente(): nome(""), idade(0) {}
};

}


#endif // PACIENTE_H
