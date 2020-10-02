#include <iostream>
#include <iomanip>
#include "Cylinder.h"
using namespace std;


void sVolume(Cylinder cyl){
    cout <<setprecision(11)<<cyl.getVolume() <<endl;
}

void sArea(Cylinder cyl){
    cout <<  cyl.getAreaLat() <<endl;
}

void sAreatot(Cylinder cyl){
    cout <<  cyl.getAreatot() <<endl;
}

int main(){
    Cylinder c1;

    c1.setRadius(8);
    c1.setHeight(15);
    c1.setDiameter(16);

    Cylinder c2;

    c2.setRadius(5);
    c2.setHeight(30);
    c2.setDiameter(10);

    sVolume(c1);
    sVolume(c2);
    sArea(c1);
    sArea(c2);
    sAreatot(c1);
    sAreatot(c2);
}