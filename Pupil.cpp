//
// Created by Marysia Knapczyk on 04/12/2023.
//

#include "Pupil.h"

int Pupil::m_baseID = 10000;


Pupil::Pupil(string name, int age, string className) noexcept : Person( name, age )
{
    m_ID = "ID" + to_string(m_baseID++);
    setPerson( name, age );
    m_ClassName = className;
    m_Ave = 0.0;
    clearNotes();
}

Pupil:: ~Pupil() { }

double Pupil::calcAve()
{
    double sum = 0.0;
    int count = 0;
    for ( int i = POLSKI; i < MAXSUBJECTS; ++i )
    {
        if ( m_Notes[i] > 1 )
        {
            sum += m_Notes[i];
            count++;
        }
    }
    return m_Ave = ( count > 0 ) ? sum / count : 0.0;
}



void Pupil::setNote(Subjects subject, double note)
{
    if (note >= 2.0 && note <= 5.0)
    {
        m_Notes[subject] = note;
    }
    else
    {
        m_Notes[subject] = 0.0;
    }
}


void Pupil::printPupil()
{
    cout << getID() << ' ' << getName() << " (" << getClassName() << "), " << getAge() << "lat ";
    cout << " average= " << calcAve() << endl;
    printOutfit();
}

