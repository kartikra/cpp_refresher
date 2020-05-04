#include <cstdio>
#include <iostream>
using namespace std;


/*
 * identifiers
 * variables -> static defined. always initialize
 * const = read only variable
 */

void get_started() {

    printf("---------------- running lesson - get started -----------------\n");

    int x, y;
    // expression -> returns a value
    // statement -> terminated with ; and is standalone unit of work
    float z1 = 22 / 7; // statement + expression
    float z2 = 22.0 / 7;  // note float divided by integer returns a float
    const float pi = 3.1416;
    printf("pi is %3.2f\n", pi);  // statement
    printf("pi is %5.3f\n", z1);
    printf("pi is %5.3f\n", z2);

    x = 42;
    printf("x is %d\n", x);
    y = x * 12 + 34;
    printf("y is %d\n", y);

    printf("x = %d\n", x=50);

    // display statements
    puts("Hello, World!");
    printf("Hello World 2\n");
    cout << "Hello, World 3" << endl;

    /* identifiers (name of functions)
     * 1. use the 26 alphabets, numbers and _
     * 2. cannot conflict with reserved words
     * 3. identifiers are case sensitive
     * 4. identifiers starting with _ are private
     * 5. __ are system level identifiers. do not use
     * 6. keep under 31 characters long
     */

    /* variables (strongly typed)
     * both type and qualifier matter
     * always initialize as soon as possible  (undefined very bad practice)
     * modifiers (or qualifiers). example -> const. Value cannot be changed. read only variable
     */

}

