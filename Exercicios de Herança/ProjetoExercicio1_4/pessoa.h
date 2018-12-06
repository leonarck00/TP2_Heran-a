#ifndef PESSOA_H
#define PESSOA_H
#include<string>

class Pessoa
{
public:
    Pessoa(std::string nome, std::string endereco, std::string email, long telefone);
    std::string getNome(){return nome;}
    void setNome(std::string nome){this->nome = nome;}
    std::string getEndereco(){return endereco;}
    void setEndereco( std::string endereco){this->endereco = endereco;}
    std::string getEmail(){return email;}
    void setEmail(std::string email){this->email = email;}
    long getTelefone(){return telefone;}
    void setTelefone(long telefone){this->telefone = telefone;}
protected:
    std::string nome;
    std::string endereco;
    std::string email;
    long telefone;

};

#endif // PESSOA_H
