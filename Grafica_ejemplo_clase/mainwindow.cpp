#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <iostream>
#include <QTime>
#include <QMessageBox>
#include <QDebug>

using namespace std;

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

    QPen Color2(Qt::green);

    vector<QGraphicsRectItem*> barras;

    //barras.append(new QGraphicsRectItem(-13,-100,127,68));
    //barras.last();
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,0,-490); //VerticialIzquierda #-190,200
    scene->addItem(barra);
    barra->setPos(10,490);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,480,0); //HorizontalSuperior #-490,8
    scene->addItem(barra);
    barra->setPos(10,8);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,-490,0); //HorizontalInferior
    scene->addItem(barra);
    barra->setPos(500,490);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,0,-500); // VerticalDerecha
    scene->addItem(barra);
    barra->setPos(490,500);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(241,110);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(241,302);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(241,400);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(241,14);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(136,252);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(349,252);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(349,396);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(403,348);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(82,348);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,108); // rectangulo #148,-192,
    scene->addItem(barra);
    barra->setPos(348,108);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,108); // rectangulo
    scene->addItem(barra);
    barra->setPos(135,108);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,17,60); // rectangulo
    scene->addItem(barra);
    barra->setPos(135,396);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,160,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(45,443);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,160,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(295,443);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,123,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(189,395);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,123,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(189,105);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,123,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(189,298);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(400,105);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(45,105);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(45,347);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(400,347);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(295,154);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,55,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(151,154);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,73,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(135,346);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,73,17); // rectanguloHorizontal
    scene->addItem(barra);
    barra->setPos(294,346);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,74,33); // rectanguloGordo
    scene->addItem(barra);
    barra->setPos(294,42);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,74,33); // rectanguloGordo
    scene->addItem(barra);
    barra->setPos(133,42);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,55,33); // rectanguloGordo
    scene->addItem(barra);
    barra->setPos(45,42);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,55,33); // rectanguloGordo
    scene->addItem(barra);
    barra->setPos(401,42);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,90,65); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(10,250);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,90,65); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(10,154);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,90,65); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(400,154);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,90,65); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(400,250);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,35,17); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(455,395);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,35,17); // rectanguloGordoLateral
    scene->addItem(barra);
    barra->setPos(10,395);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,127,0); // rectanguloMedio (barra inferior)
    scene->addItem(barra);
    barra->setPos(185,267);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,0,65); // rectanguloMedio (barra lateral izquierda)
    scene->addItem(barra);
    barra->setPos(185,200);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,0,65); // rectanguloMedio (barra lateral derecha)
    scene->addItem(barra);
    barra->setPos(312,200);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,45,0); // rectanguloMedio (barra lateral superior izquierda)
    scene->addItem(barra);
    barra->setPos(185,200);
    barra->setPen(Color2);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(0,0,45,0); // rectanguloMedio (barra lateral superior izquierda)
    scene->addItem(barra);
    barra->setPos(267,200);
    barra->setPen(Color2);
    barras.push_back(barra);


    inicioJuego();

    ui->graphicsView->setBackgroundBrush(QBrush((QImage(":/images/Mapa.jpg"))));

    /*
    timer = new QTimer();
    timer->stop();
    connect(timer, SIGNAL(timeout()),this,SLOT(hmov()));
    */

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(actualizarCronometro()));
    timer->start(1000);

    resultadoFinal();

}



MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
}



void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_F4) close();
    if(!jugador->collidingItems().isEmpty()){
        jugador->collidingItems().last()->x();
        jugador->collidingItems().last()->boundingRect().width();
        jugador->boundingRect().width();
        jugador->getX();
    }

    if(event->key()==Qt::Key_D){
        if(jugador->getX() < (scene->width())) {
            jugador->setX(jugador->getX()+vel);
            if(!jugador->collidingItems().isEmpty()){
                jugador->setX(jugador->collidingItems().last()->x() - jugador->collidingItems().last()->boundingRect().width()+1);
                auto colisiones = scene->collidingItems(jugador);
                for(auto c : colisiones){
                    Manzanas *manzana = dynamic_cast<Manzanas*>(c);
                    if(manzana){
                        qDebug() << "Colision con una manzana";
                        setPuntos(getPuntos(),1);
                        ui->puntosNum->display(getPuntos());
                        delete manzana;

                    }
                    else{
                        qDebug() << "Colision con el mapa";
                    }
                }
                jugador->posicion();
            }
        }
    }
    jugador->interaccionTeclado(event);
    if(event->key()==Qt::Key_W){
        if( !jugador->collidingItems().isEmpty()) {  //jugador->getY() < (scene->height()) &&
            jugador->setY(jugador->collidingItems().last()->y()+jugador->collidingItems().last()->boundingRect().height()+1);
            auto colisiones = scene->collidingItems(jugador);
            for(auto c : colisiones){
                Manzanas *manzana = dynamic_cast<Manzanas*>(c);
                if(manzana){
                    qDebug() << "Colision con una manzana";
                    setPuntos(getPuntos(),1);
                    ui->puntosNum->display(getPuntos());
                    delete manzana;

                }
                else{
                    qDebug() << "Colision con el mapa";
                }
            }
            jugador->posicion();
        }
        else{
            jugador->setY(jugador->getY()-vel);
        }

    }
    jugador->interaccionTeclado(event);

    if(event->key()==Qt::Key_S){
        if(jugador->getY() < (scene->height())){
            jugador->setY(jugador->getY()+vel);
            if(!jugador->collidingItems().isEmpty()){
                jugador->setY(jugador->collidingItems().last()->y() - jugador->collidingItems().last()->boundingRect().height()+1);
                auto colisiones = scene->collidingItems(jugador);
                for(auto c : colisiones){
                    Manzanas *manzana = dynamic_cast<Manzanas*>(c);
                    if(manzana){
                        qDebug() << "Colision con una manzana";
                        setPuntos(getPuntos(),1);
                        ui->puntosNum->display(getPuntos());
                        delete manzana;


                    }
                    else{
                        qDebug() << "Colision con el mapa";
                    }
                }
                jugador->posicion();
            }
        }

    }
    jugador->interaccionTeclado(event);

    if(event->key()==Qt::Key_A){
        if(jugador->getX() < (scene->width())) {
            jugador->setX(jugador->getX()-vel);
            if(!jugador->collidingItems().isEmpty()){
                jugador->setX(jugador->collidingItems().last()->x() + jugador->collidingItems().last()->boundingRect().width()+1);
                auto colisiones = scene->collidingItems(jugador);
                for(auto c : colisiones){
                    Manzanas *manzana = dynamic_cast<Manzanas*>(c);
                    if(manzana){
                        qDebug() << "Colision con una manzana";
                        setPuntos(getPuntos(),1);
                        ui->puntosNum->display(getPuntos());
                        delete manzana;

                    }
                    else{
                        qDebug() << "Colision con el mapa";
                    }
                }
                jugador->posicion();
            }
        }
    }
    jugador->interaccionTeclado(event);
    jugador->posicion();
}


void MainWindow::hmov(){
    if (jugador->getX() > (scene->width()-36)) vel = -1*vel;
    else if (jugador->getX() < 0) vel = -1*vel;
    jugador->posicion(jugador->getX()+vel, jugador->getY());
}



void MainWindow::inicioJuego()
{
    actualizarCronometro();
    time.setHMS(0,1,0);

    time.setHMS(0,10,20);
    ui->temporizador->setText(time.toString("m:ss"));
    timer->start(1000);


    jugador = new soldado();
    jugador->posicion(240,220);
    scene->addItem(jugador);

    comida = new Manzanas;
    comida->posicionManzana(5,10);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(100,10);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(200,10);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(300,10);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(400,10);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(465,10);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(5,80);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);
    /*
    comida = new Manzanas;
    comida->posicionManzana(100,80);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(200,80);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(300,80);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(400,80);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(465,80);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(5,130);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(100,130);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(200,130);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(300,130);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(400,130);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(465,130);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(300,130);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(5,225);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(100,225);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(320,225);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(400,225);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(465,225);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(5,325);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(100,325);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(200,325);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(300,325);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(400,325);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(465,325);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(5,370);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(100,370);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(200,370);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(300,370);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(425,370);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(5,420);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(100,420);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(200,420);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(300,420);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(400,420);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(465,420);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(5,465);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(100,465);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(200,465);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(300,465);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(400,465);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);

    comida = new Manzanas;
    comida->posicionManzana(465,465);
    scene->addItem(comida);
    grupoManzanas.push_back(comida);
    */

    QTimer *timerInicio = new QTimer(this);
    connect(timerInicio, SIGNAL(timeout()), this, SLOT());

    ui->puntosNum->display(getPuntos());
    ui->puntosLit->setText("Puntos: ");

    resultadoFinal();

}



void MainWindow::actualizarCronometro()
{
    time = time.addSecs(-1);
    ui->temporizador->setText(time.toString("m:ss"));
    if(time.toString() == "00:00:00"){
        timer->stop();
        msgBox.setWindowTitle("Juego termiando");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        msgBox.setText("El tiempo se ha terminado, ¿volver a jugar?");
        if(QMessageBox::No == msgBox.exec()){
            QCoreApplication::quit();
        }
        else{
            delete jugador;
            delete comida;
            setPuntos(0);
            inicioJuego();
        }
    }
}

void MainWindow::resultadoFinal()
{
    if(grupoManzanas.size() <= 0){
        msgBox.setWindowTitle("Juego termiando");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        msgBox.setText("Enhorabuena! ha ganado, ¿volver a jugar?");
        if(QMessageBox::No == msgBox.exec()){
            QCoreApplication::quit();
        }
        else{
            delete jugador;
            delete comida;
            setPuntos(0);
            inicioJuego();
        }
    }

}

int MainWindow::getPuntos()
{
    return puntos;
}

int MainWindow::getPuntos(int n)
{
    puntos = puntos + n;
    return puntos;
}


void MainWindow::setPuntos(int newPuntos)
{
    puntos = newPuntos;
}

void MainWindow::setPuntos(int n, int suma)
{
    n = n + suma;
    puntos = n;
}




void MainWindow::on_pushButton_clicked()
{


    if(timer->isActive()) timer->stop();
    else timer->start(50);


    /*
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(activationTimer(9)));
    timer->start(500);
    */
}



