#pragma once
#include <iostream>
#include <utility>
class Point
{
	double x;
	double y;
public:
	friend std::ostream& operator<<(std::ostream& os, const Point& cp);
	Point& operator=(const Point& cp);
	bool operator==(const Point& cp);
	bool operator!=(const Point& cp);
	double getX();
	double getY();
	void setX(double newX);
	void setY(double newY);
	Point();
	Point(const Point& cp);
	Point(double newX, double newY);
	~Point() {};
	void moveTo(double newX, double newY);
	double distanceToZero();
	double distanceTo(const Point& cp);
	std::pair<double, double> toPolar();
};

