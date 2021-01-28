#include <iostream>

using namespace std;

int main(int argc, char **argv){
  double numHoursWorked;
  double pay;
  double socialSecurity;
  double federalIncomeTax;
  double stateIncomeTax;
  double medicalInsurance;
  double net;
  cout << "How many hours did you work?" << endl;
  cin >> numHoursWorked;

  if(numHoursWorked <= 40){
    pay = numHoursWorked * 16;
  }
  else{
    numHoursWorked = numHoursWorked - 40;
    pay = numHoursWorked*24 + 640;
  }
  socialSecurity = pay * .06;
  federalIncomeTax = pay * .14;
  stateIncomeTax = pay * .05;
  medicalInsurance = 10;
  net = pay - socialSecurity - federalIncomeTax - stateIncomeTax - medicalInsurance;

  cout << "Gross Pay: " << pay << endl;
  cout << "Social Security: " << socialSecurity << endl;
  cout << "Federal Income Tax: " << federalIncomeTax << endl;
  cout << "State Income Tax: " << stateIncomeTax << endl;
  cout << "Medical Insurance: " << medicalInsurance << endl;
  cout << "Net Take Home: " << net << endl;


}
