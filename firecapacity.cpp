#include <iostream>

using namespace std;

int main(int argc, char **argv){
  int numPeople;
  int roomCapacity;
  int extraPeople;

  cout << "what is the room capacity?" << endl;
  cin >> roomCapacity;
  //promps user to enter room roomCapacity and stores it

  cout << "how many people are in the room?"<< endl;
  cin >> numPeople;
  //promps user to enter num of people in the room and stores it

  if (roomCapacity > numPeople){
    extraPeople = roomCapacity - numPeople;
    cout << "This is legal. An additional " << extraPeople << " are also able to attend" << endl;
  }
  if (roomCapacity > numPeople){
    extraPeople = numPeople - roomCapacity;
    cout << "This is not legal and violates fire codes. " << extraPeople << " must leave for it to be legal" << endl;
  }







}
