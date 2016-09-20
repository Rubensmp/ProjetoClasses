#include <iostream>
#include <poligono.h>
#include <retangulo.h>

using namespace std;

int main(void){
    float teta;
    int n;
    Ponto p1, p2, p3, p5, p6, p7;


    p1.setX(9); p1.setY(2);
    p1.imprime();

    p2.setXY(1,2);
    p2.imprime();

    Ponto p4(3,2);

    cout << p4.getX() << "," << p4.getY()
         << "\n";

    cout << "Modulo p1 = " <<  p1.norma() << "\n";
    p4.imprime();

    p3=p1.add(p2);
    p3.imprime();

    p5=p1.sub(p2);
    p5.imprime();

    p6=p4.translada(2,4);
    p6.imprime();

    p7=p6;
    p7.imprime();

    cout << "Digite o valor do numero de arestas: \n";
    cin >> n;

    Poligono poli(n), poli2(n), poli3(n), poli4(4),poli5(4);

    cout << "Numero de arestas eh " << poli.getN() << ". Digite as coordenadas da arestas de modo anti-horario.\n";
    poli.defina();
    poli.imprimep();
    cout << "area = " <<  poli.area() << "\n";

    cout << "Translacao\n";

    poli2=poli.transladapoligono(1,2);
    poli2.imprimep();

    cout << "Rotacao\n";
    cout << "Digite o angulo para rotacionar a figura \n";
    cin >> teta;

    poli3=poli.rotaciona(teta);
    poli3.imprimep();

    cout << "area = " <<  poli3.area() << "\n";

    poli4.setPoli(0,3,1);
    poli4.setPoli(1,4,1);
    poli4.setPoli(2,4,2);
    poli4.setPoli(3,3,2);

    poli4.imprimep();

    poli5=poli4.rotaciona(30);
    poli5.imprimep();

    Retangulo k(3,1,1,1);

}
