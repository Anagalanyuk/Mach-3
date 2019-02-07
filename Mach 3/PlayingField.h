#pragma once

#include"Cell.h"

class PlayingField
{
public:
	PlayingField();
	void ReStart();
	int GetRows();
	int GetColumns();
	int GetScore();
	int GetLevel();
	void AddScore(int addScore);
	void AddLevel();
	void SetColor(int rows, int columns, int color);
	int GetColor(int rows, int columns);
	void SetCorsor(int rows, int columns, bool isCursor);
	bool GetIsCursor(int rows, int columns);
	void TakeCell(int rows, int columns);
	bool IsTake(int rows, int columns);
private:
	int mScore = 0;
	int level = 1;
	bool isCursor = false;
	int const rows = 8;
	const int columns = 8;
	Cell field[8][8];
};