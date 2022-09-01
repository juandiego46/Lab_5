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

    barra=new QGraphicsRectItem(-30,-10,60,20);
    scene->addItem(barra);
    barra->setPos(200,300);

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
        if(jugador->getX() < (scene->width()-36)) jugador->setX(jugador->getX()+vel);
    }

    if(event->key()==Qt::Key_W){
        if(jugador->getY() < (scene->height()) && !jugador->collidesWithItem(barra)) jugador->setY(jugador->getY()-vel);

    }

    if(event->key()==Qt::Key_S){
        if(jugador->getY() < (scene->height())) jugador->setY(jugador->getY()+vel);
    }

    if(event->key()==Qt::Key_A){
        if(jugador->getX() < (scene->width())) jugador->setX(jugador->getX()-vel);
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

