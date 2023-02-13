#ifndef POWLOKA7_H
#define POWLOKA7_H
#include "powloka6.h"
class powloka7 : public powloka6
{
    protected:
/*=====================================================================================
Lista dostepnych orbitali dla szostej powloki elektronowej w atomie.
Ze wzgledu na mozliwosc nazwenictwa zmiennych - nazwy orbitali zostaja odwrocone.
  =====================================================================================*/
        int maxS7 = 2;
        int maxP7 = 6;
        int maxD7 = 10;
        int maxF7 = 14;
        int maxG7 = 18;
        int maxH7 = 22;
        int maxI7 = 26;
        int s7=0;
        int p7=0;
        int d7=0;
        int f7=0;
        int g7=0;
        int h7=0;
        int i7=0;
        void setS7(int liczbaAtomowa){s7=liczbaAtomowa;}
        void setP7(int liczbaAtomowa){p7=liczbaAtomowa;}
        void setD7(int liczbaAtomowa){d7=liczbaAtomowa;}
        void setF7(int liczbaAtomowa){f7=liczbaAtomowa;}
        void setG7(int liczbaAtomowa){g7=liczbaAtomowa;}
        void setH7(int liczbaAtomowa){h7=liczbaAtomowa;}
        void setI7(int liczbaAtomowa){i7=liczbaAtomowa;}
    public:
        powloka7(int liczbaAtomowa);
        ~powloka7(){}
        int getS7(){return s7;}
        int getP7(){return p7;}
        int getD7(){return d7;}
        int getF7(){return f7;}
        int getG7(){return g7;}
        int getH7(){return h7;}
        int getI7(){return i7;}
};
#endif // POWLOKA7_H
