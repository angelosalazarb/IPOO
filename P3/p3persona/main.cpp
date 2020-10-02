#include <iostream>
#include "Person.h"

void show(Person person){
	cout <<person.getClassification()<<endl;
}

int main() {
  Person person1;
	person1.setName("Thiago");
	person1.setLastName("Zuluaga");
	person1.setAge(3);

	Person person2;
	person2.setName("Brandon");
	person2.setLastName("Cetro");
	person2.setAge(11);	
	
	Person person3;
	person3.setName("Brandon");
	person3.setLastName("Cetro");
	person3.setAge(14);	

	Person person4;
	person4.setName("Juan");
	person4.setLastName("Cetro");
	person4.setAge(59);	

	Person person5;
	person5.setName("Zulien");
	person5.setLastName("Cetro");
	person5.setAge(78);	

	show(person1);
	show(person2);
	show(person3);
	show(person4);
	show(person5);
	

}