#ifndef CYLINDER_H_
#define CYLINDER_H_


/**
 * @author Angelo Salazar Bermúdez
 * This class make a cylinder object and evaluate the respective
 * measurements
 */

class Cylinder{

    private:
        double radius;
        double diameter;
        double height;

        double volume;
        double areaLat;

        void setAreaLat(double areaL);
        void setVolume(double vol);
        void setAreatot(double areat);

    public:
        /**
         * @brief Construct a new Cylinder object
         * 
         */
        Cylinder();

        /**
         * @brief Destroy the Cylinder object
         * 
         */

        ~Cylinder();

         /**
         * Allow get the Radius area of the cylinder
         * @return double
         * 
         */

        double getRadius();
        
        /**
         * Allow get the Diameter area of the cylinder
         * @return double
         * 
         */

        double getDiameter();
 
         /**
         * Allow get the Height area of the cylinder
         * @return double
         * 
         */

        double getHeight();

        /**
         * Allow get the lateral area of the cylinder
         * @return double
         * 
         */

        double getAreaLat();

        /**
         * Allow get the volume of the cylinder
         * @return double
         * 
         */

        double  getVolume();

        /**
         * Allow get the volume of the cylinder
         * @return double
         * 
         */

        double  getAreatot();

    
        /**
         * Allow set the radius of the cylinder
         * @return void
         * 
         */

        void setRadius(double r);

        /**
         * Allow set the diameter of the cylinder
         * @return void
         * 
         */

        void setDiameter(double d);

        /**
         * Allow set the height of the cylinder
         * @return void
         * 
         */

        void setHeight(double h);
};


#endif