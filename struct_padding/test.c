/**
 * Memory align & padding - for struct.
 * compile: gcc memory_align.c
 * execute: ./a.out
 */ 
#include <stdio.h>

// size is 8, 4 + 1, then round to multiple of 4 (int's size),
struct stu_a {
    int i;
    char c;
};

// size is 16, 8 + 1, then round to multiple of 8 (long's size),
struct stu_b {
    long long l;
    char c;
};

// size is 24, l need padding by 4 before it, then round to multiple of 8 (long's size),
struct stu_c {
    int i;
    long long l;
    char c;
};

// size is 16, 8 + 4 + 1, then round to multiple of 8 (long's size),
struct stu_d {
    long long l;
    int i;
    char c;
};

// size is 16, 8 + 4 + 1, then round to multiple of 8 (double's size),
struct stu_e {
    double d;
    int i;
    char c;
};

// size is 24, d need align to 8, then round to multiple of 8 (double's size),
struct stu_f {
    int i;
    double d;
    char c;
};

// size is 4,
struct stu_g {
    int i;
};

// size is 8,
struct stu_h {
    long long l;
};

// test - padding within a single struct,
int test_struct_padding() {
    printf("%s: %zd\n", "stu_a", sizeof(struct stu_a));
    printf("%s: %zu\n", "stu_b", sizeof(struct stu_b));
    printf("%s: %zu\n", "stu_c", sizeof(struct stu_c));
    printf("%s: %zu\n", "stu_d", sizeof(struct stu_d));
    printf("%s: %zu\n", "stu_e", sizeof(struct stu_e));
    printf("%s: %zu\n", "stu_f", sizeof(struct stu_f));

    printf("%s: %zu\n", "stu_g", sizeof(struct stu_g));
    printf("%s: %zu\n", "stu_h", sizeof(struct stu_h));

    return 0;
}

// test - address of struct,
int test_struct_address() {
    printf("%s: %zu\n", "stu_g", sizeof(struct stu_g));
    printf("%s: %zu\n", "stu_h", sizeof(struct stu_h));
    printf("%s: %zu\n", "stu_f", sizeof(struct stu_f));

    struct stu_g g;
    struct stu_h h;
    struct stu_f f1;
    struct stu_f f2;
    int x = 1;
    long y = 1;

    printf("address of %s: %p\n", "g", &g);
    printf("address of %s: %p\n", "h", &h);
    printf("address of %s: %p\n", "f1", &f1);
    printf("address of %s: %p\n", "f2", &f2);
    printf("address of %s: %p\n", "x", &x);
    printf("address of %s: %p\n", "y", &y);

    // g is only 4 bytes itself, but distance to next struct is 16 bytes(on 64 bit system) or 8 bytes(on 32 bit system),
    printf("space between %s and %s: %lld\n", "g", "h", (long long)(&h) - (long long)(&g));

    // h is only 8 bytes itself, but distance to next struct is 16 bytes(on 64 bit system) or 8 bytes(on 32 bit system),
    printf("space between %s and %s: %lld\n", "h", "f1", (long long)(&f1) - (long long)(&h));

    // f1 is only 24 bytes itself, but distance to next struct is 32 bytes(on 64 bit system) or 24 bytes(on 32 bit system),
    printf("space between %s and %s: %lld\n", "f1", "f2", (long long)(&f2) - (long long)(&f1));

    // x is not a struct, and it reuse those empty space between struts, which exists due to padding, e.g between g & h,
    printf("space between %s and %s: %lld\n", "x", "f2", (long long)(&x) - (long long)(&f2));
    printf("space between %s and %s: %lld\n", "g", "x", (long long)(&x) - (long long)(&g));

    // y is not a struct, and it reuse those empty space between struts, which exists due to padding, e.g between h & f1,
    printf("space between %s and %s: %lld\n", "x", "y", (long long)(&y) - (long long)(&x));
    printf("space between %s and %s: %lld\n", "h", "y", (long long)(&y) - (long long)(&h));

    return 0;
}

int main(int argc, char * argv[]) {
    test_struct_padding();
    // test_struct_address();

    return 0;
}