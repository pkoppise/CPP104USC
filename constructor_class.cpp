/*
 * constructor_class.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: pkoppisetti
 */
#include <iostream>
using namespace std;

class Item {
	int val;
public:
	//Item(); // default const.
	Item(int v); // overloaded
};

/*Item::Item() {
    cout << "Default constructor is called" << endl;
}*/

Item::Item(int v) {
    val = v;
    cout << "Overloaded constructor is called:" << val << endl;
}

/*int main() {
    //Item obj;
	Item obj(2);
}*/



