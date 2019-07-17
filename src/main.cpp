#include <iostream>
#include <exception>

#include "customexception.h"
#include "processor.h"

using namespace std;

// void do_something(bool failure, bool custom) {
//     cout << "INFO::doing something::" << "failure::" << failure << "custom::" << custom << endl;
//     if (failure) {
//         if (custom) {
//             throw CustomException();
//         } else {
//             throw exception();
//         }
        
//     }
// }

int main() {
    
    cout << "Creating Processor" << endl;

    Processor p;

    // while()
    try {
        p.run();
    } catch(CustomException& err) {
        cout << "Processor Threw Error::" << err.what() << endl;
    } catch(...) {
        cout << "Processor Threw Error";
    };
    
    return 0;
};