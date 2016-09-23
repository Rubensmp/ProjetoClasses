#include <retangulo.h>
#include <iostream>
#include <cmath>
#include "ponto.h"
#define PI 3.14159265

using namespace std;

Poligono Retangulo::rotacionaRet(float teta){
    float xcm, ycm, rad=teta*PI/180;
    Poligono poli(4);
    xcm=largura/2;
    ycm=altura/2;

    Ponto pcm, p2[4],p3[4];

    pcm.setXY(xcm,ycm);

    for(int i=0; i<4; i++){
        p2[i]=p[i].sub(pcm);
    }

   for(int i=0; i<4; i++){
        p3[i].setXY((p2[i].getX()*cos(rad))-(p2[i].getY()*sin(rad)),p2[i].getX()*sin(rad)+p2[i].getY()*cos(rad));
        p3[i]=p3[i].add(pcm);

    poli.setPoli(i,p3[i].getX(),p3[i].getY());
   }
    return poli;

}
    Retangulo::~Retangulo(){}




