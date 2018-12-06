#ifndef LIVRO_H
#define LIVRO_H
#include<Produto.h>

namespace dnn {

class Livro : public Produto
{
public:
    Livro() : Produto(), autor(""), tradutor(""), editora(""), anoPublicacao(0) {}

    std::string getAutor() const{return autor;}
    void setAutor(const std::string &value){autor = value;}

    std::string getTradutor() const{return tradutor;}
    void setTradutor(const std::string &value){tradutor = value;}

    std::string getEditora() const{return editora;}
    void setEditora(const std::string &value){editora = value;}

    int getAnoPublicacao() const{return anoPublicacao;}
    void setAnoPublicacao(int value){anoPublicacao = value;}

    std::string tipoDeProduto()const{return "Livro";}

private:
    std::string autor;
    std::string tradutor;
    std::string editora;
    int anoPublicacao;
};

}


#endif // LIVRO_H
