#include "soldado.h"
#include "mainwindow.h"


int soldado::getX() const
{
    return x;
}

void soldado::setX(int value)
{
    x = value;
}

int soldado::getY() const
{
    return y;
}

void soldado::setY(int value)
{
    y = value;
}

soldado::soldado(QGraphicsItem *carr): QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/images/pacmander.png").scaled(23,23));

}

void soldado::posicion()
{
    setPos(x,y);
}

void soldado::posicion(int x_1, int y_1)
{
    x = x_1;
    y = y_1;
    setPos(x_1,y_1);
}

void soldado::interaccionTeclado(QKeyEvent *ptr){
    if(ptr->key()==Qt::Key_A){
       setPixmap(QPixmap(":/images/pacmanizq.png").scaled(23,23));
    }
    else if(ptr->key()==Qt::Key_S){
        setPixmap(QPixmap(":/images/pacmanaba.png").scaled(23,23));
    }
    else if(ptr->key()==Qt::Key_W){
        setPixmap(QPixmap(":/images/pacamanarri.png").scaled(23,23));
    }
    else if(ptr->key()==Qt::Key_D){
        setPixmap(QPixmap(":/images/pacmander.png").scaled(23,23));
    }

}








