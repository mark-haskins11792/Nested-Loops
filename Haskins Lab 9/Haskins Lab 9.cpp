//Program will draw a 5 x 5 square, a 8 x 8 square, a 1 x 4 triangle, and a 1 x 8 triangle of asterisks.


#include "stdafx.h"
#include "square00.h"
#include "triangle00.h"
#include <iostream>


int main()
{
	Square square1(5);
	Square square2(8);
	Triangle triangle1(5);
	Triangle triangle2(8);
	square1.draw();
	std::cout << std::endl << std::endl;
	square2.draw();
	std::cout << ::std::endl << std::endl;
	triangle1.draw();
	std::cout << ::std::endl << std::endl;
	triangle2.draw();
	std::cout << ::std::endl << std::endl;
	return 0;
}

