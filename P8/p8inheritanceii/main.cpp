#include "header/GeometricObject.h"
#include "header/Sphere.h"

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  string figure, op;
  cin >> figure;
  cin >> op;

  if(figure == "c"){
    if(op == "a"){

    }
    else if(op == "v"){

    }
    else if(op == "l"){

    }                                    

    }
  else if(figure == "s"){
    Sphere obj;

    if(op == "a"){
      double ratio;
      cin >> ratio;
      obj.setRatio(ratio);
      std::cout << std::setprecision(10) << obj.getArea() << std::endl; 
    }
    else if(op == "v"){
      double ratio;
      cin >> ratio;
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
    if(op == "a"){

    }
    else if(op == "v"){

    }
    else if(op == "w"){

    }
    else if(op == "h"){

    }
    else if(op == "l"){

    }
  }

  else if(figure == "y"){
    if(op == "a"){

    }
    else if(op == "v"){

    }
    else if(op == "r"){

    }
    else if(op == "h"){

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