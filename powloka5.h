#ifndef POWLOKA5_H
#define POWLOKA5_H
#include "powloka4.h"
class powloka5 : public powloka4
{
    protected:
/*=====================================================================================
Lista dostepnych orbitali dla piatej powloki elektronowej w atomie.
Ze wzgledu na mozliwosc nazwenictwa zmiennych - nazwy orbitali zostaja odwrocone.
  =====================================================================================*/
        int maxS5 = 2;
        int maxP5 = 6;
        int maxD5 = 10;
        int maxF5 = 14;
        int maxG5 = 18;
        int s5=0;
        int p5=0;
        int d5=0;
        int f5=0;
        int g5=0;
        void setS5(int liczbaAtomowa){s5=liczbaAtomowa;}
        void setP5(int liczbaAtomowa){p5=liczbaAtomowa;}
        void setD5(int liczbaAtomowa){d5=liczbaAtomowa;}
        void setF5(int liczbaAtomowa){f5=liczbaAtomowa;}
        void setG5(int liczbaAtomowa){g5=liczbaAtomowa;}
    public:
        powloka5(int liczbaAtomowa);
        ~powloka5(){}
        int getS5(){return s5;}
        int getP5(){return p5;}
        int getD5(){return d5;}
        int getF5(){return f5;}
        int getG5(){return g5;}
};
#endif // POWLOKA5_H
