#pragma once

#include"Cell.h"

class PlayingField
{
public:
	PlayingField();
	void ReloadField();
	int GetRows();
	int GetColumns();
	int GetColor(int rows, int columns);
private:
	int const rows = 8;
	const int columns = 8;
	Cell field[8][8];
};