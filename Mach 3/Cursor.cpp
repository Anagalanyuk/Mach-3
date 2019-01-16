#include"Cursor.h"

int Cursor::GetRows() { return rows; }

void Cursor::SetRows(int rows) { this->rows = rows; }

int Cursor::GetColumns() { return columns; }

void Cursor::SetColumns(int columns) { this->columns = columns; }

void Cursor::AddRows()
{
	if (rows < maxRows)
	{
		rows += 1;
	}
}

void Cursor::AddColumns()
{
	if (columns < maxColumns)
	{
		columns += 1;
	}
}

void Cursor::MinusRows()
{
	if (rows > 0)
	{
		rows -= 1;
	}
}

void Cursor::MinusColumns()
{
	if (columns > 0)
	{
		columns -= 1;
	}
}