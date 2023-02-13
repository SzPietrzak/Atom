#ifndef POWLOKA6_H
#define POWLOKA6_H
#include "powloka5.h"
class powloka6 : public powloka5
{
    protected:
/*=====================================================================================
Lista dostepnych orbitali dla szostej powloki elektronowej w atomie.
Ze wzgledu na mozliwosc nazwenictwa zmiennych - nazwy orbitali zostaja odwrocone.
  =====================================================================================*/
        int maxS6 = 2;
        int maxP6 = 6;
        int maxD6 = 10;
        int maxF6 = 14;
        int maxG6 = 18;
        int maxH6 = 22;
        int s6=0;
        int p6=0;
        int d6=0;
        int f6=0;
        int g6=0;
        int h6=0;
        void setS6(int liczbaAtomowa){s6=liczbaAtomowa;}
        void setP6(int liczbaAtomowa){p6=liczbaAtomowa;}
        void setD6(int liczbaAtomowa){d6=liczbaAtomowa;}
        void setF6(int liczbaAtomowa){f6=liczbaAtomowa;}
        void setG6(int liczbaAtomowa){g6=liczbaAtomowa;}
        void setH6(int liczbaAtomowa){h6=liczbaAtomowa;}
    public:
        powloka6(int liczbaAtomowa);
        ~powloka6(){}
        int getS6(){return s6;}
        int getP6(){return p6;}
        int getD6(){return d6;}
        int getF6(){return f6;}
        int getG6(){return g6;}
        int getH6(){return h6;}
};
#endif // POWLOKA6_H
