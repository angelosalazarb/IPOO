 #include "Cylinder.h"
 #include <iomanip>
 

 Cylinder::Cylinder(){
     radius = 0;
     diameter = 0;
     height = 0;
     volume = 0;
     areaLat = 0;
 }

Cylinder::~Cylinder(){}

double Cylinder::getRadius(){
    return radius;
}

double Cylinder::getDiameter(){
    return diameter;
}

double Cylinder::getHeight(){
    return height;
}

double Cylinder::getVolume(){
    volume = 3.1415926*radius*radius*height;
    return volume;
}

double  Cylinder::getAreaLat(){
    areaLat = 2*3.1415926*radius*height;
    return areaLat;
}

double  Cylinder::getAreatot(){
    areaLat = 2*3.1415926*radius*(height + radius);
    return areaLat;
}

void Cylinder::setRadius(double r){
    radius = r;
}

void Cylinder::setDiameter(double d){
    diameter = d;
}

void  Cylinder::setHeight(double h){
    height = h;
}

void Cylinder::setVolume(double vol){
    volume = vol;
}

void Cylinder::setAreaLat(double areaL){
    areaLat = areaL;
}

