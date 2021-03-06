#ifndef BOSS4LEFT_H
#define BOSS4LEFT_H

#include "enemy.h"
#include "laser.h"

/*********************************************************************
 ** Level 4 boss (left side)
 *********************************************************************/

class Boss4Left : public enemy
{
    Q_OBJECT
public:
    Boss4Left();

private slots:
    virtual void move();
    void shoot();

    void positionLaser();
    void laserOff();
    void laserOn();

signals:
    void leftBossDeath();

private:
    bool moveUp = false;
    Laser *laser;
    double targetX;
    double targetY;
    double speed = 3;
    bool spawning = true;
};

#endif // BOSS4LEFT_H
