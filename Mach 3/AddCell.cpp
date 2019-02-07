#include<Windows.h>

#include<ctime>

#include"AddCell.h"

#include"PlayingField.h"

#include"Show.h"

AddCell::AddCell(PlayingField* field)
{
	mField = field;
}

void AddCell::DownCellField()
{
	Show game;
	bool repeat = false;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			while (mField->GetColor(j, i) != 0 && mField->GetColor(j , i + 1) == 0 && i + 1 < 8)
			{
				int color = mField->GetColor(j, i);
				mField->SetColor(j, i + 1, color);
				mField->SetColor(j, i, 0);
				game.ShowGame(mField);
				Sleep(300);
				repeat = true;
			}
			if (repeat)
			{
				i = 0;
				j = 0;
				repeat = false;
			}
		}
	}
}

void AddCell::AddCellField()
{
	srand(time(nullptr));
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			if (mField->GetColor(j, i) == 0)
			{
				mField->SetColor(j, i, rand() % 6 + 1);
				DownCellField();
				i = 0;
				j = 0;
			}
		}
	}
}