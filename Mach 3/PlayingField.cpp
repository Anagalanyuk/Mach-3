#include<iostream>

#include"PlayingField.h"

#include<ctime>

PlayingField::PlayingField()
{

	srand(time(nullptr));
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			field[i][j].SetColor(rand() % 6);
		}
	}
}

int PlayingField::GetRows()
{
	return rows;
}

int PlayingField::GetColumns()
{
	return columns;
}

int PlayingField::GetColor(int rows, int columns)
{
	return field[rows][columns].GetColor();
}

void PlayingField::ReloadField()
{

}