#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include<Produto.h>

namespace dnn {

class Notebook : public Produto
{
public:
    Notebook() : Produto(), marca(""), modelo(""), memoriaRAM(""), capacidadeHD(""), processador(""), tamanhoTela(0), sistemaOperacional("") {}

    std::string getMarca() const{return marca;}
    void setMarca(const std::string &value){marca = value;}

    std::string getModelo() const{return modelo;}
    void setModelo(const std::string &value){modelo = value;}

    std::string getMemoriaRAM() const{return memoriaRAM;}
    void setMemoriaRAM(const std::string &value){memoriaRAM = value;}

    std::string getCapacidadeHD() const{return capacidadeHD;}
    void setCapacidadeHD(const std::string &value){capacidadeHD = value;}

    std::string getProcessador() const{return processador;}
    void setProcessador(const std::string &value){processador = value;}

    int getTamanhoTela() const{return tamanhoTela;}
    void setTamanhoTela(int value){tamanhoTela = value;}

    std::string getSistemaOperacional() const{return sistemaOperacional;}
    void setSistemaOperacional(const std::string &value){sistemaOperacional = value;}

    std::string tipoDeProduto()const{return "Notebook";}

private:
    std::string marca;
    std::string modelo;
    std::string memoriaRAM;
    std::string capacidadeHD;
    std::string processador;
    int tamanhoTela;
    std::string sistemaOperacional;
};

}


#endif // NOTEBOOK_H
