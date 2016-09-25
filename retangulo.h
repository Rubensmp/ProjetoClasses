#ifndef RETANGULO_H
#define RETANGULO_H
#include <poligono.h>

//!  Classe Retangulo
/*!
  Classe Retangulo, derivada da superclasse Poligono, usada para representar pontos no espaço bidimensional.
*/

class Retangulo : public Poligono{
private:
    //! Variáveis altura e largura do tipo float para guardar a altura e largura do retangulo.
    /*! */
    float altura;
    float largura;
public:

    //! Construtor classe Quadrado
    /*!
      Usa o parametro x e y que sao a posicao do ponto inicial do retuangulo e a altura e largura para determinar os outros 3 pontos.
    */
    Retangulo(float x, float y, float _largura, float _altura):Poligono(4){
        altura=_altura;
        largura=_largura;
        p[0].setXY(x,y);
        p[1].setXY(x+_largura,y);
        p[2].setXY(x+_largura,y+_altura);
        p[3].setXY(x,y+_altura);
    };

    //! Destrutor da classe Quadrado
    /*!
    */
    ~Retangulo();

    //! Um membro com um argumento tipo float e retorna um valor tipo Poligono. Rotacionar o quadrado de θ graus em relação ao seu centro de massa.
      /*!
        \param teta um argumento tipo float.
        \return Poligono
        \sa Quadrado(), ~Quadrado()
      */
    Poligono rotacionaRet(float teta);

};

#endif // RETANGULO_H
