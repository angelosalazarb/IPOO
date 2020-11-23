#include "header/GeometricObject.h"
#include "header/Sphere.h"
#include "header/Cube.h"
#include "header/Cylinder.h"
#include "header/Pyramid.h"
#include "header/Cone.h"




#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  string figure, op;
  cin >> figure;
  cin >> op;

  //Cube
  if(figure == "c"){
    Cube obj;
    double lateral;
    cin >> lateral;
    obj.setLateral(lateral);

    if(op == "a"){
      std::cout << std::setprecision(10) << obj.getArea() << std::endl; 
    }
    else if(op == "v"){
      std::cout << std::setprecision(10) << obj.getVolume() << std::endl; 
    }
    else if(op == "l"){
      std::cout << obj.getLateral() << std::endl;
    }                                    

  }
  //Sphere
  else if(figure == "s"){
    Sphere obj;
    double ratio;
    cin >> ratio;
    obj.setRatio(ratio);

    if(op == "a"){
      std::cout << std::setprecision(10) << obj.getArea() << std::endl; 
    }
    else if(op == "v"){
      std::cout << std::setprecision(10) << obj.getVolume() << std::endl; 
    }
    else if(op == "r"){
      std::cout << obj.getRatio() << std::endl;
    }
    else if(op == "d"){
      std::cout << obj.getDiameter() << std::endl;
    }
  }
  //Pyramid
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
  //Cylinder
  else if(figure == "y"){
    Cylinder obj;
    double ratio, height;
    cin >> ratio;
    cin >> height;
    obj.setRatio(ratio);
    obj.setHeight(height);

    if(op == "a"){
      std::cout << std::setprecision(10) << obj.getArea() << std::endl; 
    }
    else if(op == "v"){
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
    Cone obj;
    double ratio, height;
    cin >> ratio;
    cin >> height;
    obj.setRatio(ratio);
    obj.setHeight(height);
  
    if(op == "a"){
      std::cout << std::setprecision(10) << obj.getArea() << std::endl; 
    }
    else if(op == "v"){
      std::cout << std::setprecision(10) << obj.getVolume() << std::endl; 
    }
    else if(op == "r"){
      std::cout << obj.getRatio() << std::endl;
    }
    else if(op == "h"){
      std::cout << obj.getHeight() << std::endl;
    }
  }
  
  else{
    std::cout << "Digite una figura correcta." << std::endl;
  }
  
}