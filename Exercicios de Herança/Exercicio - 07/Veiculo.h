#ifndef VEICULO_H
#define VEICULO_H
#include<string>

namespace dnn {

class Veiculo
{
public:
    Veiculo(): combustivel(""), velocidadeMaxima(0), numPassageiros(0) {}

    std::string getCombustivel() const{return combustivel;}
    void setCombustivel(const std::string &value){combustivel = value;}

    int getVelocidadeMaxima() const{return velocidadeMaxima;}
    void setVelocidadeMaxima(int value){velocidadeMaxima = value;}

    int getNumPassageiros() const{return numPassageiros;}
    void setNumPassageiros(int value){numPassageiros = value;}

    virtual std::string tipoDeVeiculo()const = 0;

protected:
    std::string combustivel;
    int velocidadeMaxima;
    int numPassageiros;
};

}


#endif // VEICULO_H
