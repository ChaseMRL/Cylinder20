#include "Cylinder20.h"
#include <iostream>
#include<iomanip>

int main()
{
	Cylinder c; 

	c.setRadius(7.0);

	c.setHeight(5.0);

	//Calling the values assigned to radius and height//
	std::cout << "Radius: " << c.getRadius() << std::endl; 
	std::cout << "Height:" << c.getHeight() << std::endl; 

	//Calling the formulas made to calculate surface area and volume//
	std::cout << "Surface area:" << c.calculateSurfaceArea() <<std::endl;
	std::cout << "Volume:" << c.calculateVolume()<< std::endl;
	return 0;
}