#include "myrect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "bullet.h"
#include "enemy.h"


void MyRect::keyPressEvent(QKeyEvent *event){
    // check what key was pressed
    if(event->key() == Qt::Key_Left){
        if(pos().x() > 0){
            setPos(x()-40,y());
        }
    }
    else if(event->key() == Qt::Key_Right){
        if(pos().x() +100 < 800){
            setPos(x()+40,y());
        }
    }
    else if(event->key() == Qt::Key_Up){
        if(pos().y() > 0){
            setPos(x(),y()-40);
        }

    }
    else if(event->key() == Qt::Key_Down){
        if(pos().y() +100 < 600){
            setPos(x(),y()+40);
        }

    }
    else if(event->key() == Qt::Key_Space){
        // create a bullet
        Bullet *bullet = new Bullet();
        bullet->setPos(x(),y());

        // add the bullet to the scene
        scene()->addItem(bullet);
    }
}

void MyRect::spawn()
{
    // create an enemy
    Enemy *enemy = new Enemy();

    // add to the scene
    scene()->addItem(enemy);
}
