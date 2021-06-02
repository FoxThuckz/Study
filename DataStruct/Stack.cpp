#include <iostream>
#include "Stack.h"

using namespace Struct;


Stack::Stack(int Size)
{
	Top = -1;
	this->Size = Size;
	nElements = (float*) malloc(Size * sizeof(float));
}

bool Stack::IsEmpty()
{
	if (Top == -1) return true;
	else return false;
}

bool Stack::IsFull()
{
	if (Top >= Size -1) return true;
	else return false;
}

void Stack::PopStack()
{
	if (!IsEmpty())
	{
		Top--;
	}
}

void Stack::PushStack(float value)
{
	if (!IsFull())
	{
		Top++;
		nElements [Top] = value;
	}
}

int Stack::ReturnTop()
{
	return nElements[Top];
}
