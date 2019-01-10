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
};