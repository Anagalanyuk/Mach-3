#pragma once

class Cursor
{
public:
	int GetRows();
	void SetRows(int rows);
	int GetColumns();
	int GetMaxRows();
	int GetMincolumns();
	int GetMinRows();
	int GetMaxColumns();
	void SetColumns(int columns);
	void AddRows();
	void AddColumns();
	void MinusRows();
	void MinusColumns();
private:
	const int maxRows = 7;
	const int maxColumns = 7;
	int rows = 0;
	int columns = 0;
};
