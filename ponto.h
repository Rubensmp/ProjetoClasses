#ifndef PONTO_H
#define PONTO_H


class Ponto{
private:
    float x, y;
public:
    Ponto(float _x = 0, float _y = 0);
    Ponto(Ponto &p);
    ~Ponto();
    void setX(float _x);
    void setY(float _y);
    float getX(void);
    float getY(void);
    void setXY(float _x, float _y);
    float norma(void);
    Ponto add(Ponto p1);
    Ponto sub(Ponto p1);
    Ponto translada(float a, float b);
    void imprime(void);
};

#endif // PONTO_H
