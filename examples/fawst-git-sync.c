// SubbyC
#include "../subbyc.h"


sub fawst_sync();

inty dom(darkness)
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

sub fawst_sync()
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