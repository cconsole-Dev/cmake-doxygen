/**
* @file example.cpp
 * @brief Implementation of example functions in NamespaceA and NamespaceB.
 */

#include "example.h"

namespace NamespaceA {

    int foo(int a, int b) {
        // Example operation: addition
        return a + b;
    }

    int bar(int a, int b) {
        // Example operation: subtraction
        return a - b;
    }

}

namespace NamespaceB {

    int max(int a, int b) {
        // Return the greater of a and b
        return (a > b) ? a : b;
    }

    int min(int a, int b) {
        // Return the lesser of a and b
        return (a < b) ? a : b;
    }

}
