/**
 * @file Point.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-13
 */

#ifndef POINT_H_
#define POINT_H_
#include <string>
using namespace std;
/**
 * This class calculate the distance between 2 points corresponding to their dimension.
 * 
 */
class Point
{

  private:
    double x;
    double y;
    double z;
    double x2;
    double y2;
    double z2;
    double term1;
    double term2;
    double term3;

    string dim;
    string coord;
    double distance2d;
    double distance3d;

    /**
     * Set the Distance2d of the coordinates 
     * @contract <setDistance2d><double> ---> <void>
     * 
     * @param nDistance2d is the new distance calculated 
     */
    void setDistance2d(double nDistance2d);
    

    /**
     * Set the Coordinates of the coordinates 
     * @contract <setCoord><string> ---> <void>
     * 
     * @param nCoord is the new coordinates
     */
    void setCoord(string nCoord);

    /**
     * Set the Dimension of the coordinates 
     * @contract <setDimension><string> ---> <void>
     * 
     * @param nDim is the new dimension
     */
    void setDimension(string nDim);

  public:
    /**
     * Construct a new Point object
     * @see Point(double x, double y, double z)
     * 
     */
    Point();

    /**
     * Construct a new Point object
     * @contract <Point><double><double><double> ---> <object>
     * 
     * @param newx 
     * @param newy 
     * @param newz
     * @param newx2 
     * @param newy2 
     * @param newz2 
     */
    Point(double newx,double newy,double newz,double newx2,double newy2,double newz2);

    /**
     * Destroy the Point object
     * @contract <><> ---> <>
     * 
     */
    ~Point();

  /**--** Getters && setter **--**/
  
    /**
     * Get the x point of the coordinate
     * @contract <getX><> ---> <double>
     * @return double 
     */
    double  getX();

    /**
     * Get the x2 point of the coordinate
     * @contract <getX2><> ---> <double>
     * @return double 
     */
    double  getX2();

    /**
     * Set the x point of the coordinate
     * @contract <setX><double> ---> <void>
     * 
     * @param newX is the new x point
     */
    void setX(double newX);

    /**
     * Set the x2 point of the coordinate
     * @contract <setX2><double> ---> <void>
     * 
     * @param newX2 is the new x point
     */
    void setX2(double newX2);

    /**
     * Get the y point of the coordinate
     * @contract <getY><> ---> <double>
     * @return double 
     */
    double  getY();

    /**
     * Get the y2 point of the coordinate
     * @contract <getY2><> ---> <double>
     * @return double 
     */
    double  getY2();

    /**
     * Set the Y point of the coordinate
     * @contract <setY><double> ---> <void>
     * 
     * @param newY is the new y point
     */
    void setY(double newY);

    /**
     * Set the Y2 point of the coordinate
     * @contract <setY><double> ---> <void>
     * 
     * @param newY2 is the new y point
     */
    void setY2(double newY2);


    /**
     * Get the Z point of the coordinate
     * @contract <getZ><> ---> <double>
     * @return double 
     */
    double  getZ();

    /**
     * Get the Z2 point of the coordinate
     * @contract <getZ2><> ---> <double>
     * @return double 
     */
    double  getZ2();

    /**
     * 
     * @contract <><> ---> <>
     * 
     * @param newZ 
     */
    void setZ(double newZ);

    /**
     * 
     * @contract <><> ---> <>
     * 
     * @param newZ2 
     */
    void setZ2(double newZ2);

    /**
     * Get the Distance2d of the object
     * @contract <getDistance2d><> ---> <double>
     * 
     * @return double 
     */
    double getDistance2d();
    /**
     * Get the Distance3d of the object
     * @contract <getDistance3d><> ---> <double>
     * 
     * @return double 
     */
    double getDistance3d();

     /**
     * Get the Dimension of the object
     * @contract <getDimension><> ---> <str>
     * 
     * @return string 
     */
    string getDimension();

    /**
     * Get the coordinates of the object
     * @contract <getCoord><> ---> <coord>
     * 
     * @return string 
     */
    string getCoord();

  /**
     * Set the Distance3d of the coordinates 
     * @contract <setDistance3d><double> ---> <void>
     * 
     * @param nDistance3d is the new distance calculated
     */
    void setDistance3d(double nDistance3d);

};

#endif