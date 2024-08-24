//
// Created by Marysia Knapczyk on 11/12/2023.
//

#include "SchoolBoy.h"

SchoolBoy::SchoolBoy( string name, int age, string ClassName ) noexcept : Pupil( name, age, ClassName )
{
    m_ID = "M_ " + m_ID;
}

void SchoolBoy::printOutfit()
{
    cout << "Biala lub niebieska koszulka z krawatem, szkolna marynarka, granatowe lub czarne spodnie, eleganckie obuwie." << endl;
}
