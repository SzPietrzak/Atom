#include "powloka7.h"
powloka7::powloka7(int liczbaAtomowa): powloka6::powloka6(86)
{
    int testSwitch = 0;
    if (liczbaAtomowa <= 86)
    {
        testSwitch = 86;
    }
    else if (liczbaAtomowa <= 88)
    {
        testSwitch = 88;
    }
    else if (liczbaAtomowa == 89)
    {
        testSwitch = 89;
    }
    else if (liczbaAtomowa == 90)
    {
        testSwitch = 90;
    }
    else if (liczbaAtomowa == 91)
    {
        testSwitch = 91;
    }
    else if (liczbaAtomowa == 92)
    {
        testSwitch = 92;
    }
    else if (liczbaAtomowa == 93)
    {
        testSwitch = 93;
    }
    else if (liczbaAtomowa == 95)
    {
        testSwitch = 95;
    }
    else if (liczbaAtomowa <= 102)
    {
        testSwitch = 102;
    }
    else if (liczbaAtomowa == 103)
    {
        testSwitch = 103;
    }
    else if (liczbaAtomowa == 110)
    {
        testSwitch = 110;
    }
    else if (liczbaAtomowa <= 112)
    {
        testSwitch = 112;
    }
    else if (liczbaAtomowa <= 118)
    {
        testSwitch = 118;
    }
    else if (liczbaAtomowa <= 136)
    {
        testSwitch = 136;
    }
    else if (liczbaAtomowa <= 150)
    {
        testSwitch = 150;
    }
    else if (liczbaAtomowa <= 160)
    {
        testSwitch = 160;
    }
    else if (liczbaAtomowa <= 178)
    {
        testSwitch = 178;
    }
    else if (liczbaAtomowa <= 192)
    {
        testSwitch = 192;
    }
    else if (liczbaAtomowa <= 214)
    {
        testSwitch = 214;
    }
    else if (liczbaAtomowa <= 232)
    {
        testSwitch = 232;
    }
    else if (liczbaAtomowa <= 254)
    {
        testSwitch = 254;
    }
    else if (liczbaAtomowa <= 266)
    {
        testSwitch = 266;
    }

    switch (testSwitch)
    {
        case (86):
        {
            cout << "za mala konfiguracja dla 7 powlok" << endl;
            s1=0 , s2=0, p2=0, s3=0, p3=0, d3=0, s4=0, p4=0, d4=0, f4=0, s5=0, p5=0, d5=0, f5=0, g5=0, s6=0, p6=0, d6=0, f6=0, g6=0, h6=0, s7=0, p7=0, d7=0, f7=0, g7=0, h7=0, i7=0;
            break;
        }
        case 88:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = liczbaAtomowa>=maxS7 ? maxS7:liczbaAtomowa;
            f5 = 0, d6 = 0, p7 = 0, g5 = 0, f6 = 0, d7 = 0, g6 = 0, f7 = 0, h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 89:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, s7 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 6, p7 = 0, d3 = 10, d4 = 10, d5 = 10, d6 = 1, d7 = 0, f4 = 14, f5 = 0, f6 = 0, f7 = 0, g5 = 0, g6 = 0, g7 = 0, h6 = 0, h7 = 0, i7 = 0;
        }
        case 90:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, s7 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 6, p7 = 0, d3 = 10, d4 = 10, d5 = 10, d6 = 2, d7 = 0, f4 = 14, f5 = 0, f6 = 0, f7 = 0, g5 = 0, g6 = 0, g7 = 0, h6 = 0, h7 = 0, i7 = 0;
        }
        case 91:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, s7 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 6, p7 = 0, d3 = 10, d4 = 10, d5 = 10, d6 = 1, d7 = 0, f4 = 14, f5 = 2, f6 = 0, f7 = 0, g5 = 0, g6 = 0, g7 = 0, h6 = 0, h7 = 0, i7 = 0;
        }
        case 92:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, s7 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 6, p7 = 0, d3 = 10, d4 = 10, d5 = 10, d6 = 1, d7 = 0, f4 = 14, f5 = 3, f6 = 0, f7 = 0, g5 = 0, g6 = 0, g7 = 0, h6 = 0, h7 = 0, i7 = 0;
        }
        case 93:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, s7 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 6, p7 = 0, d3 = 10, d4 = 10, d5 = 10, d6 = 1, d7 = 0, f4 = 14, f5 = 4, f6 = 0, f7 = 0, g5 = 0, g6 = 0, g7 = 0, h6 = 0, h7 = 0, i7 = 0;
        }
        case 95:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, s7 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 6, p7 = 0, d3 = 10, d4 = 10, d5 = 10, d6 = 1, d7 = 0, f4 = 14, f5 = 7, f6 = 0, f7 = 0, g5 = 0, g6 = 0, g7 = 0, h6 = 0, h7 = 0, i7 = 0;
        }
        case 102:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            d6 = 0, p7 = 0, g5 = 0, f6 = 0, d7 = 0, g6 = 0, f7 = 0, h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 103:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, s7 = 2, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 6, p7 = 1, d3 = 10, d4 = 10, d5 = 10, d6 = 0, d7 = 0, f4 = 14, f5 = 14, f6 = 0, f7 = 0, g5 = 0, g6 = 0, g7 = 0, h6 = 0, h7 = 0, i7 = 0;
        }
        case 110:
        {
            s1 = 2, s2 = 2, s3 = 2, s4 = 2, s5 = 2, s6 = 2, s7 = 1, p2 = 6, p3 = 6, p4 = 6, p5 = 6, p6 = 6, p7 = 0, d3 = 10, d4 = 10, d5 = 10, d6 = 9, d7 = 0, f4 = 14, f5 = 14, f6 = 0, f7 = 0, g5 = 0, g6 = 0, g7 = 0, h6 = 0, h7 = 0, i7 = 0;
        }
        case 112:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            p7 = 0, g5 = 0, f6 = 0, d7 = 0, g6 = 0, f7 = 0, h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 118:
        {
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            g5 = 0, f6 = 0, d7 = 0, g6 = 0, f7 = 0, h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 136:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            f6 = 0, d7 = 0, g6 = 0, f7 = 0, h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 150:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            liczbaAtomowa -= g5;
            f6 = liczbaAtomowa>=maxF6 ? maxF6:liczbaAtomowa;
            d7 = 0, g6 = 0, f7 = 0, h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 160:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            liczbaAtomowa -= g5;
            f6 = liczbaAtomowa>=maxF6 ? maxF6:liczbaAtomowa;
            liczbaAtomowa -= f6;
            d7 = liczbaAtomowa>=maxD7 ? maxD7:liczbaAtomowa;
            g6 = 0, f7 = 0, h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 178:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            liczbaAtomowa -= g5;
            f6 = liczbaAtomowa>=maxF6 ? maxF6:liczbaAtomowa;
            liczbaAtomowa -= f6;
            d7 = liczbaAtomowa>=maxD7 ? maxD7:liczbaAtomowa;
            liczbaAtomowa -= d7;
            g6 = liczbaAtomowa>=maxG6 ? maxG6:liczbaAtomowa;
            f7 = 0, h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 192:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            liczbaAtomowa -= g5;
            f6 = liczbaAtomowa>=maxF6 ? maxF6:liczbaAtomowa;
            liczbaAtomowa -= f6;
            d7 = liczbaAtomowa>=maxD7 ? maxD7:liczbaAtomowa;
            liczbaAtomowa -= d7;
            g6 = liczbaAtomowa>=maxG6 ? maxG6:liczbaAtomowa;
            liczbaAtomowa -= g6;
            f7 = liczbaAtomowa>=maxF7 ? maxF7:liczbaAtomowa;
            h6 = 0, g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 214:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            liczbaAtomowa -= g5;
            f6 = liczbaAtomowa>=maxF6 ? maxF6:liczbaAtomowa;
            liczbaAtomowa -= f6;
            d7 = liczbaAtomowa>=maxD7 ? maxD7:liczbaAtomowa;
            liczbaAtomowa -= d7;
            g6 = liczbaAtomowa>=maxG6 ? maxG6:liczbaAtomowa;
            liczbaAtomowa -= g6;
            f7 = liczbaAtomowa>=maxF7 ? maxF7:liczbaAtomowa;
            liczbaAtomowa -= h6;
            h6 = liczbaAtomowa>=maxH6 ? maxH6:liczbaAtomowa;
            g7 = 0, h7 = 0, i7 = 0;
            break;
        }
        case 232:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            liczbaAtomowa -= g5;
            f6 = liczbaAtomowa>=maxF6 ? maxF6:liczbaAtomowa;
            liczbaAtomowa -= f6;
            d7 = liczbaAtomowa>=maxD7 ? maxD7:liczbaAtomowa;
            liczbaAtomowa -= d7;
            g6 = liczbaAtomowa>=maxG6 ? maxG6:liczbaAtomowa;
            liczbaAtomowa -= g6;
            f7 = liczbaAtomowa>=maxF7 ? maxF7:liczbaAtomowa;
            liczbaAtomowa -= h6;
            h6 = liczbaAtomowa>=maxH6 ? maxH6:liczbaAtomowa;
            liczbaAtomowa -= h6;
            g7 = liczbaAtomowa>=maxG7 ? maxG7:liczbaAtomowa;
            h7 = 0, i7 = 0;
            break;
        }
        case 254:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            liczbaAtomowa -= g5;
            f6 = liczbaAtomowa>=maxF6 ? maxF6:liczbaAtomowa;
            liczbaAtomowa -= f6;
            d7 = liczbaAtomowa>=maxD7 ? maxD7:liczbaAtomowa;
            liczbaAtomowa -= d7;
            g6 = liczbaAtomowa>=maxG6 ? maxG6:liczbaAtomowa;
            liczbaAtomowa -= g6;
            f7 = liczbaAtomowa>=maxF7 ? maxF7:liczbaAtomowa;
            liczbaAtomowa -= h6;
            h6 = liczbaAtomowa>=maxH6 ? maxH6:liczbaAtomowa;
            liczbaAtomowa -= h6;
            g7 = liczbaAtomowa>=maxG7 ? maxG7:liczbaAtomowa;
            liczbaAtomowa -= g7;
            h7 = liczbaAtomowa>=maxH7 ? maxH7:liczbaAtomowa;
            i7 = 0;
            break;
        }
        case 266:
        {
            cout << "konfiguracja teoretyczna - nie odnaleziono takiego atomu" << endl;
            liczbaAtomowa = liczbaAtomowa - getS1() - getS2() - getP2() - getS3() - getP3() - getS4() - getD3() - getP4()- getS5()-getD4()-getP5()-getS6()-getF4()-getD5()-getP6();
            s7 = maxS7;
            liczbaAtomowa -= s7;
            f5 = liczbaAtomowa>=maxF5 ? maxF5:liczbaAtomowa;
            liczbaAtomowa -= f5;
            d6 = liczbaAtomowa>=maxD6 ? maxD6:liczbaAtomowa;
            liczbaAtomowa -= d6;
            p7 = liczbaAtomowa>=maxP7 ? maxP7:liczbaAtomowa;
            liczbaAtomowa -= p7;
            g5 = liczbaAtomowa>=maxG5 ? maxG5:liczbaAtomowa;
            liczbaAtomowa -= g5;
            f6 = liczbaAtomowa>=maxF6 ? maxF6:liczbaAtomowa;
            liczbaAtomowa -= f6;
            d7 = liczbaAtomowa>=maxD7 ? maxD7:liczbaAtomowa;
            liczbaAtomowa -= d7;
            g6 = liczbaAtomowa>=maxG6 ? maxG6:liczbaAtomowa;
            liczbaAtomowa -= g6;
            f7 = liczbaAtomowa>=maxF7 ? maxF7:liczbaAtomowa;
            liczbaAtomowa -= h6;
            h6 = liczbaAtomowa>=maxH6 ? maxH6:liczbaAtomowa;
            liczbaAtomowa -= h6;
            g7 = liczbaAtomowa>=maxG7 ? maxG7:liczbaAtomowa;
            liczbaAtomowa -= g7;
            h7 = liczbaAtomowa>=maxH7 ? maxH7:liczbaAtomowa;
            liczbaAtomowa -= h7;
            i7 = liczbaAtomowa>=maxI7 ? maxI7:liczbaAtomowa;
            break;
        }

    }
}
