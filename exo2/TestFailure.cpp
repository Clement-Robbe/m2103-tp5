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
    void testFailure (void)
    {
        cin.exceptions (ios_base::failbit | ios_base::badbit);
        try {
            cout << "start !" << endl;
            while(true) {
                int i;
                cin >> i;
                cout << i << " a été retenu" << endl;
            }
        }
        catch (exception const & e) {
            cout << e.what() << endl;
            throw e;
        }
    } // TestFailure  ()

} // namespace

int main (void)
{
    try
    {
        testFailure ();

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
