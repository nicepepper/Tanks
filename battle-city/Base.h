#pragma once
#include <SFML/Graphics.hpp>

class Base : private sf::NonCopyable
{
public:
  sf::Sprite mSprite;
  bool life;

  Base();

private:
  sf::Texture mTexture;
};
