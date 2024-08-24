#include <iostream>
#include "Pupil.h"
#include "SchoolGirl.h"
#include "SchoolBoy.h"
#include "Admin.h"
#include "SchoolWorker.h"
#include "SchoolTeacher.h"

using namespace std;

#define MAXPUPIL 9
#define MAXTEACHER 6
#define MAXADMIN 3
void printPupils( Pupil** tab, int PupilNo );
void sortPupils( Pupil** tab, int PupilNo );
void printWorkers( SchoolWorker** tab, int WorkerNo );


int main()
{
    Pupil* Pupils[MAXPUPIL] = { NULL };
    Pupil* v = NULL;

    Pupils[0] = v = new SchoolGirl( "Maria Trak", 14, "8d" );
    v->setNote( POLSKI ,3 );
    v->setNote( MATEMATYKA, 4.5 );
    v->setNote( FIZYKA, 4 );
    v->setNote( CHEMIA, 4 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4.5 );
    v->setNote( NIEMIECKI, 3.5 );

    Pupils[1] = v = new SchoolGirl( "Agnieszka Wcisło", 9, "3b" );
    v->setNote( POLSKI ,3 );
    v->setNote( MATEMATYKA, 4.5 );
    v->setNote( FIZYKA, 4 );
    v->setNote( CHEMIA, 4 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4.5 );
    v->setNote( NIEMIECKI, 3.5 );

    Pupils[2] = v = new SchoolBoy( "Dariusz Tyka", 110, "4a" );
    v->setNote( POLSKI ,3 );
    v->setNote( MATEMATYKA, 4.5 );
    v->setNote( FIZYKA, 4 );
    v->setNote( CHEMIA, 4 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4.5 );
    v->setNote( NIEMIECKI, 3.5 );

    Pupils[3] = v = new SchoolBoy( "Karol Malinowski", 10, "4c" );
    v->setNote( POLSKI ,3 );
    v->setNote( MATEMATYKA, 4.5 );
    v->setNote( FIZYKA, 4 );
    v->setNote( CHEMIA, 4 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4.5 );
    v->setNote( NIEMIECKI, 3.5 );

    Pupils[4] = v = new SchoolGirl( "Matylda Piszczek", 8, "2b" );
    v->setNote( POLSKI ,3 );
    v->setNote( MATEMATYKA, 4.5 );
    v->setNote( FIZYKA, 4 );
    v->setNote( CHEMIA, 4 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4.5 );
    v->setNote( NIEMIECKI, 3.5 );

    Pupils[5] = v = new SchoolBoy( "Jan Kochan", 15, "8a" );
    v->setNote( POLSKI ,3 );
    v->setNote( MATEMATYKA, 4.5 );
    v->setNote( FIZYKA, 4 );
    v->setNote( CHEMIA, 4 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4.5 );
    v->setNote( NIEMIECKI, 3.5 );

    Pupils[6] = v = new SchoolGirl( "Malwina Duc", 13, "7b" );
    v->setNote( POLSKI ,3 );
    v->setNote( MATEMATYKA, 4.5 );
    v->setNote( FIZYKA, 4 );
    v->setNote( CHEMIA, 4 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4.5 );
    v->setNote( NIEMIECKI, 3.5 );

    Pupils[7] = v = new SchoolBoy( "Kamil Tluszcz", 12, "4b" );
    v->setNote( POLSKI ,3 );
    v->setNote( MATEMATYKA, 4.5 );
    v->setNote( FIZYKA, 4 );
    v->setNote( CHEMIA, 4 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4.5 );
    v->setNote( NIEMIECKI, 3.5 );

    Pupils[8] = v = new SchoolGirl( "Kasia Ala", 12, "4b" );

    printPupils(Pupils, 9);






    SchoolWorker* tabTeacher[MAXTEACHER];
    tabTeacher[0] = new Teacher( "Jan", 45, 1, "3d","Polski",5000, 25 );
    tabTeacher[1] = new Teacher( "Marek", 43, 0, "3c","Matematyka",5300, 22 );
    tabTeacher[2] = new Teacher( "Agnieszka", 50, 0, "1a","Angielski",5000, 30 );
    tabTeacher[3] = new Teacher( "Karol", 62, 1, "7b","Polski",5000, 40 );
    tabTeacher[4] = new Teacher( "Asia", 30, 0, "4d","Informatyka",5000, 5 );
    tabTeacher[5] = new Teacher( "Basia", 28, 1, "5d","Matematyka",5000, 2 );
    printWorkers(tabTeacher, 6);

    SchoolWorker* tabAdmin[MAXADMIN];
    tabAdmin[0] = new Admin( "Maciej",49,5000,7,"Elektryk" );
    tabAdmin[1] = new Admin( "Bartłomiej", 42, 3500, 10, "Sprzatacz" );
    tabAdmin[2] = new Admin( "Adam", 33, 3000, 2, "Sprzatacz" );
    printWorkers(tabAdmin, 3);










    return 0;
}


void printPupils(Pupil** tab, int PupilNo)
{
    for( int i=0; i<PupilNo; i++ )
    {
        tab[i]->printPupil();
        cout<< "\n";
    }
}

void printWorkers( SchoolWorker** tab, int WorkerNo )
{
    for( int i = 0; i < WorkerNo; i++ )
    {
        tab[i]->printWorker();
        cout << "\n\n";
    }
}

void sortPupils(Pupil** tab, int PupilNo)
{
    for( int i=1; i<PupilNo; i++ )
    {
        int j=i-1;
        Pupil* v = tab[i];
        while( j>=0 && v->getName() < tab[j]->getName() )
            tab[j+1] = tab[j--];
        tab[j+1] = v;
    }
}