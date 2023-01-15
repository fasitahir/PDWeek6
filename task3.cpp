#include <iostream>
using namespace std;
string sign(string month , int date);

main()
{
    string month , result;
    int date;

    cout<<"Enter Your Birth Month: ";
    cin>> month;

    cout<<"Enter Your Birth Date: ";
    cin>> date;

    result = sign(month ,date);

    cout<<"Your Zodiac Sign is: "<< result << endl;


}

string sign(string month , int date)
{
    string result;
    if((month == "March" && date >=21) || (month == "April" && date <= 19))
    {
        result = "Aries";
    }

    else if((month == "April" && date >=20) || (month == "May" && date <= 20))
    {
        result = "Taurus";
    }

    else if((month == "May" && date >=21) || (month == "June" && date <= 20))
    {
        result = "Gemini";
    }

    else if((month == "June" && date >=21) || (month == "July" && date <= 22))
    {
        result = "Cancer";
    }

    else if((month == "July" && date >=23) || (month == "August" && date <= 22))
    {
        result = "Leo";
    }

    else if((month == "August" && date >=23) || (month == "September" && date <= 22))
    {
        result = "Virgo";
    }

    else if((month == "September" && date >=23) || (month == "October" && date <= 22))
    {
        result = "Libra";
    }

    else if((month == "October" && date >=23) || (month == "November" && date <= 21))
    {
        result = "Scorpio";
    }

    else if((month == "November" && date >=22) || (month == "December" && date <= 21))
    {
        result = "Sagittarius";
    }

    else if((month == "December" && date >=22) || (month == "January" && date <= 19))
    {
        result = "Caricorn";
    }

    else if((month == "January" && date >=20) || (month == "February" && date <= 18))
    {
        result = "Aquarius";
    }

    else if((month == "February" && date >=19) || (month == "March" && date <= 20))
    {
        result = "Pisces";
    }
    return result;
}