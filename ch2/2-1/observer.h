#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class ObserverInterface {
public:
	virtual void update(float temp, float humidity, float pressure) = 0;
	virtual ~ObserverInterface () {}
};

#endif //#ifndef _OBSERVER_H_

