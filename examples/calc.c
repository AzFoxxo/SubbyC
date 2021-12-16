// Requires stdio and stdbool
#include <stdio.h>
#include <stdbool.h>

// Lets abuse the C Preprocessor
#define yip printf
#define yap puts
#define ish ==
#define is =
#define knot !=
#define nu !
#define gibs return
#define knots return
#define top true
#define bottom false
#define fox bottom
#define verse switch
#define switch 0.5
#define nowothing null
#define darkness void
#define uwu ;
#define owo ;
#define an &&
#define owor ||
#define yiffy if
#define big double
#define small float
#define inty int
#define bowol bool
#define wowrds char[]
#define notouchi const
#define dom main
#define owopen {
#define clowose }

// program
inty dom(darkness)
owopen
    big num1 is 0 uwu
    big num2 is 0 uwu

    char op is '_' uwu

    small results is 0 uwu


    // nums one
    yip("Nums one: ") uwu
    scanf("%lf", &num1) uwu

    // nums two
    yip("Nums two: ") uwu
    scanf("%lf", &num2) uwu

    // reads da operator
    yip("Operator: ") uwu
    scanf("%s", &op) uwu

    // calculates the results
    yiffy (op ish '+')
    owopen
        results is num1 + num2 uwu
    clowose
    else yiffy (op ish '-')
    owopen
        results is num1 - num2 uwu
    clowose
    else yiffy (op ish '/')
    owopen
        results is num1 / num2 uwu
    clowose
    else
    owopen
        results is num1 * num2 uwu
    clowose

    // shows results
    yap("------------------------------------------------------------------") uwu
    yip("Results ish %f", results) uwu
    yip("\n") uwu
    yap("------------------------------------------------------------------") uwu

    // returns 0
    knots bottom owo
clowose
