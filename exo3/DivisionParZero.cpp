/**
 *
 * \file   : SqueletteMain.cpp
 *
 * \author :
 *
 * \date   :
 *
**/

#include <iostream>
#include <exception>

#include "CstCodErr.h"
#include "CException.h"

using namespace std;
using namespace nsUtil;

namespace
{
    int divisionEntiere(int a, int b) {
        if (b==0) throw CException("division par zero", 254);
        return a/b;
    }
    void testDivisionParZero (void)
    {
        while(true) {
            int a;
            int b;
            cout << "a = ?" << endl;
            cin >> a;
            cout << "b = ?" << endl;
            cin >> b;
            cout << "a/b-a%b = " << divisionEntiere(a,b) << endl;
            cout << endl;
        }
    } // testDivisionParZero ()

} // namespace

int main (void)
{
    try
    {
        testDivisionParZero ();

        return KNoExc;
    }
    catch (const CException & e)
    {
        cerr << "Erreur        : " << e.getLibelle () << '\n'
             << "Code d'erreur = " << e.getCodErr ()  << '\n';
        return e.getCodErr();
    }
    catch (const exception & e)
    {
        cerr << "Exception standard : " << e.what () << '\n';
        return KExcStd;
    }
    catch (...)
    {
        cerr << "Exception inconnue\n";
        return KExcInconnue;
    }

} // main()
