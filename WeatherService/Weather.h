#pragma once
#include <string>

class Weather
{
private:
	std::string city; //  �����
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // �����
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(std::string _city, double _lon, double _lat, double _temperature, std::string _weather, double _windSpeed, int _clouds);
};

