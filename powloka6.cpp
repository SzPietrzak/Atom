#include "powloka6.h"
powloka6::powloka6(int liczbaAtomowa): powloka5::powloka5(54)
{
    int testSwitch = 0;
    if (liczbaAtomowa <= 54)
    {
        testSwitch = 54;
    }
    else if (liczbaAtomowa <= 56)
    {
        testSwitch = 56;
    }
    else if (liczbaAtomowa == 57)
    {
        testSwitch = 57;
    }
    else if (liczbaAtomowa == 58)
    {
        testSwitch = 58;
    }
    else if (liczbaAtomowa == 64)
    {
        testSwitch = 64;
    }
    else if (liczbaAtomowa <= 70)
    {
        testSwitch = 70;
    }
    else if (liczbaAtomowa == 78)
    {
        testSwitch = 78;
    }
    else if (liczbaAtomowa == 79)
    {
        testSwitch = 79;
    }
    else if (liczbaAtomowa <= 80)
    {
        testSwitch = 80;
    }
    else if (liczbaAtomowa <= 86)
    {
        testSwitch = 86;
    }
    else
        testSwitch = 87;
    switch (testSwitch)
    {
        case (54):
        {
            cout << "za mala konfiguracja dla 6 powlok" << endl;
            s1=0 , s2=0, p2=0, s3=0, p3=0, d3=0, s4=0, p4=0, d4=0, f4=0, s5=0, p5=0, d5=0, f5=0, g5=0, s6=0, p6=0, d6=0, f6=0, g6=0, h6=0;
            break;
        }
        case 56:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5();
            s6 = liczbaAtomowa>=maxS6 ? maxS6:liczbaAtomowa;
            f4=0, d5=0, p6=0, f5=0, d6=0;
            g5=0, f6=0, g6=0, h6=0;
            break;
        }
        case 57:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 0, d3 = 10, d4 = 10, d5 = 1, d6 = 0, f4 = 0, f5 = 0, f6 = 0, g5 = 0, g6 = 0, h6 = 0;
        }
        case 58:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 0, d3 = 10, d4 = 10, d5 = 1, d6 = 0, f4 = 1, f5 = 0, f6 = 0, g5 = 0, g6 = 0, h6 = 0;
        }
        case 64:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 0, d3 = 10, d4 = 10, d5 = 1, d6 = 0, f4 = 7, f5 = 0, f6 = 0, g5 = 0, g6 = 0, h6 = 0;
        }
        case 70:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5();
            s6 = maxS6;
            liczbaAtomowa -= s6;
            f4 = liczbaAtomowa>=maxF4 ? maxF4:liczbaAtomowa;
            d5=0, p6=0, f5=0, d6=0;
            g5=0, f6=0, g6=0, h6=0;
            break;
        }
        case 78:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 1, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 0, d3 = 10, d4 = 10, d5 = 9, d6 = 0, f4 = 14, f5 = 0, f6 = 0, g5 = 0, g6 = 0, h6 = 0;
        }
        case 79:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 1, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 0, d3 = 10, d4 = 10, d5 = 10, d6 = 0, f4 = 14, f5 = 0, f6 = 0, g5 = 0, g6 = 0, h6 = 0;
        }
        case 80:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5();
            s6 = maxS6;
            liczbaAtomowa -= s6;
            f4 = liczbaAtomowa>=maxF4 ? maxF4:liczbaAtomowa;
            liczbaAtomowa -= f4;
            d5 = liczbaAtomowa>=maxD5 ? maxD5:liczbaAtomowa;
            p6=0, f5=0, d6=0;
            g5=0, f6=0, g6=0, h6=0;
            break;
        }
        case 86:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5();
            s6 = maxS6;
            liczbaAtomowa -= s6;
            f4 = liczbaAtomowa>=maxF4 ? maxF4:liczbaAtomowa;
            liczbaAtomowa -= f4;
            d5 = liczbaAtomowa>=maxD5 ? maxD5:liczbaAtomowa;
            liczbaAtomowa -= d5;
            p6 = liczbaAtomowa>=maxP6 ? maxP6:liczbaAtomowa;
            f5=0, d6=0;
            g5=0, f6=0, g6=0, h6=0;
            break;
        }
        case 87:
        {
            cout << "za duza konfiguracja dla 6 powlok" << endl;
            s1=0 , s2=0, p2=0, s3=0, p3=0, d3=0, s4=0, p4=0, d4=0, f4=0, s5=0, p5=0, d5=0, f5=0, g5=0, s6=0, p6=0, d6=0, f6=0, g6=0, h6=0;
            break;
        }
    }
}
