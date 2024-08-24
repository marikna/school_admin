//
// Created by Marysia Knapczyk on 11/12/2023.
//

#pragma once
#include "SchoolWorker.h"

class Teacher : public SchoolWorker
{
public:
    Teacher( string sName = "", int nAge = 0, bool isSupervisor = 0, string strClass = NULL, string strSubject = "Polski", int nSalary=0, int nSeniority=0 );
    Teacher& operator = ( const Teacher& t );

    string getClass() const;
    string getSubject() const;
    bool getSupervisor() const;

    void setSupervisor( bool sup );
    void setClass( string strClass );
    void setSubject( string strSubject );
    virtual double Netto() const ;
    virtual void printWorker() override;
private:
    bool m_isSupervisor;
    string m_strClass;
    string m_strSubject;
};

//---------------------INLINE-------------------


inline string Teacher::getClass() const
{
    return m_strClass;
}

inline string Teacher::getSubject() const
{
    return m_strSubject;
}

inline bool Teacher::getSupervisor() const
{
    return m_isSupervisor;
}


inline void Teacher::setSupervisor(bool sup)
{
    m_isSupervisor = sup ;
}

inline void Teacher::setClass( string strClass )
{
    m_strClass = strClass;
}


inline void Teacher::setSubject( string strSubject )
{
    m_strSubject = strSubject;
}

inline void Teacher::printWorker()
{
    cout << "Godnosc: " << getName() << ", wiek: " << getAge() << ", wychowawca: " << m_isSupervisor << ", klasy: " << m_strClass << ", przedmiotu: " << getSubject() << ", pensja: " << Netto()  << endl;
}