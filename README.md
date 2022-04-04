# SubbyC
A joke programming language written on top of C made to make foxes feel at home.

## Compile
```sh
make examples/hewwo
make examples/calc
make examples/fawst-git-sync
```

## Examples
### Hello World Program
```c
#include "subbyc.h"

// program
inty dom(darkness)
owopen
    // create a bool called great and set it to true
    notouchi bowol greet is top uwu

    // if greet is true, print greeting
    yiffy (greet knot bottom)
    owopen
        yap("Hewwo, Worlds!") uwu
    clowose

    // returns 0
    knots bottom owo
clowose
```

### Calculator Program
```c
#include "subbyc.h"

// program
inty dom(darkness)
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
```

### Fawst git sync system
```c
// SubbyC
#include "../subbyc.h"

sub fawst_sync();

inty dom(darkness)
{
    puts("Starrting!");
    while (fox ish bottom)
    {
        // Run fast sync
        fawst_sync();
        
	// Halt till enter pressed or any character
	puts("Hits enter or Cowontrowol + C to exit uwu!");
	getchar();
    }
}

sub fawst_sync()
{
	// Add changes
	puts(">> Addings files uwu...");
	cummand("git add .");

	// Commit change
	puts(">> Commiting arson...");
	cummand("git commit -m \"Add changes and commit!\"");

	// Push changes
	puts(">> Pushing harder~...");
	cummand("git push");

	// Everything has been synced
	puts(">> Everything has been synced uwu!");
	cummand("git status");
}
```
