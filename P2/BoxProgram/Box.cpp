#include "Box.h"

Box::Box(){
  length = 0;
  width = 0;
  height = 0;
  volume = 0;
  area = 0;
}

Box::~Box(){}

double Box::getLength(){
  return length;
}
double Box::getWidth(){
  return width;
}
double Box::getHeight(){
  return height;
}

void Box::setLength(double l){
  length = l;
}
void Box::setWidth(double w){
  width = w;
}
void Box::setHeight(double h){
  height = h;
}


double Box::getVolume(){

  //El mismo objeto puede cambiar un atributo privado o metodo privado, por ejemplo un detalle de coqueteria setVolume(width*height*length);
  volume = width*height*length;
  return volume;
}
double Box::getArea(){
  area = 2*(length*height) + 2*(length*width) + 2*(width*height);
  return area;
}
void Box::setVolume(double v){
  volume = v;
}
void Box::setArea(double a){
  area = a;
}
