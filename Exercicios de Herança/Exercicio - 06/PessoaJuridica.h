#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include<Pessoa.h>

namespace dnn {

class PessoaJuridica : public Pessoa
{
public:
    PessoaJuridica() : Pessoa(), cnpj(0), razaoSocial("") {}

    double getCnpj() const{return cnpj;}
    void setCnpj(double value){cnpj = value;}

    std::string getRazaoSocial() const{return razaoSocial;}
    void setRazaoSocial(const std::string &value){razaoSocial = value;}

    float calcularIR(float rendaBrutaMensal)const{return (rendaBrutaMensal*12)*0.10;}

private:
    double cnpj;
    std::string razaoSocial;

};

}


#endif // PESSOAJURIDICA_H
