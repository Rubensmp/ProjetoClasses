#ifndef POLIGONO_H
#define POLIGONO_H
#include <ponto.h>


class Poligono{
private:
    int npontos;
    Ponto p[100];
public:
    Poligono();
    Poligono(int n);
    ~Poligono();
//    void defina(void);
    void setPoli(int i, float x, float y);
    int getN(void);
    float area(void);
    Poligono transladapoligono(float a, float b);
    Poligono rotaciona(float teta);
    void imprimep();
};

#endif // POLIGONO_H
