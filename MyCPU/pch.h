#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;


typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef long int32;
typedef unsigned long uint32;
typedef long long int64;
typedef unsigned long long uint64;


#include "BByte.h"
#include "BGate.h"


#define NOT(a) Gate::Gate_NOT(a)

#define OR(a, b) Gate::Gate_OR(a, b)

#define AND(a, b) Gate::Gate_AND(a, b)

#define XOR(a, b) Gate::Gate_XOR(a, b)

#define NOR(a, b) Gate::Gate_NOR(a, b)

#define NAND(a, b) Gate::Gate_NAND(a, b)

#define XNOR(a, b) Gate::Gate_XNOR(a, b)