#pragma once

#include"PlayingField.h"

#include"Cursor.h"

class ClearRepearColor
{
public:
	ClearRepearColor(PlayingField* field, Cursor* cursor);
	void ClearRepeat();
private:
	PlayingField* mField;
	Cursor* mCursor;
};