#pragma once
#include "raylib.h"
#include "Objects/Mouse.h"
#include "Window/PlayGame.h"

struct MenuButton
{
	Vector2 pos;

	float width;
	float height;

	int size;

	bool isActive;

	Texture texture;

	Color color;
};

enum class Menu
{
	MainMenu,
	Play,
	Controlls,
	Rules,
	Credits,
	Quit
};

void InitMenu();
void MenuCollisions(Mouse& mouse, int& optionSelect);
void MenuInputs(Mouse& mouse, int& optionSelect, bool& playGame);
void DrawMenu(Font gameFont, Texture menuBackground);
void DrawControlls(Font gameFont, Texture subMenusBackground);
void DrawRules(Font gameFont, Texture subMenusBackground);
void DrawCredits(Font gameFont, Texture subMenusBackground);