#ifndef PONTO_H
#define PONTO_H

//!  Classe Ponto.c
/*!
  Classe Ponto usada para representar pontos no espaço bidimensional.
*/


class Ponto{
private:
    //! Variáveis x e y do tipo float para guardar a posição do ponto
    /*! */
    float x, y;
public:

    //! Construtor da classe Ponto
    /*!
      Usa os parametros x e y para determinar o valor do ponto. Se x e y nao forem determinados, x e y recebem 0.
    */
    Ponto(float _x = 0, float _y = 0);

    //! Construtor de copia da classe Ponto
    /*!
      Copia o x e y para outro ponto
    */
    Ponto(Ponto &p);

    //! Destrutor da classe Ponto
    /*!
    */
    ~Ponto();

    //! Um membro com um argumentos e retorna void. Define o valor da coordenada x do ponto.
      /*!
        \param _x um argumento tipo float
        \return void
        \sa Ponto(), ~Ponto()
      */
    void setX(float _x);

    //! Um membro com um argumentos e retorna void. Define o valor da coordenada y do ponto.
      /*!
        \param _y um argumento tipo float
        \return void
        \sa Ponto(), ~Ponto()
      */
    void setY(float _y);

    //! Um membro sem argumento e retorna um valor tipo float.  Recupera o valor da coordenada y do ponto.
      /*!
        \return O valor de X do ponto
        \sa Ponto(), ~Ponto()
      */
    float getX(void);

    //! Um membro sem argumento e retorna um valor tipo float. Recupera o valor da coordenada y do ponto.
      /*!
        \return O valor de Y do ponto
        \sa Ponto(), ~Ponto()
      */
    float getY(void);

    //! Um membro com dois argumentos e retorna void. Define, em uma mesma função, os valores da coordenadas x e y do ponto.
      /*!
        \param _x um argumento tipo float
        \param _y um argumento tipo float
        \return void
        \sa Ponto(), ~Ponto()
      */
    void setXY(float _x, float _y);

    //! Um membro sem argumento e retorna um valor tipo float. Calcula a distância do ponto para a origem do sistema de coordenadas.
      /*!
        \param _y um argumento tipo float
        \return void
        \sa Ponto(), ~Ponto()
      */
    float norma(void);

    //! Um membro com um argumento tipo ponto e retorna um valor tipo Ponto.Adiciona as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido, armazenando o resultado (x+x1,y+y1) nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
      /*!
        \param p1 um argumento tipo Ponto.
        \return Ponto
        \sa Ponto(), ~Ponto()
      */
    Ponto add(Ponto p1);

    //! Um membro com um argumento tipo ponto e retorna um valor tipo Ponto.Subtrai as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1)) fornecido, armazenando o resultado (x−x1,y−y1) nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
      /*!
        \param p1 um argumento tipo Ponto.
        \return Ponto
        \sa Ponto(), ~Ponto()
      */
    Ponto sub(Ponto p1);

    //! Um membro com dois argumento tipo float e retorna um valor tipo Ponto. Translada o ponto (x,y) de (+a,+b), de modo que, após a execução do método, as coordenadas do ponto serão (x+a,y+b).
      /*!
        \param a um argumento tipo float
        \param b um argumento tipo float
        \return Ponto
        \sa Ponto(), ~Ponto()
      */
    Ponto translada(float a, float b);

    //! Imprime o ponto na forma (xpos, ypos).
      /*!
        \sa Ponto(), ~Ponto()
      */
    void imprime(void);
};

#endif // PONTO_H
