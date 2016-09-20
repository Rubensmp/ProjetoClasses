#include "ponto.h"
#include <cmath>
#include <iostream>

using namespace std;

    Ponto::Ponto(float _x, float _y){
        x = _x;
        y = _y;
    }

    Ponto::Ponto(Ponto &p){
        x = p.x;
        y = p.y;
    }

    void Ponto::setX(float _x){
        x = _x;
    }

    Ponto::~Ponto(){}

    void Ponto::setY(float _y){
        y = _y;
    }

    float Ponto::getX(void){
        return x;
    }

    float Ponto::getY(void){
        return y;
    }

    void Ponto::setXY(float _x, float _y){
        x = _x;
        y = _y;
    }


    float Ponto::norma(void){
        return sqrt(x*x+y*y);
    }

    Ponto Ponto::add(Ponto p1){
        Ponto ret;
        ret.x = x + p1.x;
        ret.y = y + p1.y;
        return ret;
    }

    Ponto Ponto::sub(Ponto p1){
        Ponto ret;
        ret.x = x - p1.x;
        ret.y = y - p1.y;
        return ret;
    }

    Ponto Ponto::translada(float a, float b){
        Ponto ret;
        ret.x = x + a;
        ret.y = y + b;
        return ret;
    }

    void Ponto::imprime(void){
        cout << "(" << x <<", " << y << ")\n";
    }
