//
// Created by Marysia Knapczyk on 11/12/2023.
//

#pragma once
#include "Pupil.h"
using namespace std;

class SchoolGirl : public Pupil
{
public:
    SchoolGirl( string name, int age, string ClassName ) noexcept;
    virtual void printOutfit() final;   //lub void printoutfit() override
};
