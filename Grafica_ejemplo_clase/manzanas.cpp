
#include "manzanas.h"
#include <vector>
#include <iostream>
using namespace std;

int Manzanas::getX() const
{
    return x;
}

void Manzanas::setX(int newX)
{
    x = newX;
}

int Manzanas::getY() const
{
    return y;
}

void Manzanas::setY(int newY)
{
    y = newY;
}

void Manzanas::posicionManzana()
{
    setPos(x,y);
}

void Manzanas::posicionManzana(int _x, int _y)
{
    x = _x;
    y = _y;
    setPos(_x,_y);
}




Manzanas::Manzanas(QGraphicsItem *carr_2): QGraphicsPixmapItem(carr_2)
{
    setPixmap(QPixmap(":/images/Manzana.png").scaled(30,20));
}

//soldado::soldado(QGraphicsItem *carr): QGraphicsPixmapItem(carr)
