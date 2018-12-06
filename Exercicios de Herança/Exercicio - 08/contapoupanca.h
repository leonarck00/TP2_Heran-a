#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include<conta.h>

namespace dnn {

class ContaPoupanca : public Conta
{
public:
    ContaPoupanca() : Conta(), variacao(0), taxaDeJuros(0) {}

    int getVariacao() const{return variacao;}
    void setVariacao(int value){variacao = value;}
    void aplicarJuros(){saldo += saldo*(taxaDeJuros/100);}

    float getTaxaDeJuros() const{return taxaDeJuros;}
    void setTaxaDeJuros(float value){taxaDeJuros = value;}

private:
    int variacao;
    float taxaDeJuros;
};

}

#endif // CONTAPOUPANCA_H
