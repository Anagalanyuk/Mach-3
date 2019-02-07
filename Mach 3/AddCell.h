#pragma once

#include"PlayingField.h"

class AddCell
{
public:
	AddCell(PlayingField* field);
	void DownCellField();
	void AddCellField();
private:
	PlayingField* mField;
	int rows = 8;
	int columns = 8;
};