//
// Created by Marysia Knapczyk on 04/12/2023.
//

#pragma once
#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
    Person( string name = "", int age = 0 ) noexcept; //nie mozna rzucac wyjatkiem
    virtual ~Person();
    Person& operator = ( const Person& z ) = default;
    void setName(string newName);
    void setAge( int newAge );
    void setPerson( string name, int age );

    string getName() const;
    int getAge() const;
private:
    string m_Name;
    int     m_Age;
};


//-------------------INLINE---------------------

inline void Person::setName(string newName)
{
    m_Name = newName;
}

inline void Person::setAge(int newAge)
{
    m_Age = newAge;
}

inline string Person::getName() const
{
    return m_Name;
}

inline int Person::getAge() const
{
    return m_Age;
}