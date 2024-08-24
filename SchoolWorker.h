//
// Created by Marysia Knapczyk on 11/12/2023.
//

#pragma once
#include "Person.h"
#define DODATEK 400
#define PODATEK 0.18
#define KOSZTY 111.25
#define KWOTA_WOLNA 556.02
using namespace std;

class SchoolWorker : public Person
{
public:
    SchoolWorker( string sName = "", int nAge = 0, double nSalary = 0, int nSenority = 0);
    SchoolWorker( const SchoolWorker& s );
    SchoolWorker& operator = (const SchoolWorker& s);

    void setSalary( double nSalary );
    double getSalary() const;
    void setSeniority( int nSeniority );
    int getSeniority() const;
    virtual void printWorker() = 0;
private:
    double m_nSalary;
    int m_nSeniority;
    bool m_isSupervisor;
};

//---------------------INLINE------------------

inline void SchoolWorker::setSalary( double nSalary )
{
    m_nSalary = nSalary;
}

inline double SchoolWorker::getSalary() const
{
    return m_nSalary;
}

inline void SchoolWorker::setSeniority( int nSeniority )
{
    m_nSeniority = nSeniority;
}

inline int SchoolWorker::getSeniority() const
{
    return m_nSeniority;
}