#include <iostream>

using namespace std;

int main(int argc, char **argv){
  float weightCerealOunces;
  float weightCerealTon;
  float numOfBoxs;


  cout << "enter the weight of the cereal" << endl;
  //asks for user to enter number
  cin >> weightCerealOunces;
  //takes in number and stores it in varible

  weightCerealTon = weightCerealOunces / 35273.92;
  //calculates weight in tons by deviding ounces by conversion factor
  numOfBoxs = 35273.92 / weightCerealTon;
  //calculates number of boxs by deviding metriv ton by weight in metric tons

  cout << "it weighs " << weightCerealTon << " metric tons" << endl;
  cout << numOfBoxs << " boxs of cereal" << endl;
  //prints informaion




  return 0;
}
