#include "powloka4.h"
powloka4::powloka4(int liczbaAtomowa): powloka3::powloka3(18)
{
    if (liczbaAtomowa == 46)
    {
        s4 = 2, p4 = 6, d4 = 10, f4 = 0;
    }
    else if (liczbaAtomowa == 24)
    {
        s1 = 2, s2 = 2, s3 = 2, s4 = 1, p2 = 6, p3 = 6, d3 = 5, p4 = 0, d4 = 0, f4 = 0;
    }
    else if (liczbaAtomowa == 29)
    {
        s1 = 2, s2 = 2, s3 = 2, s4 = 1, p2 = 6, p3 = 6, d3 = 10, p4 = 0, d4 = 0, f4 = 0;
    }
    else if (liczbaAtomowa > (18+maxS4+maxD3+maxP4))
    {
        cout << "nie mozna stworzyc takiej konfiguracji na tej powloce! Popraw dane!" << endl;
        s1=0 , s2 = 0, p2 = 0, s3 = 0, p3 = 0, d3 = 0, s4 = 0, p4 = 0, d4 = 0, f4 = 0;
    }
    else if (liczbaAtomowa > (10+maxS3+maxP3))
    {
        liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2()-getS3()-getP3();
        s4 = liczbaAtomowa > maxS4 ? maxS4 : liczbaAtomowa;
        liczbaAtomowa -= powloka4::getS4();
        if (liczbaAtomowa < 0)
        {
            powloka3::setD3(0);
            p4 = 0, f4 = 0;
        }
        else if (liczbaAtomowa <= maxD3)
        {
            powloka3::setD3(liczbaAtomowa);
            p4 = 0, d4=0, f4 = 0;
        }
        else if (liczbaAtomowa <= (maxD3+maxS4+maxP4))
        {
            powloka3::setD3(maxD3);
            liczbaAtomowa -= powloka3::getD3();
            p4 = liczbaAtomowa > 0 ? liczbaAtomowa : 0;
            d4 = 0, f4 = 0;
        }
    }
    else if (liczbaAtomowa <= 0)
    {
        cout << "czy na pewno chcesz stworzyc konfigurajce bez elektronow?" << endl;
        powloka1::setS1(0);
        powloka2::setS2(0);
        powloka2::setP2(0);
        powloka3::setS3(0);
        powloka3::setP3(0);
        powloka3::setD3(0);
        s4 = 0, p4 = 0, f4 = 0;
    }
    else
    {
        cout << "konfiguracja jest za mala na stworzenie 4 powlok! Popraw dane!" << endl;
        powloka1::setS1(0);
        powloka2::setS2(0);
        powloka2::setP2(0);
        powloka3::setS3(0);
        powloka3::setP3(0);
        powloka3::setD3(0);
        s4 = 0, p4 = 0, f4 = 0;
    }
}
