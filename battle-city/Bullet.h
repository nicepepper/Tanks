#pragma once
#include <SFML/Graphics.hpp>
class Map;

class Bullet
{
public:
  bool present;
  float timeBeforeShot;
  sf::Sprite mSprite;

  explicit Bullet(const float &x, const float &y);

  void shoot() { present = true; }
  void move(const sf::Int64 &time);
  void update(Map &map, const sf::Int64 &time, float &x, const float &y, const int &dir);
  void mapInteraction(Map &map);

private:
  float mX, mY, mDx, mDy;
  int mDir;

  sf::Texture mTexture;
};
