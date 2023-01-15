#include <iostream>
using namespace std;
main()
{
    int startTimeHours, startTimeMinutes, arivalTimeHour, arivalTimeMinutues,
        TotalminutesStart, TotalminutesArival, resultantMinutes, resultantHour, minutes;

    cout << "Enter time of start of exam(Hours): ";
    cin >> startTimeHours;

    cout << "Enter time of start of exam(Minutes): ";
    cin >> startTimeMinutes;

    cout << "Enter time of arival(Hours): ";
    cin >> arivalTimeHour;

    cout << "Enter time of arival(Minutes): ";
    cin >> arivalTimeMinutues;

    TotalminutesStart = (startTimeHours * 60) + startTimeMinutes;

    TotalminutesArival = (arivalTimeHour * 60) + arivalTimeMinutues;

    resultantMinutes = TotalminutesStart - TotalminutesArival;
    cout<<"RM:"<<resultantMinutes<< endl;
    resultantHour = resultantMinutes / 60;
    cout<< resultantHour;
    minutes = resultantMinutes % 60;
    cout<<"M: "<<minutes<<endl;

    if (resultantHour > 0 )
    {
        cout<<"Early"<<endl<<resultantHour <<" : "<< minutes<<" before start" ;
    }

    if (resultantHour == 0 )
    {
        if (minutes == 0)
        {
            cout<< "On time.";
        }

        else if (minutes > 0 && minutes <=30 )
        {
            cout<<"On time "<< minutes <<" minutes before start."<<endl;
        }

        else if(minutes > 0 && minutes>30)
        {
            cout<<"Early "<<endl<< minutes <<" minutes before start."<< endl;
        }

        else if (minutes < 0)
        {
            cout<<"Late"<<endl <<-1 * minutes <<" minutes after start."<<endl;
        }
    }

    else if (resultantHour < 0 )
    {
        cout<<"Late"<<endl<<-1*resultantHour <<" : "<<-1*minutes<<" after start";
    }
    
}