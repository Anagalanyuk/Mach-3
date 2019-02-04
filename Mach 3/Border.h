#pragma once

class Border
{
public:
	char GetBorder();
	int GetX();
	int GetY();
	void Show();
private:
	const char border = '#';
	const int x = 10;
	const int y = 8;
	int offestY = 1;
	int offsetX = 1;
	int levelX = 11;
	int levelY = 1;
	int scoreY = 3;
	int scoreX = 11;
};