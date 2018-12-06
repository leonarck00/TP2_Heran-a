#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include "pessoa.h"


class Trabalhador : public Pessoa
{
public:
    Trabalhador(std::string departamento, float salario, std::string funcao);
    std::string getDepartamento(){return departamento;}
    void setDepartamento(std::string departamento){this->departamento = departamento;}
    std::string getFuncao(){return funcao;}
    void setFuncao(std::string funcao){this->funcao = funcao;}
    float getSalario(){return salario;}
    void setSalario(){this->salario = salario;}
protected:
    std::string funcao;
    std::string departamento;
    float salario;

};

#endif // TRABALHADOR_H
