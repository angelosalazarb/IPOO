#include <iostream>
#include "Person.h"

int main() {
  Person aGrandpa;
	aGrandpa.setName("Abraham");
	aGrandpa.setLastName("Simpson");
	aGrandpa.setAge(89);

	Person aMan;
	aMan.setName("Homer");
	aMan.setLastName("Simpson");
	aMan.setAge(40);	

	Person aWoman;
	aWoman.setName("Marge");
	aWoman.setLastName("Simpson");
	aWoman.setAge(38);	

	Person aBoy;
	aBoy.setName("Bart");
	aBoy.setLastName("Simpson");
	aBoy.setAge(12);	
	
	Person aGirl;
	aGirl.setName("Lisa");
	aGirl.setLastName("Simpson");
	aGirl.setAge(10);

	Person aBaby;
	aBaby.setName("Maggie");
	aBaby.setLastName("Simpson");
	aBaby.setAge(4);		

	cout << "De la familia "<<aGrandpa.getLastName()<< " el " << aGrandpa.getClassification()<< " Se llama "<<aGrandpa.getName()<<endl;

  cout << "De la familia "<<aBoy.getLastName()<< " el " << aBoy.getClassification()<< " Se llama "<<aBoy.getName()<<endl;

  cout << "De la familia "<<aMan.getLastName()<< " el " << aMan.getClassification()<< " Se llama "<<aMan.getName()<<endl;

  cout << "De la familia "<<aWoman.getLastName()<< " el " << aWoman.getClassification()<< " Se llama "<<aWoman.getName()<<endl;




}