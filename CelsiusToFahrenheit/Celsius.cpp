#include <iostream>

float CelsiusToFahrenheit(float Celsius);
int CelsiusToFahrenheitBad(float Celsius);

int main()
{
	float Celsius = 36;

	std::cout << Celsius << " degrees Celsius is " << CelsiusToFahrenheit(Celsius) << " degrees Fahrenheit." << std::endl << std::endl;
	std::cout << "Using integers gives the Fahrenheit a value of " << CelsiusToFahrenheitBad(Celsius) << "." << std::endl;
	std::cout << "This is because float values get rounded down when converted to integers." << std::endl;
}

float CelsiusToFahrenheit(float Celsius)
{
	return Celsius * 9 / 5 + 32;
}

int CelsiusToFahrenheitBad(float Celsius)
{
	return Celsius * 9 / 5 + 32;
}
