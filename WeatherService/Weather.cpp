#include "Weather.h"

Weather::Weather(std::string _city, double _lon, double _lat, double _temperature, std::string _weather, double _windSpeed, int _clouds)
{
	city = _city;
	lon = _lon;
	lat = _lat;
	temperature = _temperature;
	weather = _weather;
	windSpeed = _windSpeed;
	clouds = _clouds;
}
