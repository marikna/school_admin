//
// Created by Marysia Knapczyk on 11/12/2023.
//

#pragma once
#include "SchoolWorker.h"

#define KOSZT_PRZYCHODU 111.25

class Admin : public SchoolWorker
{
public:
    Admin( string sName = "", int nAge = 0, double nSalary = 0, int nSeniority = 0, string nPosition = "" ) noexcept;

    void setPosition( string newPosition);
    string getPosition() const;

    virtual void printWorker() override;

    virtual double Netto() const;
private:
    string m_Position;
};

//---------------------INLINE------------------

inline void Admin::setPosition( string newPosition )
{
    m_Position = newPosition;
}
inline string Admin::getPosition() const
{
    return m_Position;
}

inline void Admin::printWorker()
{
    cout << "Godnosc: " << getName() << ", wiek: " << getAge() << ", pensja: " << getSalary() <<" ,staz: "<< getSeniority() << ", stanowisko : "<< m_Position << endl;
}