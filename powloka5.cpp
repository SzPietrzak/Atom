#include "powloka5.h"
powloka5::powloka5(int liczbaAtomowa): powloka4::powloka4(36)
{
    int testSwitch = 0;
    if (liczbaAtomowa <= 36)
    {
        testSwitch = 36;
    }
    else if (liczbaAtomowa <= 38)
    {
        testSwitch = 38;
    }
    else if (liczbaAtomowa == 41)
    {
        testSwitch = 41;
    }
    else if (liczbaAtomowa == 42)
    {
        testSwitch = 42;
    }
    else if (liczbaAtomowa <= 43)
    {
        testSwitch = 43;
    }
    else if (liczbaAtomowa == 44)
    {
        testSwitch = 44;
    }
    else if (liczbaAtomowa == 45)
    {
        testSwitch = 45;
    }
    else if (liczbaAtomowa == 46)
    {
        testSwitch = 46;
    }
    else if (liczbaAtomowa == 47)
    {
        testSwitch = 47;
    }
    else if (liczbaAtomowa <= 48)
    {
        testSwitch = 48;
    }
    else if (liczbaAtomowa <= 54)
    {
        testSwitch = 54;
    }
    else
        testSwitch = 55;
    switch (testSwitch)
    {
        case (36):
        {
            cout << "za mala konfiguracja dla 5 powlok" << endl;
            s1=0 , s2=0, p2=0, s3=0, p3=0, d3=0, s4=0, p4=0, d4=0, f4=0, s5=0, p5=0, d5=0, f5=0, g5=0;
            break;
        }
        case 38:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4();
            s5 = liczbaAtomowa>=maxS5 ? maxS5:liczbaAtomowa;
            break;
        }
        case 41:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 1, p2 = 6, p3 = 6, p4 =6, p5 = 0, d3 = 10, d4 = 4, d5 = 0, f4 = 0, f5 = 0;
            break;
        }
        case 42:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 1, p2 = 6, p3 = 6, p4 =6, p5 = 0, d3 = 10, d4 = 5, d5 = 0, f4 = 0, f5 = 0;
            break;
        }
        case 43:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4();
            s5 = maxS5;
            liczbaAtomowa -= s5;
            d4 = liczbaAtomowa>=maxD4 ? maxD4:liczbaAtomowa;
            break;
        }
        case 44:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 1, p2 = 6, p3 = 6, p4 =6, p5 = 0, d3 = 10, d4 = 7, d5 = 0, f4 = 0, f5 = 0;
            break;
        }
        case 45:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 1, p2 = 6, p3 = 6, p4 =6, p5 = 0, d3 = 10, d4 = 8, d5 = 0, f4 = 0, f5 = 0;
            break;
        }
        case 46:
        {
            cout << "istnieje tylko dla 4 powlok, 5 nie pojawia sie" << endl;
            s1=2 , s2=2, p2=6, s3=2, p3=6, d3=10, s4=2, p4=6, d4=10, f4=0, s5=0, p5=0, d5=0, f5=0, g5=0;
            break;
        }
        case 47:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 1, p2 = 6, p3 = 6, p4 =6, p5 = 0, d3 = 10, d4 = 10, d5 = 0, f4 = 0, f5 = 0;
            break;
        }
        case 48:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4();
            s5 = maxS5;
            liczbaAtomowa -= s5;
            d4 = liczbaAtomowa>=maxD4 ? maxD4:liczbaAtomowa;
            break;
        }
        case 54:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4();
            s5 = maxS5;
            liczbaAtomowa -= s5;
            d4 = maxD4;
            liczbaAtomowa -= d4;
            p5 = liczbaAtomowa>=maxP5 ? maxP5:liczbaAtomowa;
            break;
        }
        case 55:
        {
            cout << "za duza konfiguracja dla 5 powlok" << endl;
            s1=0 , s2=0, p2=0, s3=0, p3=0, d3=0, s4=0, p4=0, d4=0, f4=0, s5=0, p5=0, d5=0, f5=0, g5=0;
            break;
        }
    }
}
