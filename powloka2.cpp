#include "powloka2.h"
powloka2::powloka2(int liczbaAtomowa): powloka1::powloka1(2)
{
    if (liczbaAtomowa > (2+maxS2+maxP2))
    {
        cout << "nie mozna stworzyc takiej konfiguracji na tej powloce! Popraw dane!" << endl;
        s1=0 , s2 = 0, p2 = 0;
    }
    else if (liczbaAtomowa > maxS1)
    {
        liczbaAtomowa -= powloka1::getS1();
        s2 = liczbaAtomowa > maxS2 ? maxS2 : liczbaAtomowa;
        liczbaAtomowa -= powloka2::getS2();
        p2 = liczbaAtomowa > 0 ? liczbaAtomowa : 0;
    }
    else if (liczbaAtomowa <= 0)
    {
        cout << "czy na pewno chcesz stworzyc konfigurajce bez elektronow?" << endl;
        powloka1::setS1(0);
        s2 = 0, p2 = 0;
    }
    else
    {
        cout << "konfiguracja jest za mala na stworzenie 2 powlok! Popraw dane!" << endl;
        powloka1::setS1(0);
        s2 = 0, p2 = 0;
    }
}
