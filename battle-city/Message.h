#pragma once
#include <SFML/Graphics.hpp>

class Message
{
public:
  explicit Message(const float &x, const float &y, const sf::String &str);

  void print(sf::RenderWindow &window) { window.draw(mStr); }

private:
  float mX, mY;

  sf::Font mFont;
  sf::Text mStr;
};
