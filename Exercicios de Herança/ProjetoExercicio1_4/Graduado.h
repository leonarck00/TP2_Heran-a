#ifndef GRADUADO_H
#define GRADUADO_H
#include"Estudante.h"


class Graduado : public Estudante
{
public:
    Graduado(int anoConclusao, int  anoColacao, long numeroDiplo);
    int getAnoConclusao(){return anoConclusao;}
    void setAnoConclusao(long anoConclusao){this->anoConclusao = anoConclusao;}
    int getAnoColacao(){return anoColacao;}
    void setAnoColacao(int anoColacao){this->anoColacao = anoColacao;}
    long getNumeroDip(){return numeroDiplo;}
    void setNumeroDip(long numeroDiplo){this->numeroDiplo = numeroDiplo;}


protected:
    int anoConclusao;
    int  anoColacao;
    long numeroDiplo;
};

#endif // GRADUADO_H
