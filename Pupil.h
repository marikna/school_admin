//
// Created by Marysia Knapczyk on 04/12/2023.
//

#pragma once
#include "Person.h"

typedef enum { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI } Subjects;
// enum Subjects { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI };

#define MAXSUBJECTS NIEMIECKI+1     //ostatni+1, nie dopisuje po niemieckim


class Pupil: public Person
{
public:
    Pupil( string name = "", int age = 0, string className = "") noexcept;
    virtual ~Pupil();

    void setClassName( string newClassName );
    string getClassName();
    string getID() const;

    void clearNotes();
    double calcAve();
    double getAve();
    void setNote( Subjects subject, double note );  //ma byc ocena w zakrsie 2-5
    void printPupil();
    virtual void printOutfit() {}; //ewentualnie metoda czytsa czyli () = 0 i nie mozna zrobic Pupil p1;
protected:
    string m_ID;
private:
    string m_ClassName;
    double m_Ave;
    double m_Notes[MAXSUBJECTS];
    static int    m_baseID; //pole nie jest powielane-jest na zewnatrz, jedno wspolne
};

//-------------------INLINE---------------------

inline void Pupil::setClassName(string newClassName)
{
    m_ClassName = newClassName;
}

inline string Pupil::getClassName()
{
    return m_ClassName;
}

inline string Pupil::getID() const
{
    return m_ID;
}

inline void Pupil::clearNotes()
{
    for (int i = 0; i < MAXSUBJECTS; ++i)
    {
        m_Notes[i] = 0.0;
    }
}

inline double Pupil::getAve()
{
    return m_Ave;
}