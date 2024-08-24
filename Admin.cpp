//
// Created by Marysia Knapczyk on 11/12/2023.
//

#include "Admin.h"


Admin::Admin( string sName, int nAge, double nSalary, int nSeniority, string nPosition ) noexcept : SchoolWorker( sName, nAge, nSalary, nSeniority )
{
    setName( sName );
    setAge( nAge );
    setSalary( nSalary );
    setSeniority( nSeniority );
    setPosition( nPosition );

}

double Admin::Netto() const
{
    double netto;
    double salary = getSalary();
    double tax = (salary - KOSZT_PRZYCHODU) * 0.18 - KWOTA_WOLNA;
    netto = (tax < 0) ? salary : salary - tax;
    return netto;
}


