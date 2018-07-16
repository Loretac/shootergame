#ifndef BOSS1_H
#define BOSS1_H

#include "enemy.h"

/*********************************************************************
 ** Level 1 boss
 *********************************************************************/

class Boss1 : public enemy
{
    Q_OBJECT
public:
    Boss1();

private slots:
    virtual void move();
//    void shoot(); // fires a single bullet

signals:
    void bossDeath(); // received by levels::spawnBoss1() to begin Level 2

private:
    void startShooting(); // member function to continuously shoot() on a timer
};

#endif // BOSS1_H
