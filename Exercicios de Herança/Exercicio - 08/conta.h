#ifndef CONTA_H
#define CONTA_H
#include<string>

namespace dnn {

class Conta
{
public:
    Conta() : numConta(0), agencia(0), senha(""), saldo(0) {}
    void abrirConta()const{bool contaAberta = true;}
    void fecharConta()const{bool contaAberta = false;}
    void depositar(float valor){saldo+=valor;}
    void sacar(float valor){saldo-=valor;}

    int getNumConta() const{return numConta;}
    void setNumConta(int value){numConta = value;}

    int getAgencia() const{return agencia;}
    void setAgencia(int value){agencia = value;}

    void setSenha(const std::string &value){senha = value;}

    float consultarSaldo() const{return saldo;}

protected:
    int numConta;
    int agencia;
    std::string senha;
    float saldo;
};

}


#endif // CONTA_H
