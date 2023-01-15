#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printMaze();
void printPacman(int x, int y);
void remove(int x, int y, char previous); // for ghosts
void removeP(int x , int y); //for pacman
void printGhost(int x, int y);
void printGhost2(int x, int y);

main()
{
    int x = 3;
    int y = 3;
    int gx = 1;
    int gy = 1;
    int gx2 = 1;
    int gy2 = 1;

    bool play = true;
    char nextposition;
    char previous = ' ';
    string direction = "right";
    string direction2 = "up";

    gotoxy(x, y);
    system("cls");
    printMaze();
    printPacman(x, y);
    printGhost(gx, gy);
    printGhost2(gx2, gy2);

    while (play)
    {

        // PacMan Move Functionality
        if (GetAsyncKeyState(VK_RIGHT))
        {
            nextposition = getCharAtxy(x + 1, y);
            if ((nextposition == ' ') || (nextposition == '.'))
            {
                removeP(x, y);
                x = x + 1;
                printPacman(x, y);
            }
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            nextposition = getCharAtxy(x - 1, y);
            if ((nextposition == ' ') || (nextposition == '.'))
            {
                removeP(x, y);
                x = x - 1;
                printPacman(x, y);
            }
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            nextposition = getCharAtxy(x, y + 1);
            if ((nextposition == ' ') || (nextposition == '.'))
            {
                removeP(x, y);
                y = y + 1;
                printPacman(x, y);
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            nextposition = getCharAtxy(x, y - 1);
            if ((nextposition == ' ') || (nextposition == '.'))
            {
                removeP(x, y);
                y = y - 1;
                printPacman(x, y);
            }
        }
        // Ghost move functionality
        if (direction == "right")
        {
            nextposition = getCharAtxy(gx + 1, gy);
            if (nextposition == ' ' || nextposition == '.')
            {
                remove(gx, gy, previous);
                gx = gx + 1;
                previous = nextposition;
                printGhost(gx, gy);
            }
            else if (nextposition == '*' || nextposition == '%' || nextposition == '|')
            {
                direction = "left";
            }
        }

        if (direction == "left")
        {
            nextposition = getCharAtxy(gx - 1, gy);

            if (nextposition == ' ' || nextposition == '.')
            {
                remove(gx, gy, previous);
                gx = gx - 1;
                previous = nextposition; // for keeping pallets save
                printGhost(gx, gy);
            }

            else if (nextposition == '*' || nextposition == '%' || nextposition == '|')
            {
                direction = "right";
            }
        }

        // for 2nd ghost.

        if (direction2 == "up")
        {
            nextposition = getCharAtxy(gx2, gy2 - 1);
            if (nextposition == ' ' || nextposition == '.')
            {
                remove(gx2, gy2, previous);
                gy2 = gy2 - 1;
                previous = nextposition;
                printGhost2(gx2, gy2);
            }
            else if (nextposition == '*' || nextposition == '%' || nextposition == '|')
            {
                direction2 = "down";
            }
        }

        if (direction2 == "down")
        {
            nextposition = getCharAtxy(gx2, gy2 + 1);

            if (nextposition == ' ' || nextposition == '.')
            {
                remove(gx2, gy2, previous);
                gy2 = gy2 + 1;
                previous = nextposition; // for keeping pallets save
                printGhost2(gx2, gy2);
            }

            else if (nextposition == '*' || nextposition == '%' || nextposition == '|')
            {
                direction2 = "up";
            }
        }

        Sleep(200);
    }
}

void printPacman(int x, int y)
{
    gotoxy(x, y);

    cout << "P";
}

void printGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}

void printGhost2(int x, int y)
{
    gotoxy(x+2, y + 22);

    cout << "G";
}

void printMaze()
{
    cout << "########################################################################" << endl;
    cout << "||.. .......................................................  ......  ||" << endl;
    cout << "||.. %%%%%%%%%%%%%%%%%         ...    %%%%%%%%%%%%%%   |%|..   %%%%   ||" << endl;
    cout << "||..      |%|    |%|        |%|...    |%|       |%|    |%|..    |%|   ||" << endl;
    cout << "||..      |%|    |%|        |%|...    |%|       |%|    |%|..    |%|   ||" << endl;
    cout << "||..      %%%%%%%%%%%       |%|...    %%%%%%%%%%%%%            %%%%   ||" << endl;
    cout << "||..      |%|               |%|...   ..............   |%| ..          ||" << endl;
    cout << "||..      %%%%%%%%%%%       |%|...                    |%| ..   %%%%   ||" << endl;
    cout << "||..               |%|                %%%%%%%%%%%     |%| ..    |%|   ||" << endl;
    cout << "||..               |%|                |%|.....            ..          ||" << endl;
    cout << "||.                |%|                |%|.....|%|         ..|%|       ||" << endl;
    cout << "||..|%|   |%|%%|%|        |%|            .....|%|           |%|       ||" << endl;
    cout << "||..|%|   |%|  |%|        %%%%%%%%%%%%%  .....|%|           |%|       ||" << endl;
    cout << "||..|%|   |%|  |%|                   |%|    %%%%%           |%|       ||" << endl;
    cout << "||..|%|                              |%|              |%| ..|%|       ||" << endl;
    cout << "||..|%|   %%%%%%%%%%%%               |%|%%%%%%%%      |%| ..|%|%%%%   ||" << endl;
    cout << "||..................................................  |%| .........   ||" << endl;
    cout << "||   ...............................................                  ||" << endl;
    cout << "||..|%|   |%|  |%|..   %%%%%%%%%%%%          |%|      |%|  ..|%|      ||" << endl;
    cout << "||..|%|   |%|  |%|..            |%|     %%%%%%%%      |%|  ..|%|      ||" << endl;
    cout << "||..|%|            .            |%|                   |%|  ..|%|      ||" << endl;
    cout << "||..|%|   %%%%%%%%%%%           |%|%%%%%%%%%%         |%|  ..|%|%%%   ||" << endl;
    cout << "||..................................................  |%| .........   ||" << endl;
    cout << "||  ................................................         ......   ||" << endl;
    cout << "########################################################################";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufsize;
    coordBufsize.X = 1;
    coordBufsize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void remove(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}

void removeP(int x , int y )
{
    gotoxy(x , y);
    cout << ' ';
}