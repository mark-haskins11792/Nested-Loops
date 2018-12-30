#include "stdafx.h"
#include "square00.h"
#include <iostream>

Square::Square(int size)
{
	length = size;
}
Square::~Square()
{
}
void Square::draw()
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
}

