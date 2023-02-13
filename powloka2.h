#ifndef POWLOKA2_H
#define POWLOKA2_H
#include "powloka1.h"

class powloka2 : public powloka1
{
    protected:
/*=====================================================================================
Lista dostepnych orbitali dla drugiej powloki elektronowej w atomie.
Ze wzgledu na mozliwosc nazwenictwa zmiennych - nazwy orbitali zostaja odwrocone.
  =====================================================================================*/
        int maxS2 = 2;
        int maxP2 = 6;
        int s2=0;
        int p2=0;
        void setS2(int liczbaAtomowa){s2=liczbaAtomowa;}
        void setP2(int liczbaAtomowa) {p2=liczbaAtomowa;}
    public:
        powloka2(int liczbaAtomowa);
        ~powloka2(){}
        int getS2(){return s2;}
        int getP2(){return p2;}
};

#endif // POWLOKA2_H
