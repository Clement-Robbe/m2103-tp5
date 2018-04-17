/*#include <exception>
#include <CException.h>
#include <CstCodErr.h>
#include <iostream>

using namespace std;
using namespace nsUtil;

void testExceptionsInMain() {
    exception e;
    CException ce;
    try {
        unsigned i=0;
        while(true) {
            ++i;
        }
    }
    catch (runtime_error) {
        cout << "une runtime error a été attrapée" << endl;
    }
    catch (out_of_range) {
        cout << "une sortie de tableau a été attrapée" << endl;
    }
    catch (CException ce) {
        cout << "une CException a été attrapée" << endl;
    }
    catch (exception e) {
        cout << "une exception générale a été attrapée" << endl;
    }
}
*/
