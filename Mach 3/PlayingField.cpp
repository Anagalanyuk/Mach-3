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
			field[i][j].SetColor(rand() % 6 + 1);
		}
	}
}

int PlayingField::GetRows() { return rows; }

int PlayingField::GetColumns() { return columns; }

int PlayingField::GetScore() { return score; }

int PlayingField::GetLevel() { return level; }

void PlayingField::AddScore(int addScore) { score += addScore; }

void PlayingField::AddLevel() { level += 1; }

void PlayingField::SetColor(int rows, int columns, int color)
{
	field[rows][columns].SetColor(color);
}

int PlayingField::GetColor(int rows, int columns)
{
	return field[rows][columns].GetColor();
}

void PlayingField::SetCorsor(int rows, int columns, bool isCursor)
{
	field[rows][columns].SetBackground(isCursor);
}

bool PlayingField::GetIsCursor(int rows, int columns)
{
	return field[rows][columns].GetBackground();
}

void PlayingField::ReStart()
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			field[i][j].SetColor(rand() % 6 + 1);
		}
	}
}

void PlayingField::TakeCell(int rows, int columns)
{
	if (field[rows][columns].GetTake())
	{
		field[rows][columns].SetIsTake(false);
	}
	else
	{
		field[rows][columns].SetIsTake(true);
	}
}

bool PlayingField::IsTake(int rows, int columns)
{
	return field[rows][columns].GetTake();
}