//a1739139

#include <iostream>
#include "Computer.h"
#include "FistfullODollars.h"

using namespace std;

FistfullODollars::FistfullODollars()
{
}

char FistfullODollars::makeMove()
{
    char ffodArray[3] = {'R','P','P'};
    int ffodIndex = 0;
    char ffodMove = ffodArray[ffodIndex];
   
    if (ffodIndex < 3)
    {
        ffodIndex++;
    }
    else
    {
        ffodIndex = 0;
    }
    
    return ffodMove;
}

