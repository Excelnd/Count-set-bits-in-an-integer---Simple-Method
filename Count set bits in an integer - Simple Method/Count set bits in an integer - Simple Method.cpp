// Count set bits in an integer - Simple Method.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}

int main()
{
	int i = 9;
	cout << countSetBits(i);
    return 0;
}

