//a1739139

#include <iostream>
#include "Computer.h"
#include "PaperDoll.h"

using namespace std;

PaperDoll::PaperDoll()
{
}

char PaperDoll::makeMove()
{
    char paperdollArray[3] = {'P','S','S'};
    int paperdollIndex = 0;
    char paperdollMove = paperdollArray[paperdollIndex];
   
    if (paperdollIndex < 3)
    {
        paperdollIndex++;
    }
    else
    {
        paperdollIndex = 0;
    }
    
    return paperdollMove;
}


