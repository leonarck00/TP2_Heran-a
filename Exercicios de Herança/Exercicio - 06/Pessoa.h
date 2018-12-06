#ifndef PESSOA_H
#define PESSOA_H
#include<string>

namespace dnn {

class Pessoa
{
public:
    Pessoa() : nome(""), endereco(""), telefone(""), email("") {}

    std::string getNome() const{return nome;}
    void setNome(std::string value){nome = value;}

    std::string getEndereco() const{return endereco;}
    void setEndereco(std::string value){endereco = value;}

    std::string getTelefone() const{return telefone;}
    void setTelefone(std::string value){telefone = value;}

    std::string getEmail() const{return email;}
    void setEmail(std::string value){email = value;}

    virtual float calcularIR(float rendaBrutaMensal)const = 0;
protected:
    std::string nome;
    std::string endereco;
    std::string telefone;
    std::string email;
};

}


#endif // PESSOA_H
