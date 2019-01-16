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
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), false);
	cursor->MinusRows();
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
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