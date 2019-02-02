#include"ControlKey.h"

#include"Cursor.h"

#include"PlayingField.h"

#include"Move.h"

ControlKey::ControlKey(PlayingField* field, Cursor* cursor)
{
	this->field = field;
	this->cursor = cursor;
}

void ControlKey::StepLeft()
{
	if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
		cursor->GetRows() > 0)
	{
		int color = field->GetColor(cursor->GetRows() - 1, cursor->GetColumns());
		field->SetColor(cursor->GetRows() - 1, cursor->GetColumns(),
			field->GetColor(cursor->GetRows(), cursor->GetColumns()));
		field->SetColor(cursor->GetRows(), cursor->GetColumns(), color);
		field->TakeCell(cursor->GetRows(), cursor->GetColumns());
		field->TakeCell(cursor->GetRows() - 1, cursor->GetColumns());
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
		cursor->MinusRows();
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
	}
	else
	{
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
		cursor->MinusRows();
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
	}
}

void ControlKey::StepRight()
{
	Move move;
	if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
		cursor->GetRows() < 7)
	{
		int color = field->GetColor(cursor->GetRows() + 1, cursor->GetColumns());
		field->SetColor(cursor->GetRows() + 1, cursor->GetColumns(),
			field->GetColor(cursor->GetRows(), cursor->GetColumns()));
		field->SetColor(cursor->GetRows(), cursor->GetColumns(), color);
		field->TakeCell(cursor->GetRows(), cursor->GetColumns());
		field->TakeCell(cursor->GetRows() + 1, cursor->GetColumns());
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
		cursor->AddRows();
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
	}
	else
	{
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
		cursor->AddRows();
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
	}
}

void ControlKey::StepUp()
{
	if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
		cursor->GetColumns() > 0)
	{
		int color = field->GetColor(cursor->GetRows(), cursor->GetColumns() - 1);
		field->SetColor(cursor->GetRows(), cursor->GetColumns() - 1,
			field->GetColor(cursor->GetRows(), cursor->GetColumns()));
		field->SetColor(cursor->GetRows(), cursor->GetColumns(), color);
		field->TakeCell(cursor->GetRows(), cursor->GetColumns());
		field->TakeCell(cursor->GetRows(), cursor->GetColumns() - 1);
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
		cursor->MinusColumns();
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
	}
	else
	{
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
		cursor->MinusColumns();
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
	}
}

void ControlKey::StepDown()
{
	if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
		cursor->GetColumns() < 7)
	{
		int color = field->GetColor(cursor->GetRows(), cursor->GetColumns() + 1);
		field->SetColor(cursor->GetRows(), cursor->GetColumns() + 1,
			field->GetColor(cursor->GetRows(), cursor->GetColumns()));
		field->SetColor(cursor->GetRows(), cursor->GetColumns(), color);
		field->TakeCell(cursor->GetRows(), cursor->GetColumns());
		field->TakeCell(cursor->GetRows(), cursor->GetColumns() + 1);
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
		cursor->AddColumns();
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
	}
	else
	{
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
		cursor->AddColumns();
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
	}
}

void ControlKey::Take()
{
	field->TakeCell(cursor->GetRows(), cursor->GetColumns());
}