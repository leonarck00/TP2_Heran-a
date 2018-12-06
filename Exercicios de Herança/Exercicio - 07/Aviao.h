#ifndef AVIAO_H
#define AVIAO_H
#include<Veiculo.h>

namespace dnn {

class Aviao : public Veiculo
{
public:
    Aviao(): Veiculo() {}
    std::string tipoDeVeiculo()const{return "Aviao";}
};

}

#endif // AVIAO_H
