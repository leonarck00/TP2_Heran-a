#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include<Pessoa.h>

namespace dnn {

class PessoaFisica : public Pessoa
{
public:
    PessoaFisica() : Pessoa(), cpf(0), sexo('') {}

    double getCpf() const{return cpf;}
    void setCpf(double value){cpf = value;}

    char getSexo() const{return sexo;}
    void setSexo(char value){sexo = value;}

    float calcularIR(float rendaBrutaMensal)const;

private:
    double cpf;
    char sexo;
};

}


#endif // PESSOAFISICA_H
