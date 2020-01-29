#pragma once
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Map : private sf::NonCopyable
{
public:
  Map();

  void breakWall(const int &i, const int &j);
  const char getTile(const int &i, const int &j) { return TileMap[i][j]; }
  void draw(sf::RenderWindow &window);

private:
  static const int HEIGHT_MAP = 28;
  static const int WIDTH_MAP = 30;

  sf::String *TileMap;
  sf::Texture mTexture;
  sf::Sprite mSprite;
};
