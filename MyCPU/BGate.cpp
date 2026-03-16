#include "BGate.h"


char BGate::Gate_NOT(char a)
{
	return a == '0' ? '1' : '0';
}

char BGate::Gate_OR(char a, char b)
{
	return a == '1' || b == '1' ? '1' : '0';
	
}

char BGate::Gate_AND(char a, char b)
{
	return a == '1' && b == '1' ? '1' : '0';
}

char BGate::Gate_XOR(char a, char b)
{
	return a != b ? '1' : '0';
}

char BGate::Gate_NOR(char a, char b)
{
	return Gate_NOT(Gate_OR(a, b));
}

char BGate::Gate_NAND(char a, char b)
{
	return Gate_NOT(Gate_AND(a, b));
}

char BGate::Gate_XNOR(char a, char b)
{
	return Gate_NOT(Gate_XOR(a, b));
}
