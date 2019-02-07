#pragma once

#include"PlayingField.h"

#include"Cursor.h"

class ClearColor
{
public:
	ClearColor(PlayingField* field, Cursor* cursor);
	void ClearRepeat();
private:
	PlayingField* mField;
	Cursor* mCursor;
};