#include "powloka1.h"


powloka1::powloka1(int liczbaAtomowa)
{
    if (liczbaAtomowa > maxS1)
    {
        cout << "nie mozna stworzyc takiej konfiguracji na tej powloce! Popraw dane!" << endl;
        s1 = 0;
    }
    else if (liczbaAtomowa <= 0)
    {
        cout << "czy na pewno chcesz stworzyc konfigurajce bez elektronow?" << endl;
        s1 = 0;
    }
    else
    s1 = liczbaAtomowa;
}
