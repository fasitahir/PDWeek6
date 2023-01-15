#include <iostream>
using namespace std;

float bill(string day , string fruit , float quantity);

main()
{
    string day , fruit ;
    float quantity;
    float result;

    cout<<"Enter Day: ";
    cin>> day;

    cout<<"Enter Fruit: ";
    cin>> fruit;

    cout<<"Enter Quantity: ";
    cin>> quantity;

    result = bill( day , fruit , quantity);
    cout<<"Total Bill is: "<<result;

}

float bill(string day , string fruit , float quantity)
{
    float result;
    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if(fruit == "banana")
        {
            result =  2.50 * quantity; 
        }

        else if(fruit == "apple")
        {
            result =  1.20 * quantity; 
        }

        else if(fruit == "orange")
        {
            result =  0.85 * quantity; 
        }

        else if(fruit == "grapefruit")
        {
            result =  1.45 * quantity; 
        }

        else if(fruit == "kiwi")
        {
            result =  2.70 * quantity; 
        }

        else if(fruit == "pineapple")
        {
            result =  5.50 * quantity; 
        }

        else if(fruit == "grapes")
        {
            result =  3.85 * quantity; 
        }
        
    }
    else if(day == "Sunday" || day == "Saturday" )
    {
        if(fruit == "banana")
        {
            result =  2.70 * quantity; 
        }

        else if(fruit == "apple")
        {
            result =  1.25 * quantity; 
        }

        else if(fruit == "orange")
        {
            result =  0.90 * quantity; 
        }

        else if(fruit == "grapefruit")
        {
            result =  1.60 * quantity; 
        }

        else if(fruit == "kiwi")
        {
            result =  3.00 * quantity; 
        }

        else if(fruit == "pineapple")
        {
            result =  5.60 * quantity; 
        }

        else if(fruit == "grapes")
        {
            result =  4.20 * quantity; 
        }
        
    }

    else
    {
        cout<<"Error"<<endl;
    }
    return result;
}


