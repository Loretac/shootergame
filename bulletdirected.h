#ifndef BULLETDIRECTED_H
#define BULLETDIRECTED_H

#include "enemybullet.h"

class BulletDirected : public EnemyBullet
{
    Q_OBJECT
public:
    BulletDirected();

private slots:
    virtual void move();
};

#endif // BULLETDIRECTED_H
