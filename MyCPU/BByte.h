#pragma once
class BByte
{
public:
	BByte(vector<uint8>& InMem, uint32 InAddress);

public:
	char& operator [](int Pos) { return Bits[7-Pos]; }

public:
	void Confirm();

public:
	string GetBits() { return Bits; }
	void SetBits(const string& Set) { Bits = Set; }

private:
	vector<uint8>& Mem;
	uint32 Address;
	string Bits;
};

