#include <iostream>
using namespace std;
string activity(string temperature , string humidity);
main()
{
    string temperature , humidity , result ;
    cout<<"What is Temperature(cold or warm): ";
    cin>>temperature;

    cout<<"What is condition of humidity (dry or humid): ";
    cin>>humidity;

    result = activity( temperature ,  humidity);
    cout<<result;

}

string activity(string temperature , string humidity)
{
    string result;
    if(temperature == "warm" && humidity== "dry")
    {
        result = "Play Tenis";
    }

    else if (temperature == "warm" && humidity == "humid")
    {
        result = "swim";
    }

    else if(temperature == "cold" && humidity== "dry")
    {
        result = "Play basket-ball";
    }

    else if (temperature == "cold" && humidity == "humid")
    {
        result = "Watch TV";
    }
    return result;

}