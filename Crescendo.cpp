//a1739139

#include <iostream>
#include "Computer.h"
#include "Crescendo.h"

using namespace std;

Crescendo::Crescendo()
{
}

char Crescendo::makeMove()
{
    char cresArray[3] = {'P','S','R'};
    int cresIndex = 0;
    char cresMove = cresArray[cresIndex];
   
    if (cresIndex < 3)
    {
        cresIndex++;
    }
    else
    {
        cresIndex = 0;
    }
    
    return cresMove;
}
