/*
 * StaticDemo.h
 *
 *  Created on: Nov 3, 2019
 *      Author: keith
 */

#ifndef STATICDEMO_H_
#define STATICDEMO_H_

class StaticDemo {
public:
	StaticDemo();
	virtual ~StaticDemo();
	static int getNumbInstances();
private:
	static int numberInstances;
};

#endif /* STATICDEMO_H_ */
