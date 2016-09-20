#ifndef RETANGULO_H
#define RETANGULO_H
#include <poligono.h>


class Retangulo : public Poligono{
private:
    float xcm;
    float ycm; 
    Poligono poli;
public:
    Retangulo();
    Retangulo(int x, int y, int largura, int altura);
    ~Retangulo();
};

#endif // RETANGULO_H
