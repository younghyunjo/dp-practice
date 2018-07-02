#include <iostream>

#include "display.h"
#include "weather-data.h"
#include "observer.h"

class CurrentConditionsDisplay : public ObserverInterface
							   , public Display {
public:
	CurrentConditionsDisplay(WeatherData* w) {
		weatherData = w;
		weatherData->registerObserver(this);
	};

	void update(float _temp, float _humidity, float _pressure) {
		temp = _temp;
		humidity = _humidity;
		pressure = _pressure;
		display();
	};

	void display() {
		std::cout << "Current temperature : " << temp << std::endl;
		std::cout << "Current humidity : " << humidity << std::endl;
		std::cout << "Current pressure : " << pressure << std::endl;
	}

private:
	WeatherData* weatherData;
	float temp;
	float humidity;
	float pressure;
};
