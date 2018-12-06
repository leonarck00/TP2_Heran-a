#ifndef CD_H
#define CD_H
#include<Produto.h>

namespace dnn {

class CD : public Produto
{
public:
    CD() : Produto(), nomeAlbum(""), banda(""), cantor(""), generoMusical("") {}

    std::string getNomeAlbum() const{return nomeAlbum;}
    void setNomeAlbum(const std::string &value){nomeAlbum = value;}

    std::string getBanda() const{return banda;}
    void setBanda(const std::string &value){banda = value;}

    std::string getCantor() const{return cantor;}
    void setCantor(const std::string &value){cantor = value;}

    std::string getGeneroMusical() const{return generoMusical;}
    void setGeneroMusical(const std::string &value){generoMusical = value;}

    std::string tipoDeProduto()const{return "CD de música";}

private:
    std::string nomeAlbum;
    std::string banda;
    std::string cantor;
    std::string generoMusical;
};

}


#endif // CD_H
