#include <cstdio>
#include <iostream>

using namespace std;

void demo_ternary() {

    int x = 42;
    int y = 20;
    // ternary operator
    printf("The greater value is %d\n", x > y ? x : y);
    y = 52;
    printf("The greater value is %d\n", x > y ? x : y);

};

void demo_switch() {

    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;

    int x;

    do {
        printf("Enter a number from 1 to 4. Enter a number less than 0 to break\n");
        cin >> x;

        switch(x) {
            case iONE:
                puts("one\n");
                break;
            case iTWO:
                puts("two\n");
                break;
            case iTHREE:
                puts("three\n");
                break;
            case iFOUR:
                puts("four\n");
                break;
            default:
                if (x >= 0)
                {
                    printf("bad choice\n");
                }
                break;
        }

    } while (x >= 0);



}

void demo_while() {

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = 0;

    while(i < 9) {
        if (i==7) break;  // get out of the loop
        if (i == 3) {i++; continue;}  // get back to start of loop
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

}

void demo_for_loop() {

    // basic for loop
    for( int i = 0; i < 5; ++i ) {
        printf("i is %d\n", i);
    }

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char s[] = "string";

    // range based for loop (happens at compile time)
    for (int i: array) {
        printf("i is %d\n", i);
    }

    for (char c: s) {
        if (c == 0) break;
        printf("c is %c\n", c);
    }

    // string value that was not defined works exactly the same way
    for (char c: "string") {
        if (c == 0) break;
        printf("c is %c\n", c);
    }

}