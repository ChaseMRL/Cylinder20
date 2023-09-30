#include "Cylinder20.h"


Cylinder::Cylinder()
{
	radius = 0;
	height = 0;
}
Cylinder::~Cylinder()
{
}

//Simplifying the radius and height in the header//
void Cylinder::setRadius(float radius_)
{
	radius = radius_;
}

void Cylinder::setHeight(float height_)
{
	height = height_;
}

//Saying what should return to main when main calls a getRadius or getHeight// 
float Cylinder::getRadius()
{
	return radius;
}

float Cylinder::getHeight()
{
	return height;
}
//Formulas for the subprograms calculating volume and surface area//
float Cylinder::calculateVolume()
{
	return float(3.14 * radius * radius * height);
}

float Cylinder::calculateSurfaceArea()
{
	return float(2 * 3.14 * radius * height + 2 * 3.14 * radius * radius);
}