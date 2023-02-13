#ifndef POWLOKA4_H
#define POWLOKA4_H
#include "powloka3.h"
class powloka4 : public powloka3
{
    protected:
/*=====================================================================================
Lista dostepnych orbitali dla czwartej powloki elektronowej w atomie.
Ze wzgledu na mozliwosc nazwenictwa zmiennych - nazwy orbitali zostaja odwrocone.
  =====================================================================================*/
        int maxS4 = 2;
        int maxP4 = 6;
        int maxD4 = 10;
        int maxF4 = 14;
        int s4=0;
        int p4=0;
        int d4=0;
        int f4=0;
        void setS4(int liczbaAtomowa){s4=liczbaAtomowa;}
        void setP4(int liczbaAtomowa){p4=liczbaAtomowa;}
        void setD4(int liczbaAtomowa){d4=liczbaAtomowa;}
        void setF4(int liczbaAtomowa){f4=liczbaAtomowa;}
    public:
        powloka4(int liczbaAtomowa);
        ~powloka4(){}
        int getS4(){return s4;}
        int getP4(){return p4;}
        int getD4(){return d4;}
        int getF4(){return f4;}
};
#endif // POWLOKA4_H
