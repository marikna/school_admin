//
// Created by Marysia Knapczyk on 04/12/2023.
//

#include "Person.h"

Person::Person(string name , int age ) noexcept //dokonczyc
{
    setPerson( name, age );
}

Person:: ~Person() { }

void Person::setPerson(string name, int age)
{
    setName(name);
    setAge(age);
}