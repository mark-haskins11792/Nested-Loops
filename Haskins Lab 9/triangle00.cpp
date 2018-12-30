#include "stdafx.h"
#include "triangle00.h"
#include <iostream>

Triangle::Triangle(int size)
{
	height = size;
}
Triangle::~Triangle()
{
}
void Triangle::draw()
{

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}

}