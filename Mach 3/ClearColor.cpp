#include<Windows.h>

#include"ClearRepeatColor.h"

#include"PlayingField.h"

#include"Cursor.h"

#include"Show.h"

#include"AddCell.h"

ClearRepearColor::ClearRepearColor(PlayingField* field, Cursor* cursor)
{
	mField = field;
	mCursor = cursor;
}

void ClearRepearColor::ClearRepeat()
{
	int offsetX = 0;
	int offsetY = 0;
	int countColor = 0;
	bool isAddY = false;
	Show game;
	AddCell newColor(mField);
	for (int i = 0; i <= mCursor->GetMaxRows(); ++i)
	{
		for (int j = 0; j <= mCursor->GetMaxColumns(); ++j)
		{

			countColor = 0;
			offsetX = 1;
			offsetY = 1;
			int color = mField->GetColor(j, i);
			while (color == mField->GetColor(j + offsetX, i) && j + offsetX <= 7)
			{
				countColor += 1;
				offsetX += 1;
				if (countColor >= 2 && mField->GetColor(j + 1, i) != 0)
				{
					countColor = 0;
					isAddY = true;
					offsetX = 0;
					while (color == mField->GetColor(j + offsetX, i) && j + offsetX <= 7)
					{
						if (mField->GetColor(j + offsetX, i) != 0)
						{
							mField->AddScore(1);
						}
						mField->SetColor(j + offsetX, i, 0);
						offsetX += 1;
						game.ShowGame(mField);
						Sleep(800);
					}
					newColor.DownCellField();
					newColor.AddCellField();
				}
			}
			countColor = 0;
			while (color == mField->GetColor(j, i + offsetY) && i + offsetY <= 7)
			{
				countColor += 1;
				offsetY += 1;
				if (countColor >= 2 && mField->GetColor(j, i + 1) != 0)
				{
					offsetY = isAddY ? 1 : 0;

					while (color == mField->GetColor(j, i + offsetY) && i + offsetY <= 7)
					{
						if (mField->GetColor(j, i + offsetY) != 0)
						{
							mField->AddScore(1);
						}
						mField->SetColor(j, i + offsetY, 0);
						offsetY += 1;
						game.ShowGame(mField);
						Sleep(800);
					}
					newColor.DownCellField();
					newColor.AddCellField();
				}
			}
			countColor = 0;
			isAddY = false;
		}
	}
}