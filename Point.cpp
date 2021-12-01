#include <iostream>
#include <utility>
#include "Point.h"
double Point::getX() {
	return x; 
}
double Point::getY() {
	return y; 
}
void Point::setX(double newX) {
	x = newX;
}
void Point::setY(double newY) {
	y = newY;
}
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(const Point& cp) { 
	x = cp.x;
	y = cp.y;
}
Point::Point(double newX, double newY) {
	x = newX;
	y = newY;
}
void Point::moveTo(double newX, double newY) {
	x = newX;
	y = newY;
}
double Point::distanceToZero() {
	return sqrt(static_cast<double>(x * x + y * y));
}
double Point::distanceTo(const Point& cp) {
	return sqrt((x-cp.x) * (x-cp.x) + (y-cp.y) * (y-cp.y));
}
std::pair<double, double> Point::toPolar() {
	double rad, angle;
	angle = atan2(y, x);
	rad = sqrt(x * x + y * y);
	return std::make_pair(rad, angle);
}
bool Point::operator==(const Point& cp) {
	return x == cp.x && y == cp.y;
}
bool Point::operator!=(const Point& cp) {
	return !(*this == cp);
}
Point& Point::operator=(const Point& cp) {
	if (*this != cp) {
		x = cp.x;
		y = cp.y;
	}
	return *this;
}
std::ostream& operator<<(std::ostream& os, const Point& cp) {
	os << cp.x<<" "<<cp.y;
	return os;
}