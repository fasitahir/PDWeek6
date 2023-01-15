#include<iostream>
using namespace std;
float totalmarks(float English , float maths ,float Chemistry , float , float Biology);
string grade(float percentage);


main()
{
    float English , Maths , Chemistry ,Science , Biology ;
    float percentage;
    string result , name;

    cout<<"What is your name: ";
    cin>> name;

    cout<<"Enter Marks in English: ";
    cin>>English;

    cout<<"Enter Marks in Maths : ";
    cin>>Maths;

    cout<<"Enter Marks in Chemisty: ";
    cin>>Chemistry;

    cout<<"Enter Marks in Science : ";
    cin>>Science;

    cout<<"Enter Marks in Biology: ";
    cin>>Biology;
    percentage = totalmarks( English ,  Maths , Chemistry , Science , Biology  );
    result =  grade( percentage);

    cout<< "Name: "<<name<<endl;;
    cout<<"Percentage is: "<< percentage<<endl;
    cout<<"Grade is: "<<result<<endl;
    
}
float totalmarks(float English , float Maths ,float Chemistry , float Science , float Biology)
{
    float marks , percentage; 
    marks = English + Maths + Chemistry + Science  + Biology ;

    percentage = (marks * 100)/500;
    return percentage;
}

string grade(float percentage) 
{
    string result;
    if(percentage >= 90 && percentage <=100 )
    {
        result = "A+";
    }

    else if(percentage >= 80 && percentage <90)
    {
        result = "A";
    }

    else if(percentage >= 70 && percentage <80)
    {
        result = "B+";
    }

    else if(percentage >= 60 && percentage <70)
    {
        result = "B";
    }

    else if(percentage >= 50 && percentage <60)
    {
        result = "C";
    }

    else if(percentage >= 40 && percentage <50)
    {
        result = "D";
    }

    else if(percentage <40)
    {
        result = "F";
    }

    return result;
}
