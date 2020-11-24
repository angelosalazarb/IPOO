#include "../header/Staff.h"
#include "../header/Executive.h"
#include "../header/Employee.h"
#include "../header/Volunteer.h"
#include "../header/Staff.h"
#include "../header/Hourly.h"


#include <string>
#include <iostream>
using namespace std;

Staff::Staff(){
  this-> name = "";
  this-> charge = "";
  this-> salary = 0;
  this -> pay = 0;

}

Staff::Staff(string nName){
  this-> name = nName;
  this-> charge = "";
  this-> salary = 0;
  this -> pay = 0;
}

Staff::Staff(string nName, string nCharge){
  this-> name = nName;
  this-> charge = nCharge;
  this-> salary = 0;
  this -> pay = 0;
}

Staff::Staff(string nName, string nCharge, int nSalary){
  this-> name = nName;
  this-> charge = nCharge;
  this-> salary = nSalary;
  this -> pay = 0;
}

Staff::~Staff(){}

string Staff::getName(void){
  return this-> name;
}

string Staff::getCharge(void){
  return this-> charge;
}

int Staff::getSalary(void){
  return this-> salary;
}

int Staff::getPay(void){
  return this-> pay;
}

void Staff::setName(string nName){
  this-> name = nName;
}

void Staff::setCharge(string nCharge){
  this-> charge = nCharge;
}

void Staff::setSalary(int nSalary){
 this-> salary = nSalary;
}

void Staff::setPay(int nPay){
  this-> pay = nPay;
}

void Staff::consoleFill(void){
  int size;
  cin >> size;
  staffList.resize(size);

  for(int index=0; index < size; index++){
    string nName, nCharge;
    int nSalary;

    cin>> nName;
    cin>> nCharge;
    cin>> nSalary;

    if(nCharge == "Executive"){
      staffList[index] = new Executive(nName,nCharge,nSalary);
    }

    else if(nCharge == "Employee"){
      staffList[index] = new Employee(nName,nCharge,nSalary);
    }

    else if(nCharge == "Hourly"){
      staffList[index] = new Hourly(nName,nCharge,nSalary);
    }

    else if(nCharge == "Volunteer"){
      staffList[index] = new Volunteer(nName,nCharge,nSalary);
    }
    else{
      cout << "Digite un cargo correspondiente adecuado." << endl;
    }
  }

}

string Staff::payday(void){
  double amount;
  amount = 0;
  
  for (int index=0; index < staffList.size(); index++){
        amount += staffList[index]-> getSalary(); 
  } 
  if (amount == 0){
    return "Thanks!";
  }else{
    return "Total: " + to_string(int(amount));
  }

 }
