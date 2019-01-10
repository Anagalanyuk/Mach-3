#pragma once

class Cell
{
public:
	void SetColor(int colour);
	int GetColor();
	void SetBackground(int background);
	int GetBackground();
	void IsTake(bool isTake);
	bool GetTake();
private:
	int color = 0;
	int background = 0;
	bool isTake = false;
};