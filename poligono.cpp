#include <poligono.h>
#include <cmath>
#include <iostream>
#define PI 3.14159265

using namespace std;

Poligono::Poligono(){}

Poligono::Poligono(int n){
    npontos=n;
    for(int i=0; i<n; i++){
        p[i].setXY(0,0);
    }
}

Poligono::~Poligono(){}

void Poligono::defina(void){
    float x,y;
        for(int i=0; i<npontos; i++){
        cout << "Insira a coordenada X do ponto " << (i+1) << " do poligono\n";
        cin >> x;
        cout << "Insira a coordenada Y do ponto " << (i+1) << " do poligono\n";
        cin >> y;
        p[i].setXY(x,y);
    }
}

void Poligono::setPoli(int i, float x, float y){
    Ponto pt;
    p[i].setXY(x,y);
}

int Poligono::getN(void){
    return npontos;
}

float Poligono::area(void){
    float somadir=0, somaesq=0, a;
        for(int i=0; i<npontos; i++){
        if(i<(npontos-1)){
            somadir = somadir + (p[i].getX()*p[i+1].getY());
        } else if(i==(npontos-1)){
            somadir = somadir + (p[i].getX()*p[0].getY());
        }
    }

    for(int i=0; i<npontos; i++){
        if(i<(npontos-1)){
            somaesq = somaesq + (p[i+1].getX()*p[i].getY());
        } else if(i==(npontos-1)){
            somaesq = somaesq + (p[0].getX()*p[i].getY());
        }
    }

    a=(abs(somadir-somaesq))/2;

    return a;
}

Poligono Poligono::transladapoligono(float a, float b){
    Poligono poli(npontos);
    for(int i=0; i<npontos; i++){
        poli.p[i].setXY(p[i].getX()+a,p[i].getY()+b);
    }
    return poli;
}

Poligono Poligono::rotaciona(float teta){
    float rad=teta*PI/180;
    Poligono poli(npontos);
    Ponto p2[npontos],p3[npontos];
    for(int i=0; i<npontos; i++){
        if (i==0){
            p2[i]=p[i];
        } else if(i>0)
        p2[i]=p[i].sub(p[0]);
    }

    for(int i=0; i<npontos; i++){
        if (i==0){
            p3[i]=p2[i];
        } else if(i>0){
            p3[i].setXY((p2[i].getX()*cos(rad))-(p2[i].getY()*sin(rad)),p2[i].getX()*sin(rad)+p2[i].getY()*cos(rad));
            p3[i]=p3[i].add(p3[0]);
        }
        poli.p[i].setXY(p3[i].getX(),p3[i].getY());
    }
    return poli;
}

void Poligono::imprimep(){
    for(int i=0; i<npontos; i++){
        cout << "(" << p[i].getX() <<", " << p[i].getY() << ") > ";
    }
    cout << "(" << p[0].getX() <<", " << p[0].getY() <<")\n";
}
