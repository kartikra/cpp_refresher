#include <cstdio>
using namespace std;



void pointers() {
    printf("---------------- running lesson - pointers -----------------\n");
    int x;
    x = 1;
    int y = x;
    printf("value of y is %d\n", y);
    printf("address of x is %p\n", &x);
    printf("address of y is %p\n", &y);  // note y has a new memory address. y carrying the value

    int *z = &x;
    printf("value of z is %p\n", z); // points to the same address of x
    printf("address of z is %p\n", &z); // address allocated to z
    printf("value of contents to the address pointed by z is %d\n", *z); // same value of x

    int a = 7;
    int b = 42;
    int *ip = &a;  // * in definition indicates pointer
    printf("The address of ip is %p\n", &ip);  // address of a
    printf("The value of *ip is %d\n", *ip); // value of a
    ip = &b;
    printf("The value of *ip is %d\n", *ip); // value of b

}


void references() {

    printf("---------------- running lesson - references -----------------\n");

    int x = 7;
    int *ip = &x;
    int &y = x;
    printf("value of *ip is %d\n", *ip);
    printf("value of x is %d\n", x);
    printf("value of y is %d\n", y);

    x = 23;
    printf("value of y is %d\n", y);

    y = 20;
    printf("value of x is %d\n", x);

    // once reference is defined, it cannot be changed
    // reference value can be accessed without * like any other variable
    // once x and y are referenced, change to 1 makes a change to the other as well

}


// primitive array
void primitive_array() {
    printf("---------------- running lesson - primitive array -----------------\n");
    int ia[5];
    //ia[0] = 1;
    *ia = 1;  // same as previous. array elements may be accessed as if the array was a pointer
    printf("1st element %d\n", ia[0]);

    int *ip = ia;  // address of array to a pointer. don't need a & since array can be accessed like pointer
    printf("pointer value 1st element %d\n", *ip);  // prints the first element
    ++ip;  //
    printf("pointer value 2nd element %d\n", *ip);  // undefined value
    *ip=3;
    printf("pointer value 2nd element %d\n", *ip);
    printf("2nd element %d\n", ia[1]);

    *(++ip)=4; // increment & assign shortcut
    printf("3rd element %d\n", ia[2]);

    // another way to initialize an array
    int ia2[5] = {1,2,3,4,5};

}


// primitive string
void primitive_string() {
    printf("---------------- running lesson - primitive string -----------------\n");

    char s[] = "String";
    // special case of a primitive array. terminated with a 0
    printf("String is %s \n", s);

    for (int i = 0; s[i] != 0; i++) { printf("char %d is %c\n", i, s[i]); }

    // loop till pointer is null. this works because array is guaranteed to be stored continuously in memory
    for (char *cp = s; *cp; ++cp) { printf("char is %c\n", *cp); }

    // range expression
    for (char c: s) {
        if (c == 0) break;
        printf("char is %c\n", c);
    }


}

