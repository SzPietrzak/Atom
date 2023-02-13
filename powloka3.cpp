#include "powloka3.h"
powloka3::powloka3(int liczbaAtomowa): powloka2::powloka2(10)
{
    if (liczbaAtomowa > (10+maxS3+maxP3))
    {
        cout << "nie mozna stworzyc takiej konfiguracji na tej powloce! Popraw dane!" << endl;
        s1=0 , s2 = 0, p2 = 0, s3 = 0, p3 = 0, d3 = 0;
    }
    else if (liczbaAtomowa > (2+maxS2+maxP2))
    {
        liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2();
        s3 = liczbaAtomowa > maxS3 ? maxS3 : liczbaAtomowa;
        liczbaAtomowa -= powloka3::getS3();
        p3 = liczbaAtomowa > 0 ? liczbaAtomowa : 0;
    }
    else if (liczbaAtomowa <= 0)
    {
        cout << "czy na pewno chcesz stworzyc konfigurajce bez elektronow?" << endl;
        powloka1::setS1(0);
        powloka2::setS2(0);
        powloka2::setP2(0);
        s3 = 0, p3 = 0;
    }
    else
    {
        cout << "konfiguracja jest za mala na stworzenie 3 powlok! Popraw dane!" << endl;
        powloka1::setS1(0);
        powloka2::setS2(0);
        powloka2::setP2(0);
        s3 = 0, p3 = 0;
    }
}
