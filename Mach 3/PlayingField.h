#pragma once

#include"Cell.h"

class PlayingField
{
public:
	PlayingField();
	void ReloadField();
private:
	int const rows = 8;
	const int columns = 8;
	Cell field[8][8];
};