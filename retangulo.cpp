#include <retangulo.h>
#include <iostream>


using namespace std;



//Retangulo(int x, int y, float largura, float altura):Poligono(4){
  //  q[0].setXY(x,y);
  //  q[1].setXY(x+largura,y);
  //  q[2].setXY(x+largura,y+altura);
   // q[3].setXY(x,y+altura);


//}

//Retangulo::Retangulo(int x, int y, float largura, float altura){
 //   Poligono _poli(4);
  //  poli=_poli;
//    poli.setPoli(0,x,y);
 //   poli.setPoli(1,x+largura,y);
 //   poli.setPoli(2,x+largura,y+altura);
 //   poli.setPoli(3,x,y+altura);
//}


Retangulo():Poligono(4){}
Retangulo(float x, float y, float _largura, float _altura):Poligono(4){}


    Retangulo::~Retangulo(){}




