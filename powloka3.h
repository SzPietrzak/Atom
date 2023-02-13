#ifndef POWLOKA3_H
#define POWLOKA3_H
#include "powloka2.h"
class powloka3 : public powloka2
{
    protected:
/*=====================================================================================
Lista dostepnych orbitali dla trzeciej powloki elektronowej w atomie.
Ze wzgledu na mozliwosc nazwenictwa zmiennych - nazwy orbitali zostaja odwrocone.
  =====================================================================================*/
        int maxS3 = 2;
        int maxP3 = 6;
        int maxD3 = 10;
        int s3=0;
        int p3=0;
        int d3=0;
        void setS3(int liczbaAtomowa){s3=liczbaAtomowa;}
        void setP3(int liczbaAtomowa){p3=liczbaAtomowa;}
        void setD3(int liczbaAtomowa){d3=liczbaAtomowa;}
    public:
        powloka3(int liczbaAtomowa);
        ~powloka3(){}
        int getS3(){return s3;}
        int getP3(){return p3;}
        int getD3(){return d3;}
};
#endif // POWLOKA3_H
