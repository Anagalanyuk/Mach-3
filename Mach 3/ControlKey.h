#pragma once

#include"Cursor.h"

#include"PlayingField.h"

class ControlKey
{
public:
	ControlKey(PlayingField* field, Cursor* cursor);
	void StepLeft();
	void StepRight();
	void StepUp();
	void StepDown();
	void Take();
private:
	PlayingField* field;
	Cursor* cursor;
};