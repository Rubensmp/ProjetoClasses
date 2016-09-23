#ifndef RETANGULO_H
#define RETANGULO_H
#include <poligono.h>


class Retangulo : public Poligono{
private:
    float x;
    float y;
    float altura;
    float largura;
public:
    Retangulo();
    Retangulo(float x, float y, float _largura, float _altura);
    ~Retangulo();

};

#endif // RETANGULO_H
