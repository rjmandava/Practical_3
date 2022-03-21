//a1739139

#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include<iostream>
#include "Player.h"

class PaperDoll :public Player
{
public:
    PaperDoll();
    char makeMove();
};

#endif
