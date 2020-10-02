/**
 * @file Pet.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * This class will receive a pet info and will calculate using this its age in the human age
 * @version 0.1
 * @date 2020-09-05
 * 
 */


#ifndef PET_H_
#define PET_H_
#include <string>
using namespace std;

class Pet{
private:
  string name;
  string breed;
  string size;
  int petAge;
  int humanAge;

public:
  /**
   * Construct a new Pets object
   * @contract <Pets><> ---> <>
   * 
   */
  Pet();

  /**
   * Destroy the Pets object
   * @contract <~Pets><> ---> <>
   * 
   */
  ~Pet();
  
  /**
   * Get the Name of the pet
   * @contract <getName><> ---> <str>
   * 
   * @return string 
   */
  string getName();

  /**
   * Set the Name of the pet 
   * @contract <setName><str> ---> <void>
   * 
   * @param nName is the pet name
   * @return void 
   */
  void setName(string nName);

  /**
   * Get the Size of the pet
   * @contract <getSize><str> ---> <str>
   * 
   * @return string 
   */
  string getSize();

  /**
   * Set the Size of the pet 
   * @contract <setSize><str> ---> <void>
   * 
   * @param nSize is the pet size
   * @return void 
   */
  void setSize(string nSize);

  /**
   * Get the Breed of the object
   * @contract <getBreed><> ---> <str>
   * 
   * @return string 
   */
  string getBreed();

  /**
   * Set the Breed of the pet
   * @contract <setBreed><str> ---> <void>
   * 
   * @param nBreed is the pet breed
   * @return void 
   */
  void setBreed(string nBreed);

  /**
   * Get the Pet Age
   * @contract <getPetAge><> ---> <int>
   * 
   * @return int 
   */
  int getPetAge();
  
  /**
   * Set the Pet Age 
   * @contract <setPetAge><int> ---> <void>
   * 
   * @param nPetAge is the pet age
   * @return void 
   */
  void setPetAge(int nPetAge);

  /**
   * Get the Human Age of the pet
   * @contract <getHumanAge><> ---> <int>
   * 
   * @return int 
   */
  int getHumanAge();

};


#endif