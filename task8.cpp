#include <iostream>
using namespace std;

string is_inside(int h , int x , int y);

main() 
{
    while(true)
    {
    int h, x, y;
    cout << "Enter value for h: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    cout << is_inside(h, x, y) << endl;
    }
}

string is_inside(int h , int x , int y)
{
    string result;
    if((x > h && x < 2*h)&&(y < 4 * h && y > 0))
    {
        result ="Inside";
    }
    
    else if(((x < h || x > 2 * h)||(y > 4* h || y < 0)) && (y != 0))    
    {
        result = "Outside";
        
    }
    else 
    {
        result = "Border";
    }
 
    return result;
}



