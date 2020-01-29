#pragma once
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Player.h"
#include "Enemy.h"
#include "Base.h"
#include "Message.h"

class Application : private sf::NonCopyable
{
public:
  Application();

  void processEvents();
  void update(const sf::Int64 &time);
  void render();

private:
  bool gameOver;
  bool gameStarted;

  int frags;

  sf::RenderWindow mWindow;
  Base mBase;
  Map map;
  Player mPlayer;
  Enemy *packOfEnemies;

  Message msgStart;
  Message msgOver;
  Message msgLost;
  Message msgWon;
};
