#include "Point.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

Point::Point(double newx,double newy,double newz,double newx2,double newy2,double newz2){
  x = newx;
  y = newy;
  z = newz;
  x2 = newx2;
  y2 = newy2;
  z2 = newz2;

  coord = "";
  dim = "";

  distance2d = 0;
  distance3d = 0;

  term1 = 0;
  term2 = 0;
  term3 = 0;
}

Point::Point(){
  x = 00;
  y = 00;
  z = 00;
  x2 = 00;
  y2 = 00;
  z2 = 00;

  coord = "";
  dim = "";

  distance2d = 0;
  distance3d = 0;
  term1 = 0;
  term2 = 0;
}
Point::~Point(){}

/**--** Getters && setter **--**/

void Point::setX(double newX){
  x = newX;
}

void Point::setY(double newY){
  y = newY;
}

void Point::setZ(double newZ){
  z = newZ;
}

void Point::setX2(double newX2){
  x2 = newX2;
}

void Point::setY2(double newY2){
  y2 = newY2;
}

void Point::setZ2(double newZ2){
  z2 = newZ2;
}

double Point::getX(){
  return x;
}

double Point::getY(){
  return y;
}

double Point::getZ(){
  return z;
}
double Point::getX2(){
  return x2;
}

double Point::getY2(){
  return y2;
}

double Point::getZ2(){
  return z2;
}

string Point::getDimension(){
  if (z == 00)
    return "2d";
  else 
    return "3d";
}

double Point::getDistance3d(){
  distance3d = sqrt(pow((x2 - x),2)+pow((y2 - y),2)+pow((z2 - z),2));

  return distance3d;
}

double Point::getDistance2d(){
  distance2d = sqrt(pow((x2 - x),2)+pow((y2 - y),2));

  return distance2d;
}