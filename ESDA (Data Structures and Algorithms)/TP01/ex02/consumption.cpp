// g++ -Wall consumo.cpp

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/**
 *  transforms power from w to kW
 *  parameter: int w - power in watts
 *  return: float calculated value
 */
float power_transform(int w) {
    return (float) w/1000;
}

/**
 *  transforms minutes in hours
 *  parameter: float m - time in mins
 *  return: float calculated value
 */
float time_transform(float min) {
    return min/60;
}

/**
 *  calculates power consumption in kwh
 *  parameter: flot m - power in kw
 *  parameter: float hour - time in h
 *  return: float calculated consumption value
 */
float calculate_consumption(float kw, float hour) {
    return kw*hour;
}

/**Test code. Do not change**/

int main()
{
    int w = 5200;
    float min = 15.0;

	float kw = power_transform(w);
    float hour = time_transform(min);
    float consumption = calculate_consumption(kw, hour);
	
    cout << "\n hours = " << hour << "h";
    cout << "\n Power = " << kw << "kW";
    cout << "\n Consumption = " << consumption << "kWh";
	cout << endl;
	
    return 0;
}
