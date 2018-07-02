#ifndef _WEATER_DATA_H_
#define _WEATER_DATA_H_

#include <unordered_set>

#include "subject.h"

class WeatherData : public SubjectInterface {
public:
	void registerObserver(ObserverInterface* o) {
		observers.insert(o);
	};

	void removeObserver(ObserverInterface* o) {
		observers.erase(o);
	};

	void notifyObserver() {
		for (auto observer : observers) {
			observer->update(temp, humidity, pressure);
		}
	}

	void measurementsChanged() {
		notifyObserver();
	}

	void setMeasurements(float _temp, float _humidity, float _pressure) {
		temp = _temp;
		humidity = _humidity;
		pressure = _pressure;
		measurementsChanged();
	}

private:
	float temp;
	float humidity;
	float pressure;
	std::unordered_set<ObserverInterface*> observers;
};
#endif //#define _WEATER_DATA_H_
