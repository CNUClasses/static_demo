/*
 * StaticDemo.cpp
 *
 *  Created on: Nov 3, 2019
 *      Author: keith
 */

#include "StaticDemo.h"

StaticDemo::StaticDemo() {
	StaticDemo::numberInstances++;
}

StaticDemo::~StaticDemo() {}

int StaticDemo::getNumbInstances(){
	return StaticDemo::numberInstances;
}

//start with 0
 int StaticDemo::numberInstances =0;
