#include"Cell.h"

void Cell::SetColor(int color)
{
	this->color = color;
}

int Cell::GetColor()
{
	return color;
}

void Cell::SetBackground(bool background)
{
	this->background = background;
}

int Cell::GetBackground()
{
	return background;
}

void Cell::IsTake(bool isTake)
{
	this->isTake = isTake;
}

bool  Cell::GetTake()
{
	return isTake;
}