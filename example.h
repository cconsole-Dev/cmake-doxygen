/**
* @file example.h
 * @brief Example header demonstrating multiple namespaces with documented functions.
 *
 * This file defines simple example functions in two separate namespaces:
 * NamespaceA and NamespaceB. Each namespace contains arithmetic-style
 * operations to demonstrate proper Doxygen formatting.
 */

#ifndef EXAMPLE_H
#define EXAMPLE_H

/// @brief Example functions in NamespaceA.
namespace NamespaceA {

    /**
     * @brief Combines two integers using a custom operation.
     *
     * @param a First integer
     * @param b Second integer
     * @return Result of "fooing" the two values.
     */
    int foo(int a, int b);

    /**
     * @brief Performs a secondary operation on two integers.
     *
     * @param a First integer
     * @param b Second integer
     * @return Result of "barring" the two values.
     */
    int bar(int a, int b);
}

/// @brief Example functions in NamespaceB.
namespace NamespaceB {

    /**
     * @brief Computes the maximum of two integers.
     *
     * @param a First integer
     * @param b Second integer
     * @return The greater of the two values.
     */
    int max(int a, int b);

    /**
     * @brief Computes the minimum of two integers.
     *
     * @param a First integer
     * @param b Second integer
     * @return The lesser of the two values.
     */
    int min(int a, int b);
}

#endif // EXAMPLE_H
