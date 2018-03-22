#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "enemy.h"










// bullet constructor
Bullet::Bullet()
{
    // draw the rect
    setRect(0,0,10,50);

    // connect to slot
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this, SLOT(move()));

    // every 50 ms, timeout signal emitted and bullet moves
    timer->start(50);

}

void Bullet::move()
{
    // before moving bullet, check if colliding with enemy
    // if bullet collides with enemy, destroy both
    QList<QGraphicsItem *> colliding_items = collidingItems();
    // collidingItems() member function returns list of pointers to all the QGraphics items
    // that the bullet is colliding with

    //traverse to see if bullet is colliding with enemy
    for(int i = 0, n = colliding_items.size(); i < n; ++i){
        if(typeid(*(colliding_items[i])) == typeid(Enemy)){
            // remove them both
            scene()->removeItem((colliding_items[i]));
            scene()->removeItem(this);

            //then, delete them both
            delete colliding_items[i];
            delete this;

            // exit
            return;
        }
    }


    // move the bullet up
    setPos(x(),y()-10);

    // delete the bullets
    if(pos().y() + rect().height() < 0){ // off the screen
        scene()->removeItem(this);
        delete this;
    }
}
