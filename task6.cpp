#include <iostream>
using namespace std;
float Studio(string month, int stay);
float Apartment(string month, int stay);

main()
{
    string month;
    int stay;

    cout << "Enter Month: ";
    cin >> month;

    cout << "Number of days you stayed: ";
    cin >> stay;

    float apartmentPrice = Apartment(month, stay);
    float studionPrice = Studio(month, stay);

    cout << "Apartment: " << apartmentPrice << endl;
    cout << "Studio: " << studionPrice << endl;
}

float Apartment(string month, int stay)
{
    float apartmentPrice;

    if (month == "May" || month == "October")
    {
        apartmentPrice = 65 * stay;
    }
    else if (month == "June" || month == "September")
    {
        apartmentPrice = 68.7 * stay;
    }

    else if (month == "July" || month == "August")
    {
        apartmentPrice = 77 * stay;
    }
    if (stay > 14)
    {
        apartmentPrice = apartmentPrice - (0.1 * apartmentPrice);
    }
    return apartmentPrice;
}

float Studio(string month, int stay)
{
    float studioPrice;
    float discountPrice;
    if ((month == "May" || month == "October") && stay <= 7)
    {
        studioPrice = 50 * stay;
        discountPrice = studioPrice;
    }
    else if ((month == "May" || month == "October") && (stay > 7 && stay <= 14))
    {
        studioPrice = 50 * stay;
        discountPrice = studioPrice - (0.05 * studioPrice);
    }

    else if ((month == "May" || month == "October") && (stay > 14))
    {
        studioPrice = 50 * stay;
        discountPrice = studioPrice - (0.3 * studioPrice);
    }

    else if ((month == "June" || month == "September"))
    {
        studioPrice = 75.20 * stay;
        discountPrice = studioPrice;
    }

    else if ((month == "June" || month == "September") && (stay > 14))
    {
        studioPrice = 50 * stay;
        discountPrice = studioPrice - (0.2 * studioPrice);
    }

    else if ((month == "July" || month == "August"))
    {
        studioPrice = 76 * stay;
        discountPrice = studioPrice;
    }

    return discountPrice;
}