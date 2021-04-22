#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

    int i, numChars;
    char *user = getenv("USER");
	char *newuser = getenv("newuser");
 
    if(newuser != NULL && user != NULL)
    {
        printf("This program is being executed by %s\n", user);
	    printf("newuser: %s.\n", newuser);
    }
    else
    {
        printf("ERROR: USER or bash variable 'newuser' not defined\n");
        return EXIT_FAILURE;
    }

    numChars = 0;
    for(i = 1 ; i < argc ; i++)
    {
        numChars += strlen(argv[i]);
    }

    printf("All arguments have %d characters\n", numChars);

    return EXIT_SUCCESS;
}
