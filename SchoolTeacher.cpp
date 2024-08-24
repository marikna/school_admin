//
// Created by Marysia Knapczyk on 11/12/2023.
//

#include "SchoolTeacher.h"

Teacher::Teacher( string sName, int nAge, bool isSupervisor, string strClass, string strSubject, int nSalary, int nSeniority )
{
    setPerson( sName, nAge);
    setSupervisor( isSupervisor );
    setClass( strClass );
    setSubject( strSubject );
}

Teacher& Teacher::operator = ( const Teacher& t )
{
    setPerson( t.getName(), t.getAge() );
    setSalary( t.getSalary() );
    setSeniority( t.getSeniority() );
    setSupervisor( t.getSupervisor() );
    setClass( t.getClass() );
    setSubject( t.getSubject() );
    return *this;
}


double Teacher::Netto() const
{
    double baseSalary = getSalary();
    double puzysku = (baseSalary * 0.8) * 0.5;
    double kuzysku = puzysku + ((baseSalary * 0.2) - puzysku);
    double dodatek = (getSeniority() >= 5 && getSeniority() <= 20) ? (getSeniority() / 100.0) * baseSalary : 0.0;

    double podatek = ((baseSalary + DODATEK) - kuzysku) * PODATEK - KWOTA_WOLNA;

    double pensja = baseSalary + DODATEK - podatek;

    if ( getSupervisor() )
        pensja += 400;

    return pensja;
}