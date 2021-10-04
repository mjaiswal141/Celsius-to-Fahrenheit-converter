/* Celsius-to-Fahrenheit-converter */
#include <iostream>
using namespace std;

int main()
{
	float temp, far ;
	cout << "Enter temperature in Celsius :" ;
	cin >> temp ;
	cout << "\t" << temp ;
	far = (temp*9/5)+32 ;
	cout << "\n" <<"Temperature in Fahrenheit is :" << "\t" << far ;
	return 0 ;
}
