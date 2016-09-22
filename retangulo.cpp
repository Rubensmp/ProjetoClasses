#include <retangulo.h>
#include <iostream>

using namespace std;

Retangulo::Retangulo(){}

Retangulo::Retangulo(int x, int y, int largura, int altura){
    Poligono _poli(4);
    poli=_poli;
    poli.setPoli(0,x,y);
    poli.setPoli(1,x+largura,y);
    poli.setPoli(2,x+largura,y+altura);
    poli.setPoli(3,x,y+altura);

}


Retangulo::~Retangulo(){}




