/**
 * @file Pyramid.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-10-02
 */

/**This class will calculate the volume of a pyramid**/

class Pyramid
{
private:
  double side;
  double height;
  double volume;

  /**
   * Set the volume of the pyramid
   * @contract <volume><> ---> <void>
   * 
   */
  void setVolume(int nVolume);

public:
  /**
   * Construct a new Pyramid object
   * @contract <Pyramid><> ---> <obj>
   * @see Pyramid(double nSide, double nHeight, double);
   */
  Pyramid();

  /**
   * Construct a new Pyramid object
   * @contract <Pyramid><double><double> ---> <obj>
   * 
   * @param nSide 
   * @param nHeight 
   */
  Pyramid(double nSide, double nHeight);

  /**
   * Destroy the Pyramid object
   * @contract <~Pyramid><> ---> <obj>
   * 
   */
  ~Pyramid();

  /**--** getters and setter **--**/

  /**
   * Get the Side of the object
   * @contract <getSide><> ---> <double>
   * 
   * @return double 
   */
  double getSide();

  /**
   * Get the Height of the object
   * @contract <getHeight><> ---> <double>
   * 
   * @return double 
   */
  double getHeight();

  /**
   * Set the Side of the object 
   * @contract <setSide><double> ---> <void>
   * 
   * @param nSide 
   */
  void setSide(double nSide);

  /**
   * Set the Height of the object 
   * @contract <setHeight><double> ---> <void>
   * 
   * @param nHeight 
   */
  void setHeight(double nHeight);

  /**
   * Get the Volume of the object
   * @contract <getVolume><> ---> <void>
   * 
   * @return void 
   */
  void getVolume();

};

