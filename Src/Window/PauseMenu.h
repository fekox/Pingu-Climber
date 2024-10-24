#pragma once

#include "Window/PlayGame.h"

#include "Objects/Mouse.h"

void InitPauseMenu(SubMenu& pauseMenu, Button& pauseButtonOff, Button& pauseButtonOn, Button& resumeButton, Button& returnMenuButton, Button& quitGameButton, int screenWidth, int screenHeight);

void PauseMenusInputs(bool& gameOn, bool& playGame, int& optionSelect, bool& pause, SubMenu& restartMenu, SubMenu& pauseMenu, Button& pauseButtonOff, Button& pauseButtonOn, 
					  Music& music, Mouse& mouse, int screenWidth, int screenHeight);

void PauseMenuCollisions(SubMenu& pauseMenu, Mouse& mouse, Button& resumeButton, Button& returnMenuButton, Button& quitGameButton, int screenWidth, int screenHeight);

void DrawPauseMenu(SubMenu& pauseMenu, Button& resumeButton, Button& returnMenuButton, Button& quitGameButton, Font gameFont, int screenWidth, int screenHeight);