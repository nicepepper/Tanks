#pragma once
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "Bullet.h"
#include <utility>
class Map;

class Tank : private sf::NonCopyable
{
public:
  explicit Tank(const float &x, const float &y, const float &width, const float &height, const sf::String &file);

  bool life;

  Bullet bullet;
  sf::Sprite mSprite;

  void animate(const sf::Int64 &time);

  void collapse();
  virtual void move(const sf::Int64 &time) {}
  void mapInteraction(Map &map);
  void tankInteraction();

protected:
  float mX, mY, mWidth, mHeight, mDx, mDy, mSpeed;
  int mDir;
  float mCurrentFrame;
  bool mCollision;

  sf::String mFile;
  sf::Texture mTexture;
};
