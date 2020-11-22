/**
 * @file Dog.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef DOG_H_
#define DOG_H_
#include "header/Animal.h"
#include <string>
using namespace std;

class Dog: public Animal{
  private:
    string size,breed, name, bark;
    int age;

    /**
     * Construct a new Dog Animal
     * @contract <Dog><> ---> <obj>
     * @see Dog(str, str, str)
     **/
    Dog();

  public:
     
    /**
     * Construct a new Dog object}
     * @contract <Dog><str><str><str> ---> <obj>
     * 
     * @param breed 
     * @param name 
     * @param age 
     **/
    Dog(string breed, string name, string size, string bark, int age);

    /**
     * Copy constructor the Dog from another 
     * @contract <Dog><Dog&> ---> <obj>
     * 
     **/
    Dog(Dog& copy);


    /**
     * Copy constructor the Dog from another 
     * @contract <Dog><Dog*> ---> <obj>
     * 
     **/
    Dog(Dog* copy);

    /**
     * Destroy the Dog object
     * @contract <~Dog><obj> ---> <>
     * 
     **/
    ~Dog();

    /**--** getters and setters **-**/

    /**
     * Get the Breed of the object
     * @contract <getBreed><> ---> <str>
     * 
     * @return string 
     **/
    string getBreed(void);

    /**
     * Get the Name of the object
     * @contract <getName><> ---> <string>
     * 
     * @return string 
     **/
    string getName(void);

    /**
     * Get the Bark of the object
     * @contract <getBark><void> ---> <str>
     * 
     * @return string 
     **/
    string getBark(void);

    /**
     * Get the Size of the object
     * @contract <getSize><void> ---> <str>
     * 
     * @return string 
     **/
    string getSize(void);

    /**
     * Get the Age of the object
     * @contract <getAge><> ---> <int>
     * 
     * @return int 
     **/
    int getAge(void);

    /**
     * Set the Breed of the object
     * @contract <setBreed><str> ---> <void>
     * 
     * @param nBreed 
     **/
    void setBreed(string nBreed);

    /**
     * Set the Name of the object
     * @contract <setName><str> ---> <void>
     * 
     * @param nName 
     **/
    void setName(string nName);

    /**
     * Set the Size of the object
     * @contract <setSize><str> ---> <void>
     * 
     * @param nSize 
     **/
    void setSize(string nSize);

    /**
     * Set the Bark of the object
     * @contract <setBark><str> ---> <void>
     * 
     * @param nBark 
     **/
    void setBark(string nBark);

    /**
     * Set the Age of the object
     * @contract <setAge><int> ---> <void>
     * 
     * @param nAge 
     **/
    void setAge(int nAge);

    /**--** other methods **--**/
};


#endif