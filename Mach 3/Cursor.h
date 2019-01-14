#pragma once

class Cursor
{
public:
	int GetRows();
	void SetRows(int rows);
	int GetColumns();
	void SetColumns(int columns);
private:
	int rows = 0;
	int columns = 0;
};
