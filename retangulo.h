#ifndef RETANGULO_H
#define RETANGULO_H
#include <poligono.h>


class Retangulo : public Poligono{
private:
    Poligono poli;
public:
    Retangulo();
    Retangulo(int x, int y, int largura, int altura);
    ~Retangulo();
    //ROTACAO CENTRO DE MASSA
};

#endif // RETANGULO_H
