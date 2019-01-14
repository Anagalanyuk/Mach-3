#pragma once

#include"PlayingField.h"

class Show
{
public:
	void ShowGame(PlayingField& field);
private:
	const char cell = 'O';
};