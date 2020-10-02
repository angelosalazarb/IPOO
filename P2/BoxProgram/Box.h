#ifndef BOX_H_
#define BOX_H_

class Box{

  //Todos los atributos deben estar en la parte privada de la clase
  
  private:
    double length; //Longitud
    double width; //Ancho
    double height; //Alto

    double volume; //Volume
    double area; //Area

    void setArea(double a);
    void setVolume(double v);

  public:
    Box();
    ~Box();

  /**
  *Allow get length value the box
  *@return double
  */
  double getLength();

  /**
  *Allow get width value the box
  *@return double
  */
  double getWidth();

  /**
  *Allow get height value the box
  *@return double
  */
  double getHeight();

  /**
  *Allow set length value the box
  *@param l length value
  *@return void
  */
  void setLength(double l);

  /**
  *Allow set width value the box
  *@param w width value
  *@return void
  */
  void setWidth(double w);

  /**
  *Allow set height value the box
  *@param h height value
  *@return void
  */
  void setHeight(double h);

  /**
  *Allow get volume value the box
  *@return double
  */
  double getVolume();


  /**
  *Allow get area value the box
  *@return double
  */
  double getArea();

};

#endif
