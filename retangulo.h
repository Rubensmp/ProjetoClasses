#ifndef RETANGULO_H
#define RETANGULO_H
#include <poligono.h>


class Retangulo : public Poligono{
private:
    float altura;
    float largura;
public:

    Retangulo(float x, float y, float _largura, float _altura):Poligono(4){
        altura=_altura;
        largura=_largura;
        p[0].setXY(x,y);
        p[1].setXY(x+_largura,y);
        p[2].setXY(x+_largura,y+_altura);
        p[3].setXY(x,y+_altura);
    };


    ~Retangulo();
    Poligono rotacionaRet(float teta);

};

#endif // RETANGULO_H
