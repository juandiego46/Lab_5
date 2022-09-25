    #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QTimer>
#include <QTime>
#include "soldado.h"
#include "manzanas.h"
#include <QMessageBox>
#include <vector>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *event);

    int tiempo = 30;


    int getPuntos();
    int getPuntos(int n);
    void setPuntos(int newPuntos);
    void setPuntos(int n, int suma);

    vector<Manzanas*> grupoManzanas;

private slots:

    void on_pushButton_clicked();

    void hmov();

    void inicioJuego();
    void actualizarCronometro();
    void resultadoFinal();



private:
    int vel;
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *barra;
    soldado *jugador;
    QTimer *timer = new QTimer();
    Manzanas *comida;
    QTime time;
    QMessageBox msgBox;
    int puntos = 0;


};


#endif // MAINWINDOW_H
