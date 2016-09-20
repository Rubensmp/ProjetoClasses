#include <retangulo.h>
#include <iostream>

using namespace std;

Retangulo::Retangulo(){}

Retangulo::Retangulo(int x, int y, int largura, int altura){
    poli.setPoli(0,x,y);
    poli.setPoli(1,x+largura,y);
    poli.setPoli(2,x+largura,y+altura);
    poli.setPoli(3,x,y+altura);
    poli.imprimep();
}

//Retangulo::transladaRet(float x, float y){
//    return poli.
//}

Retangulo::~Retangulo(){}




