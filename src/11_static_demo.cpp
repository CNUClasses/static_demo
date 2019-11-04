//============================================================================
// Name        : 11_static_demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "StaticDemo.h"
using namespace std;

int main() {
	//do not need a class instance to access public static member functions and variables
	cout <<"We have "<<std::to_string(StaticDemo::getNumbInstances())<<" StaticDemo objects" << endl;

	//first instance
	StaticDemo sd1;
	cout <<"We have "<<std::to_string(sd1.getNumbInstances())<<" StaticDemo objects" << endl;

	//second instance
	StaticDemo sd2;

	//notice that sd1 and sd2 getNumbInstances() calls both return 2
	cout <<"We have "<<std::to_string(sd2.getNumbInstances())<<" StaticDemo objects" << endl;
	cout <<"We have "<<std::to_string(sd1.getNumbInstances())<<" StaticDemo objects" << endl;
}
