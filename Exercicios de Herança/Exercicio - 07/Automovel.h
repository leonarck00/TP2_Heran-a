#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H
#include<Veiculo.h>

namespace dnn {

class Automovel : public Veiculo
{
public:
    Automovel(): Veiculo() {}
    std::string tipoDeVeiculo()const{return "Automovel";}

};

}


#endif // AUTOMOVEL_H
