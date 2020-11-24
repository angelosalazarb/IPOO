#include "../header/Staff.h"
#include <string>
using namespace std;

Staff::Staff(){
  this-> name = "";
  this-> charge = "";
  this-> salary = 0;
  this -> pay = 0;

  int staffQuantity = 0;
  string *staffList = new string[staffQuantity];

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

string Staff::payday(void){
  double amount;
  amount = 0;
  
  for (int count=0; count < staffList.size(); count++){
        amount += staffList[count].getPay(); 
  }
  if (amount == 0){
    return "Thanks!";
  }else{
    return "Total: " + to_string(amount);
  }

 }
