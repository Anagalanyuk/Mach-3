#include"Move.h"

bool Move::IsMove(PlayingField* field, Cursor* cursor)
{
	isMove = false;
	int colorCount = 0;
	int offset = 1;
	int color = field->GetColor(cursor->GetRows(), cursor->GetColumns());
	while (color == field->GetColor(cursor->GetRows(), cursor->GetColumns() + offset))
	{
		colorCount += 1;
		offset++;
	}
	offset = 1;
	while (color == field->GetColor(cursor->GetRows(), cursor->GetColumns() - offset))
	{
		colorCount += 1;
		offset++;
	}
	if (colorCount < 2)
	{
		colorCount = 0;
		offset = 1;
		while (color == field->GetColor(cursor->GetRows() + offset, cursor->GetColumns()))
		{
			colorCount += 1;
			offset++;
		}
		offset = 1;
		while (color == field->GetColor(cursor->GetRows() - offset, cursor->GetColumns()))
		{
			colorCount += 1;
			offset++;
		}
	}
	if (colorCount >= 2)
	{
		isMove = true;
		field->TakeCell(cursor->GetRows(), cursor->GetColumns());
	}
	return isMove;
}