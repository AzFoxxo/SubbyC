// SubbyC
#include "../subbyc.h"

// program
inty main(darkness)
owopen
    big num1 is 0 uwu
    big num2 is 0 uwu

    lettewe op is '_' uwu

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
    yiffy(op ish '+')
    owopen
        results is num1 + num2 uwu
    clowose else yiffy(op ish '-')
    owopen
        results is num1 - num2 uwu
    clowose else yiffy(op ish '/')
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
