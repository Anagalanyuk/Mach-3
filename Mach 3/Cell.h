#pragma once

class Cell
{
public:
	void SetColor(int colour);
	int GetColor();
	void SetBackground(bool background);
	int GetBackground();
	void SetIsTake(bool isTake);
	bool GetTake();
private:
	int color = 0;
	bool background = false;
	bool isTake = false;
};