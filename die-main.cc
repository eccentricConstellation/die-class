/*
*      Author: Emma Rice
*        Date: January 16 2020
* Description: creates two die and prints their face value,
*              then reassigns number of sides and rolls die five times 
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "die.h"
using namespace std;
//function prototypes
int main() {
  Die d;
  cout << "Face value: "<< d << endl;
  Die d12(12);
  cout << "Face value: "<< d12 << endl;
  d12.setNumSides(24);
  for (size_t i = 0; i < 6; i++)
  {
    cout << "Roll: " << d12.roll() << endl;
  }
  return 0;
}
