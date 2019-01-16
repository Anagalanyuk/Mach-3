#include"ControlKey.h"

#include"Cursor.h"

#include"PlayingField.h"

ControlKey::ControlKey(PlayingField* field, Cursor* cursor)
{
	this->field = field;
	this->cursor = cursor;
}

void ControlKey::StepLeft()
{
	if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) && cursor->GetRows() > 0)
	{
		int color = field->GetColor(cursor->GetRows() - 1, cursor->GetColumns());
		field->SetColor(cursor->GetRows() - 1, cursor->GetColumns(),
			field->GetColor(cursor->GetRows(), cursor->GetColumns()));
		field->SetColor(cursor->GetRows(), cursor->GetColumns(), color);
		field->TakeCell(cursor->GetRows(), cursor->GetColumns());
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
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
	cursor->AddRows();
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
}

void ControlKey::StepUp()
{
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
	cursor->MinusColumns();
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
}

void ControlKey::StepDown()
{
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
	cursor->AddColumns();
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
}

void ControlKey::Take()
{
	field->TakeCell(cursor->GetRows(), cursor->GetColumns());
}