#include <exception>
#include <CException.h>
#include <CstCodErr.h>
#include <iostream>

using namespace std;
using namespace nsUtil;

void testExceptionsInMain() {
    try {
        cout << "tout commence ici" << endl;
        //throw runtime_error("errored");
        int xd=5;
        ++xd;
        string maStr="jul";
        maStr.at(10);
    }
    catch (int i) {
        cout << "un entier a été capturé" << endl;
    }
    catch (CException ce) {
        cout << ce.what() << " - une CException a été attrapée" << endl;
    }
    /*catch (runtime_error re) {
        cout << "une runtime error a été attrapée" << endl;
    }*/
    catch (out_of_range oor) {
        cout << oor.what() << " - une sortie de tableau a été attrapée" << endl;
    }
    catch (domain_error de) {

    }
    catch (exception const & e) {
        cout << e.what() << endl;
    }
    catch (...) {
        cout << "une autre exception" << endl;
    }
}

int main()
{
    testExceptionsInMain();
    return 0;
}
