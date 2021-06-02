#pragma once

namespace Struct
{
	class Stack
	{
	public:
		Stack(int Size);
		int Top;
		int Size;
		float* nElements;
		bool IsEmpty();
		bool IsFull();
		void PopStack();
		void PushStack(float value);
		int ReturnTop();
	};
}