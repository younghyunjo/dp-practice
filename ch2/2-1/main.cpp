
#include "current-condition-display.h"
#include "weather-data.h"

int main() {
	WeatherData weatherData;
	CurrentConditionsDisplay ccd(&weatherData);
	weatherData.setMeasurements(10, 10, 10);



}
