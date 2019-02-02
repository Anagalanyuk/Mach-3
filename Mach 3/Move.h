#pragma once

#include"PlayingField.h"

#include"Cursor.h"

class Move
{
public:
	bool IsMove(PlayingField* field, Cursor* cursor);
private:
	bool isMove;
};