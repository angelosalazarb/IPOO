#include "Major.h"
#include "Pension.h"
#include "Typenum.h"
#include <iostream>
using namespace std;

void showMajor(Major m){
  cout<<m.getMajorNum()<<endl;
}

void showType(Typenum num){
  cout << num.getResult() <<endl;
}

void showPension(Pension person){
  cout << person.getPension() << endl;
}

int main(int argc, char* argv[]) {
  Typenum aNum;  
  Typenum aNum2;
  Typenum aNum3;

    if (argc > 1){

        aNum.setNumber(atoi(argv[1]));
        aNum2.setNumber(atoi(argv[2]));
        aNum3.setNumber(atoi(argv[3]));
        
    }
      else{
        double num1;
        cin>>num1;
        aNum.setNumber(num1);

        double num2;
        cin>>num2;
        aNum2.setNumber(num2);

        double num3;
        cin>>num3;
        aNum3.setNumber(num3);

    }
    showType(aNum);
    showType(aNum2);
    showType(aNum3);

    
    Pension person1(34, "M");
    
    Pension person2(78, "F");
    person2.setAge(78);
    person2.setGender("F");

    Pension person3;
    person3.setAge(60);
    person3.setGender("M");

    Pension person4(56, "F");

    showPension(person1);
    showPension(person2);
    showPension(person3);
    showPension(person4);

    Major major1;
    major1.setNumber(3);
    major1.setNumber2(4);
    major1.setNumber3(5);

    Major major2(78,23,16);
    Major major3(67,90,21);
    Major major4(45,2,10);
    
    showMajor(major1);
    showMajor(major2);
    showMajor(major3);
    showMajor(major4);

  return 0;
}