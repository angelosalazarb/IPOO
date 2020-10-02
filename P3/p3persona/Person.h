
#ifndef PERSON_H_
#define PERSON_H_
#include <string>
using namespace std;

/**
 * @file Person.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @brief This class represent a Person and allow get a classification according to the age
 * @version 0.1
 * @date 2020-09-05
 * 
 * 
 */

class Person{
  private:
		string name;
    string lastName;
    string classification;
    int age;

		/**
		 * Set the Clasiffication of the object 
		 * @contract <><> ---> <>
		 * 
		 * @param nClassification 
		 */
		void setClasiffication(string nClassification);

  public:
		/**
		 * Construct a new Person object
		 * @contract <><> ---> <>
		 * @see Person(int nAge, string Name, string LastName);

		 */
  	Person();

		/**
		 * Construct a new Person object
		 * @contract <><> ---> <>
		 * 
		 * @param nAge 
		 * @param Name 
		 * @param LastName 
		 */
		Person(int nAge, string Name, string LastName);
		/**
		 * Destroy the Person object
		 * @contract <><> ---> <>
		 * 
		 */
  	~Person();
		/**
		 * Get the Name object
		 * @contract <getName><> ---> <str>
		 * 
		 * @return string 
		 */
		string getName();

		/**
		 * Get the Last Name object
		 * @contract <getLastName><> ---> <str>
		 * 
		 * @return string 
		 */
		string getLastName();

		/**
		 * Get the Age object
		 * @contract <getAge><> ---> <int>
		 * 
		 * @return int 
		 */
		int getAge();

		/**
		 * Get the Classification object
		 * @contract <getClassification><> ---> <str>
		 * 
		 * @return string 
		 */
		string getClassification();

		/**
		 * Set the Name object
		 * @contract <setName><str> ---> <void>
		 * 
		 * @param newName represents the person name
		 */
		void setName(string newName);

		/**
		 * Set the Last Name object
		 * @contract <setLastName><str> ---> <void>
		 * 
		 * @param newLastName 
		 */
		void setLastName(string newLastName);

		/**
		 * Set the Age object
		 * @contract <setAge><int> ---> <>
		 * 
		 * @param newAge 
		 */
		void setAge(int newAge);
};
#endif