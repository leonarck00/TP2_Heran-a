#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include "pessoa.h"


class Estudante : public Pessoa
{
public:
    Estudante(long matricula, std::string campus, std::string curso);
    long getMatricula(){return matricula;}
    void setMatricula(long matricula){this->matricula = matricula;}
    std::string getCampus(){return campus;}
    void setCampus(std::string campus){this->campus = campus;}
    std::string getCurso(){return curso;}
    void setCurso(std::string curso){this->curso = curso;}

protected:
    std::string curso;
    std::string campus;
    long matricula;

};

#endif // ESTUDANTE_H
