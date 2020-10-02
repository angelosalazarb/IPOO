#include <iostream>
#include <iomanip>
#include <cmath>
#include "Point.h"
using namespace std;

void showCoord(Point point){
  if(point.getZ() != 00)
  cout<< "coord:" << "(" << point.getX() << ", " << point.getY()<< ", " << point.getZ() << ")" <<endl;
  else
  cout<< "coord:" << "(" << point.getX() << ", " << point.getY()<<")" <<endl;
}

void showDim(Point point){
  cout<< "in dim: " << point.getDimension() <<endl;
}

void showp1(Point p){
  if(p.getZ() != 00)
  cout<< "p1" << "(" << p.getX() << ", " << p.getY()<< ", " << p.getZ() << ")" <<endl;
  else
  cout<< "p1" << "(" << p.getX() << ", " << p.getY()<<")" <<endl;
}


void showp2(Point p){
if(p.getZ2() != 00)
  cout<< "p2" << "(" << p.getX2() << ", " << p.getY2()<< ", " << p.getZ2() << ")" <<endl;
  else
  cout<< "p2" << "(" << p.getX2() << ", " << p.getY2()<<")" <<endl;
}

void distance(Point p){
if(p.getZ2() != 00)
  cout << setprecision(12) << p.getDistance3d()<<endl;
else
  cout << setprecision(12) << p.getDistance2d()<<endl;
}

/*
void calculateDistance(Point p1, Point p2){
  cout << setprecision(12) << sqrt(pow(p2.getX()- p1.getX()) )
}
*/

int main(){

  Point pointA;
  pointA.setX(5);
  pointA.setY(7);
  pointA.setZ(2);

  Point pointB;
  pointB.setX(9);
  pointB.setY(1);
  pointB.setZ(5);

  Point pointC;
  pointC.setX(8);
  pointC.setY(6);

  Point pointD;
  pointD.setX(8);
  pointD.setY(8);

  showCoord(pointA);
  showDim(pointA);
  showCoord(pointB);
  showDim(pointB);
  showCoord(pointC);
  showDim(pointC);
  showCoord(pointD);
  showDim(pointD);

  Point p(1,2,1,5,2,7);

  showp1(p);
  showp2(p);
  distance(p);

}
 
