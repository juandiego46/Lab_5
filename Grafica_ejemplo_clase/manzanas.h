#ifndef MANZANAS_H
#define MANZANAS_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <vector>
using namespace std;

class Manzanas: public QObject,
        public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int x;
    int y;
public:
    Manzanas(QGraphicsItem *carr_2=0);

    int getX() const;
    void setX(int newX);

    int getY() const;
    void setY(int newY);

    void posicionManzana();
    void posicionManzana(int _x, int _y);


};

#endif // MANZANAS_H
