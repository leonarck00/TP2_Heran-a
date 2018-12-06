#include "PessoaFisica.h"

namespace dnn {

float PessoaFisica::calcularIR(float rendaBrutaMensal) const
{
    if(rendaBrutaMensal <=1400){
        return 0;
    }else if(rendaBrutaMensal<=2100){
        return rendaBrutaMensal*0.10;
    }else if(rendaBrutaMensal<=2800){
        return rendaBrutaMensal*0.15;
    }else if(rendaBrutaMensal<=3600){
        return rendaBrutaMensal*0.25;
    }else{
        return rendaBrutaMensal*0.30;
    }
}


}
