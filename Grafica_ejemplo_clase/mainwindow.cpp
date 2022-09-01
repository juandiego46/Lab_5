#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    vel = 5;
    ui->setupUi(this);
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,500,500);
    ui->graphicsView->setScene(scene);
    //scene->addRect(scene->sceneRect());
    scene->addRect(0,0,20,20);

    QPen Color(Qt::red);

    barra = new QGraphicsRectItem(-190,200,0,-500); //VerticialIzquierda
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-490,8,490,0); //HorizontalSuperior
    scene->addItem(barra);
    barra->setPos(500,0);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(0,490,-490,0); //HorizontalInferior
    scene->addItem(barra);
    barra->setPos(500,0);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(290,200,0,-500); // VerticalDerecha
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(41,-286,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(41,2,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(41,98,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(41,-192,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-64,-48,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(149,-48,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(149,96,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(203,48,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-118,48,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(148,-192,17,108); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-65,-192,17,108); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-65,96,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-155,143,160,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(95,143,160,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-11,95,123,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-11,-195,123,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-11,-2,123,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(200,-195,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-155,-195,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-155,47,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(200,47,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(95,-146,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-49,-146,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-65,46,73,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(94,46,73,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(94,-258,74,33); // rectanguloGordo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-67,-258,74,33); // rectanguloGordo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-155,-258,55,33); // rectanguloGordo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(201,-258,55,33); // rectanguloGordo
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-190,-50,90,65); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-190,-146,90,65); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(200,-146,90,65); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(200,-50,90,65); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(255,95,35,17); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-190,95,35,17); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);

    barra = new QGraphicsRectItem(-13,-100,127,68); // rectanguloMedio
    scene->addItem(barra);
    barra->setPos(200,300);
    barra->setPen(Color);





    ui->graphicsView->setBackgroundBrush(QBrush((QImage(":/images/Mapa.jpg"))));

    jugador = new soldado();
    jugador->posicion(250,250);
    scene->addItem(jugador);

    timer = new QTimer();
    timer->stop();
    connect(timer, SIGNAL(timeout()),this,SLOT(hmov()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_F4) close();

    if(event->key()==Qt::Key_D){
        if(jugador->getX() < (scene->width()-36)) jugador->setX(jugador->getX()+vel); jugador->interaccionTeclado(event);
    }

    if(event->key()==Qt::Key_W){
        if(jugador->getY() < (scene->height()) && !jugador->collidesWithItem(barra)) jugador->setY(jugador->getY()-vel); jugador->interaccionTeclado(event);

    }

    if(event->key()==Qt::Key_S){
        if(jugador->getY() < (scene->height())) jugador->setY(jugador->getY()+vel); jugador->interaccionTeclado(event);
    }

    if(event->key()==Qt::Key_A){
        if(jugador->getX() < (scene->width())) jugador->setX(jugador->getX()-vel); jugador->interaccionTeclado(event);
    }

    jugador->posicion();
}
void MainWindow::hmov(){
    if (jugador->getX() > (scene->width()-36)) vel = -1*vel;
    else if (jugador->getX() < 0) vel = -1*vel;
    jugador->posicion(jugador->getX()+vel, jugador->getY());
}

void MainWindow::on_pushButton_clicked()
{
    if(timer->isActive()) timer->stop();
    else timer->start(10);
}

