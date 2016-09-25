#ifndef POLIGONO_H
#define POLIGONO_H
#include <ponto.h>

//!  Classe Poligono
/*!
  Classe poligono, usada para representar polígonos convexos com limitacao de 100 vertices.
*/

class Poligono{
private:
    //! Variavel npontos do tipo inteiro para guardar o numero de vertices do poligono.
    /*! */
    int npontos;
protected:
    //! Vetor de pontos para armazenar cada vertice do poligono.
    /*! */
    Ponto p[100];
public:

    //! Construtor default da classe Poligono
    /*!
      Usa o parametro npontos para determinar o numero de vertices.
    */
    Poligono();

    //! Construtor da classe Ponto
    /*!
      Usa o parametro npontos para determinar o numero de vertices. Como padrao os pontos ficam determiandos em (0,0).
    */
    Poligono(int n);

    //! Destrutor da classe Poligono
    /*!
    */
    ~Poligono();

    //! Um membro com tres argumentos e retorna void. Define o valor da coordenada x e y do ponto p[i] do ponto.
      /*!
        \param _x um argumento tipo float
        \return void
        \sa Poligono(), ~Poligono()
      */
    void setPoli(int i, float x, float y);

    //! Um membro sem argumento e retorna um valor tipo int. Recupera o numero de pontos, npontos, do poligono.
      /*!
        \return O valor de npontos do poligono.
        \sa Poligono(), ~Poligono()
      */
    int getN(void);

    //! Um membro sem argumento e retorna um valor tipo float. Calcular a área do polígono.
      /*!
        \return float
        \sa Poligono(), ~Poligono()
      */
    float area(void);

    //! Um membro com dois argumento tipo float e retorna um valor tipo Poligono. Translada cada ponto  (x,y) do poligono em (+a,+b), de modo que, após a execução do método, as coordenadas de cada ponto serão (x+a,y+b).
      /*!
        \param a um argumento tipo float
        \param b um argumento tipo float
        \return Poligono
        \sa Poligono(), ~Poligono()
      */
    Poligono transladapoligono(float a, float b);

    //! Um membro com um argumento tipo float e retorna um valor tipo Poligono.Rotacionar o polígono de θ graus no sentido anti-horário em torno de um ponto (x0,y0).
      /*!
        \param teta um argumento tipo float.
        \return Poligono
        \sa Poligono(), ~Poligono()
      */
    Poligono rotaciona(float teta);

    //! Imprimir o polígono armazenado da forma (x0,y0)→(x1,y1)→(x2,y2)→...
      /*!
        sa Poligono(), ~Poligono()
      */
    void imprimep();
};

#endif // POLIGONO_H
