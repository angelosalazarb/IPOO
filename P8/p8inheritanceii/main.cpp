#include "header/GeometricObject.h"
#include "header/Sphere.h"
#include "header/Cube.h"
#include "header/Cylinder.h"
#include "header/Pyramid.h"



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  string figure, op;
  cin >> figure;
  cin >> op;

  if(figure == "c"){
    Cube obj;
    if(op == "a"){
      double lateral;
      cin >> lateral;
      obj.setLateral(lateral);
      std::cout << std::setprecision(10) << obj.getArea() << std::endl; 
    }
    else if(op == "v"){
      double lateral;
      cin >> lateral;
      obj.setLateral(lateral);
      std::cout << std::setprecision(10) << obj.getVolume() << std::endl; 
    }
    else if(op == "l"){
      std::cout << obj.getLateral() << std::endl;
    }                                    

    }
  else if(figure == "s"){
    Sphere obj;
    double ratio;
    cin >> ratio;

    if(op == "a"){
      obj.setRatio(ratio);
      std::cout << std::setprecision(10) << obj.getArea() << std::endl; 
    }
    else if(op == "v"){
      obj.setRatio(ratio);
      std::cout << std::setprecision(10) << obj.getVolume() << std::endl; 
    }
    else if(op == "r"){
      std::cout << obj.getRatio() << std::endl;
    }
    else if(op == "d"){
      std::cout << obj.getDiameter() << std::endl;
    }
  }

  else if(figure == "p"){
    Pyramid obj;
    double lateral,width,height;
    cin >> lateral;
    cin >> width;
    cin >> height;

    obj.setLateral(lateral);
    obj.setWidth(width);
    obj.setHeight(height);

    if(op == "a"){
      std::cout << std::setprecision(10) << obj.getArea() << std::endl;   
    }
    else if(op == "v"){
      std::cout << std::setprecision(10) << obj.getVolume() << std::endl;
    }

    else if(op == "w"){
      std::cout << obj.getWidth() << std::endl;
    }
    else if(op == "h"){
      std::cout << obj.getHeight() << std::endl;
    }
    else if(op == "l"){
      std::cout << obj.getLateral() << std::endl;
    }
  }

  else if(figure == "y"){
    Cylinder obj;

    if(op == "a"){
      double ratio, height;
      cin >> ratio;
      cin >> height;
      obj.setRatio(ratio);
      obj.setHeight(height);
      std::cout << std::setprecision(10) << obj.getArea() << std::endl; 
    }
    else if(op == "v"){
      double ratio, height;
      cin >> ratio;
      cin >> height;
      obj.setRatio(ratio);
      obj.setHeight(height);
      std::cout << std::setprecision(10) << obj.getVolume() << std::endl; 
    }
    else if(op == "r"){
      std::cout << obj.getRatio() << std::endl;
    }
    else if(op == "h"){
      std::cout << obj.getHeight() << std::endl;
    }
  }

  else if(figure == "n"){
    if(op == "a"){

    }
    else if(op == "v"){

    }
    else if(op == "w"){

    }
    else if(op == "h"){

    }
  }
  
  else{
    std::cout << "Digite una figura correcta." << std::endl;
  }
  
}