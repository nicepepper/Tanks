#pragma once
#include "Tank.h"

class Enemy : public Tank
{
public:
  Enemy(const float &x, const float &y);
  Enemy(const Enemy &copy) : Enemy(copy.mX, copy.mY) {}

  void move(const sf::Int64 &time);
  void shoot(const float &time);
  void update(const sf::Int64 &time, Map &map, const bool &collision);

private:
  float timeBeforeMoving;
  float timeBeforeShot;
};
