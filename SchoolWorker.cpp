//
// Created by Marysia Knapczyk on 11/12/2023.
//

#include "SchoolWorker.h"


SchoolWorker::SchoolWorker( string sName, int nAge, double nSalary, int nSenority )
{
    setPerson( sName, nAge );
    setSalary(nSalary);
    setSeniority(nSenority);
}

SchoolWorker::SchoolWorker( const SchoolWorker& s )
{
    *this = s;
}

SchoolWorker& SchoolWorker::operator = (const SchoolWorker& s)
{
    setPerson( s.getName(), s.getAge() );
    setSalary( s.getSalary() );
    return *this;
}



