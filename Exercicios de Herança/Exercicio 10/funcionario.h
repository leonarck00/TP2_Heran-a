#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include<string>

namespace dnn {

class Funcionario
{
protected:
    std::string nome;
    int idade;
    int cargaHoraria;
    char sexo;

public:
    Funcionario(): nome(""), idade(0), cargaHoraria(0), sexo() {}
    std::string getNome() const{return nome;}
    void setNome(const std::string &value){nome = value;}
    int getIdade() const{return idade;}
    void setIdade(int value){idade = value;}
    int getCargaHoraria() const{return cargaHoraria;}
    void setCargaHoraria(int value){cargaHoraria = value;}
    char getSexo() const{return sexo;}
    void setSexo(char value){sexo = value;}
    virtual std::string funcao()const = 0;
};

}

#endif // FUNCIONARIO_H
