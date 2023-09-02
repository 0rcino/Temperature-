#include <iostream>
#include <iomanip>
using namespace std;

float celsiusToFahrenheit(float val);
float fahrenheitToCelsius(float val);
float celsiusToKelvin(float val);

int main()
{
  int choice;
  float value;
  float result;

  do
  {
    cout << "--- Temperature Converter ----\n";
    cout << "1 -Celsius to Fahrenheit \n";
    cout << "2 - Fahrenheit to Celsius \n";
    cout << "3 - Celsius to Kelvin \n";
    cout << "4 - Exit \n";

    cout << "what would you like to do? (1-4) -";
    cin >> choice;

    cin.clear();
    fflush(stdin);

    switch (choice)
    {
    case 1:
      cout << "\n Enter a value: ";
      cin >> value;
      result = celsiusToFahrenheit(value);
      cout << "\n result: " << fixed << setprecision(1) << result << "\n\n";
      break;

    case 2:
      cout << "\n Enter a value: ";
      cin >> value;
      result = fahrenheitToCelsius(value);
      cout << "\n result: " << fixed << setprecision(1) << result << "\n\n";
      break;

    case 3:
      cout << "\n Enter a value: ";
      cin >> value;
      result = celsiusToKelvin(value);
      cout << "\n result: " << fixed << setprecision(2) << result << "\n\n";
      break;

    case 4:
      cout << "You have exited: ";

    default:
      cout << " Invalied choice \n";
    }
  } while (choice != 4);

  return 0;
}

float celsiusToFahrenheit(float val)
{
  return ((val = 9) / 5) + 32;
}
float fahrenheitToCelsius(float val)
{
  return ((val - 32) * 5) / 9;
}
float celsiusToKelvin(float val)
{
  return val + 273.15;
}
