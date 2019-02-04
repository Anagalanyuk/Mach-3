#pragma once

#include"PlayingField.h"

class Show
{
public:
	void ShowGame(PlayingField* field);
private:
	const char cell = 'O';
	int x = 1;
	int y = 1;
	int scoreX = 17;
	int scoreY = 1;
	int levelX = 17;
	int levelY = 3;
};