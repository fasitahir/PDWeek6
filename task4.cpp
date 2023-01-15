#include <iostream>
using namespace std;
float bill(float time, char serviceType, char DayorNight);
main()
{
    char serviceType, DayorNight;
    float time;
    float result;

    cout << "Enter the type of sevice (P or R): ";
    cin >> serviceType;

    if (serviceType == 'P' || serviceType == 'p')
    {
        cout << "What time of day it was used (Day(D) or Night(N)):";
        cin >> DayorNight;
    }

    cout << "What is the time in which service is used: ";
    cin >> time;

    result = bill(time, serviceType, DayorNight);
    cout << result << " $";
}

float bill(float time, char serviceType, char DayorNight)
{
    float result;
    if ((serviceType == 'R' || serviceType == 'r') && time <= 50)
    {
        result == 10.00;
    }

    else if ((serviceType == 'R' || serviceType == 'r') && time > 50)
    {
        result = ((time - 50) * 0.20) + 10;
    }

    else if ((serviceType == 'P' || serviceType == 'p') && (DayorNight == 'D' || DayorNight == 'd') && time <= 75)
    {
        result = 25.00;
    }

    else if ((serviceType == 'P' || serviceType == 'p') && (DayorNight == 'D' || DayorNight == 'd') && time > 75)
    {
        result = 25.00 + ((time - 50) * 0.10);
    }

    else if ((serviceType == 'P' || serviceType == 'p') && (DayorNight == 'N' || DayorNight == 'n') && time <= 100)
    {
        result = 25.00;
    }

    else if ((serviceType == 'P' || serviceType == 'p') && (DayorNight == 'N' || DayorNight == 'n') && time > 100)
    {
        result = 25.00 + ((time - 50) * 0.05);
    }    
    return result;
}