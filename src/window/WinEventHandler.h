//
// Created by livefish on 1/9/24.
//

#ifndef SFML_TANK_BATTLEROYALE_WINEVENTHANDLER_H
#define SFML_TANK_BATTLEROYALE_WINEVENTHANDLER_H

#include "window.h"

class WinEventHandler {
private:
  window * win;

public:
  WinEventHandler() = delete;

  explicit WinEventHandler( window * newWindow ) : win(newWindow) {}

  void handleNewEvents() const;
};


#endif //SFML_TANK_BATTLEROYALE_WINEVENTHANDLER_H
