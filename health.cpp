#include "health.h"
#include "game.h"
#include <QFont>


extern Game * game;

Health::Health(QGraphicsItem *parent)
{
    // initialize health to 3
    health = 3;

    // draw the text
    //convert to string...
    setPlainText(QString("Health: ") + QString::number(health));

    setDefaultTextColor(Qt::red); // make text blue
    setFont(QFont("times", 16)); // font family and size

}


void Health::decrease()
{
    // decrease the health
    health--;

    // update the text
    setPlainText(QString("Health: ") + QString::number(health));


    if ( health == 0 )
        game->gameOver();


}



int Health::getHealth()
{
    return health;
}
