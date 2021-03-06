#ifndef BULLETMINESMALL_H
#define BULLETMINESMALL_H

#include "enemybullet.h"

/*********************************************************************
 ** Small mine (bomb that explodes on contact) shot by Level 4 foe
 *********************************************************************/

class BulletMineSmall : public EnemyBullet
{
    Q_OBJECT
public:
    BulletMineSmall();

private slots:
    virtual void move();
};

#endif // BULLETMINESMALL_H
