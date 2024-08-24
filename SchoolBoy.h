//
// Created by Marysia Knapczyk on 11/12/2023.
//

#pragma once
#include "Pupil.h"
class SchoolBoy: public Pupil
{
public:
    SchoolBoy( string name, int age, string ClassName ) noexcept;
    virtual void printOutfit() final;   //nie mozna nadpisac w klasie pochodnej
};
