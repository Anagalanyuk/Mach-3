#include"Cursor.h"

int Cursor::GetRows()
{
	return rows;
}

void Cursor::SetRows(int rows)
{
	this->rows = rows;
}

int Cursor::GetColumns()
{
	return columns;
}

void Cursor::SetColumns(int columns)
{
	this->columns = columns;
}