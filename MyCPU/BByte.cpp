#include "pch.h"
#include "BByte.h"

BByte::BByte(vector<uint8>& InMem, uint32 InAddress)
	: Mem(InMem), Address(InAddress)
{
	if (InMem.size() <= InAddress) return;	// Will Be Replaced by BP

	
	uint8 Val = Mem[Address];
	Bits = string(8, '0');
	for (int i = 7; i >= 0; i--)
	{
		uint8 Bit = Val % 2;
		Val = Val / 2;

		Bits[i] = Bit + '0';
	}
}

void BByte::Confirm()
{
	uint8 Sum = 0;
	uint8 Mul = 1;
	for (int i = 7; i >= 0; i--)
	{
		if (Bits[i] == '1')
		{
			Sum += Mul;
		}

		Mul *= 2;
	}

	Mem[Address] = Sum;
}
