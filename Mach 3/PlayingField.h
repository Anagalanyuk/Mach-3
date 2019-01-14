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
	void SetCorsor(int rows, int columns, bool isCursor);
	bool GetIsCursor(int rows, int columns);
private:
	bool isCursor = false;
	int const rows = 8;
	const int columns = 8;
	Cell field[8][8];
};