/* Luis Soto
  Tyson McMillan
  03/28/2024
  A program to practice working with multi-dimensional arrays.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int CITY = 2;
    const int WEEK = 7;

    struct TemperatureData {
        int temperature = 0;
        string city;
        string day;
        string weather; 
    };

    TemperatureData data[CITY][WEEK];

    string cityNames[CITY] = { "Fort Worth", "Fredericksburg" };
    string dayNames[WEEK] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    // Pre-defined temperature data
    int cityOne[WEEK] = { 81, 65, 67, 73, 77, 79, 74 };
    int cityTwo[WEEK] = { 84, 69, 69, 72, 79, 79, 77 };

    string weatherOne[WEEK] = { "Cloudy", "Partly Cloudy", "Sunny", "Mostly Sunny","Partly Cloudy", "Partly Cloudy", "Showers"}; // Weather data for City One
    string weatherTwo[WEEK] = { "Cloudy", "Mostly Sunny", "Sunny", "Partly Cloudy", "Mostly Sunny", "Partly Cloudy", "Scattered Thunderstorms" }; // Weather data for City Two

    // Populate the data table
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            data[i][j].city = cityNames[i];
            data[i][j].day = dayNames[j];
            if (i == 0)
            {
                data[i][j].temperature = cityOne[j];
                data[i][j].weather = weatherOne[j];
            }
            else if (i == 1)
            {
                data[i][j].temperature = cityTwo[j];
                data[i][j].weather = weatherTwo[j];
            }

        }
    }

    cout << "Data Table:\n";
    cout << "City       |Day     |Temp      |Condition \n";
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            cout << data[i][j].city << ", " << data[i][j].day << ": " << data[i][j].temperature << " degrees, " << data[i][j].weather <<
         endl;
        }
    }

    return 0;
}