#pragma once
class BGate
{
public:
	static char Gate_NOT(char a);
	static char Gate_OR(char a, char b);
	static char Gate_AND(char a, char b);
	static char Gate_XOR(char a, char b);
	static char Gate_NOR(char a, char b);
	static char Gate_NAND(char a, char b);
	static char Gate_XNOR(char a, char b);
};

