#ifndef PRODUTO_H
#define PRODUTO_H
#include<string>

namespace dnn {

class Produto
{
public:
    Produto();

    int getCodigo() const{return codigo;}
    void setCodigo(int value){codigo = value;}

    std::string getDescricao() const{return descricao;}
    void setDescricao(const std::string &value){descricao = value;}

    float getPrecoDeVenda() const{return precoDeVenda;}
    void setPrecoDeVenda(float value){precoDeVenda = value;}

    virtual std::string tipoDeProduto() const = 0;

protected:
    int codigo;
    std::string descricao;
    float precoDeVenda;

};

}


#endif // PRODUTO_H
