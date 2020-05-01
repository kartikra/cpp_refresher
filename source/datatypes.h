#include "cstdio"
#include <cstdint>

using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

void int_data() {
    // only whole numbers and can be signed or unsigned
    printf("sizeof char is %ld bits\n", sizeof(char) * byte);
    printf("sizeof short int is %ld bits\n", sizeof(short int) * byte);
    printf("sizeof int is %ld bits\n", sizeof(int) * byte);
    printf("sizeof long int is %ld bits\n", sizeof(long int) * byte);
    printf("sizeof long long int is %ld bits\n", sizeof(long long int) * byte);

    // if sign can be discarded use of unsigned saves the space of sign
    unsigned int a;
    a = -10;
    printf ("value is %d\n", a);
    if (a < 0)
        printf("negative int\n");
    else
        printf("positive int\n");


}

// regular int size can change from 1 compiler/os to another but st size does not
void std_int_data() {
    printf("sizeof int8_t is %ld bits\n", sizeof(int8_t) * byte);
    printf("sizeof int16_t is %ld bits\n", sizeof(int16_t) * byte);
    printf("sizeof int32_t is %ld bits\n", sizeof(int32_t) * byte);
    printf("sizeof int64_t is %ld bits\n", sizeof(int64_t) * byte);
}


void float_data(){
    float f;
    double df;
    long double ldf;

    printf("size of float f is %ld bits\n", sizeof(f) * byte);
    printf("size of double float df is %ld bits\n", sizeof(df) * byte);
    printf("size of long double float ldf is %ld bits\n", sizeof(ldf) * byte);

    f = 500.0; // decimal makes it float
    printf("%f\n", f);

    f = 5e2; // scientific
    printf("%f\n", f);

    // scale and precision. Get the scale I set but precision not always guaranteed
    df =  5e20;
    printf("df = %f\n", df);
    df =  5e10;
    printf("df = %f\n", df);
    ldf =  5e20;
    printf("ldf = %Lf\n", ldf);
    ldf =  5e10;
    printf("ldf = %Lf\n", ldf);

    df = 0.1 + 0.1 + 0.1;

    // floating gives scale but its at the expense of precision
    if (df == 0.3)
        printf("matches \n");
    else
        printf("not matches \n");

}


void string_data() {
    char cstring[] = "String";
    printf("The string is: %s\n", cstring);
    for( unsigned int i = 0; cstring[i]; i++) {
        printf("%02d: %c\n", i, cstring[i]);
    }

    const char * cstring2 = "String";
    printf("The string is: %s\n", cstring2);
    for( unsigned int i = 0; cstring2[i]; i++) {
        printf("%02d: %c\n", i, cstring2[i]);
    }

    // catenate 2 strings
    const char * cstring3 = "String" "foo";
    printf("The string is: %s\n", cstring3);
    for( unsigned int i = 0; cstring3[i]; i++) {
        printf("%02d: %c\n", i, cstring3[i]);
    }

    // escape characters
    puts("My Email is \"Kartik.R\x40gmail.com\" \u03bc\n");

}


class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
    int value() {
        int x = 7;
        return ++x;
    }
};

int func() {
    int x = 7;
    return ++x;
}

int func_static() {
    static int x = 7;
    return ++x;
}

// control the quality of the variable
void qualifiers(){
    // const static
    // CV (constant and volatile) Qualifier --> const (immutable), volatile (can be changed by another process), mutable
    // Storage Duration --> static (lifetime of program), register(register variables), extern
    //   default --> duration of block.  default if stored outside of block is static

    int i = 42;
    printf("The integer i is %d\n", i);
    i = func();
    printf("The integer i is %d\n", i);
    i = func();
    printf("The integer i is %d\n", i);
    i = func();
    printf("The integer i is %d\n", i);

    // now the counter is no longer initialized during each call
    printf("The integer i is %d\n", i);
    i = func_static();
    printf("The integer i is %d\n", i);
    i = func_static();
    printf("The integer i is %d\n", i);
    i = func_static();
    printf("The integer i is %d\n", i);

    S a;
    S b;
    S c;
    printf("The value of class a is %d\n", a.value());
    printf("The value of class b is %d\n", b.value());
    printf("The value of class c is %d\n", c.value());

    printf("The static value of class a is %d\n", a.static_value());
    printf("The static value of class b is %d\n", b.static_value());
    printf("The static value of class c is %d\n", c.static_value());


}