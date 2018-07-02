#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include "observer.h"

class SubjectInterface {
public:
	virtual void registerObserver(ObserverInterface* o) = 0;
	virtual void removeObserver(ObserverInterface* o) = 0; 
	virtual void notifyObserver() = 0;

	virtual ~SubjectInterface() {}
};

#endif //#ifndef _SUBJECT_H_
