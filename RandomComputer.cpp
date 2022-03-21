//a1739139

#include "RandomComputer.h"
#include <cstdlib>
#include <time.h>

RandomComputer::RandomComputer()
{
}

char RandomComputer::makeMove()
{
    srand(time(NULL));
    int randmove=rand()%3;
    if(randmove==0){
        input='R';
    }
    else if(randmove==1){
        input='P';
    }
    else{
        input='S';
    }
    return input;
}
