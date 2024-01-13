//
// Created by livefish on 1/9/24.
//

#ifndef SFML_TANK_BATTLEROYALE_GAME_H
#define SFML_TANK_BATTLEROYALE_GAME_H

#include <ostream>
#include "game_def.h"

#include "timer.h"

namespace game {
  class Game {
  private:
    window * win;
    sf::Sprite bg;
    sf::Font fpsFont;
    sf::Text fps;
  
  public:
    game::Timer timer;
    sf::View mainView;
    std::vector<GameObject *> gameObjects;
    resourceHandler resHandler;
    
    Game() = delete;
    
    explicit Game( window * NewWin );
    
    virtual ~Game();
    
    template<typename T>
      T & getRes( const std::string &FileName );
    
    void setBg( const std::string & BgFileName );
    
    void resize( float newW, float newH );
    
    bool isKeyPressed( sf::Keyboard::Scancode key );
    
    Game & operator<<( GameObject * toAdd );
    
    void tick();
    
    void draw();
  };
}

#endif //SFML_TANK_BATTLEROYALE_GAME_H
