//
// Created by Marysia Knapczyk on 11/12/2023.
//

#include "SchoolGirl.h"


SchoolGirl::SchoolGirl( string name, int age, string ClassName ) noexcept : Pupil( name, age, ClassName )
{
    m_ID = "F_ " + m_ID;
}

void SchoolGirl::printOutfit()
{
    cout << "Biala bluzka, szkolna marynarka, granatowa lub czarna spodniczka, plaskie obuwie." << endl;
}
