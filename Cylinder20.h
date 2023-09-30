#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
public:
	//Constructor and desctructor//
	Cylinder();
	~Cylinder();

	//Get and set methods//
	void setRadius(float radius_);
	float getRadius();

	void setHeight(float height_);
	float getHeight();

	//Establishing subprograms for calculating surface area and volume//
	float calculateSurfaceArea();
	
	float calculateVolume();


private:
	//Data variables for radius and height//
	float radius;
	float height;
};

#endif // !CYLINDER_H