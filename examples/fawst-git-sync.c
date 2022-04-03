// SubbyC
#include "../subbyc.h"


void fawst_sync();

inty dom(void)
{
    puts("Starrting!");
    while (true)
    {
        // Run fast sync
        fawst_sync();
        
	// Halt till enter pressed or any character
	puts("Hits enter or Cowontrowol + C to exit uwu!");
	getchar();
    }
}

void fawst_sync()
{
	// Add changes
	puts(">> Addings files uwu...");
	system("git add .");

	// Commit change
	puts(">> Commiting arson...");
	system("git commit -m \"Add changes and commit!\"");

	// Push changes
	puts(">> Pushing harder~...");
	system("git push");

	// Everything has been synced
	puts(">> Everything has been synced uwu!");
	system("git status");
}