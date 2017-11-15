/*
 * t_pointer.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: pkoppisetti
 */
#include <iostream>
using namespace std;

class Item {
private:
   int value;
public:
   void setValue(int value);
   int getValue() const
   {
	   return value;
   }
};

/*
void Item::setValue(int value)
{
   this->value = value;
}*/

/*
int main()
{
   Item x;
   x.setValue(2);
   // Now print out the value...expecting 2
   cout << x.getValue() << endl;
   return 0;
}*/


