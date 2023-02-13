#ifndef POWLOKA1_H
#define POWLOKA1_H

using namespace std;
#include <iostream>

class powloka1
{
    protected:
/*=====================================================================================
Lista dostepnych orbitali dla pierwszej powloki elektronowej w atomie.
Ze wzgledu na mozliwosc nazwenictwa zmiennych - nazwy orbitali zostaja odwrocone.
  =====================================================================================*/
        int maxS1 = 2;
        int s1 = 0;
        void setS1(int liczbaAtomowa){s1=liczbaAtomowa;}
    public:
        powloka1(int liczbaAtomowa);
        ~powloka1(){}
        int getS1(){return s1;}
};
#endif // POWLOKA1_H
