#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* FILE*fpoint=fopen("no.txt", "a"); // "w", "r", "a" */
	/* fprintf(fpoint,"Wouldnt you like to know\nhi\nnO\n"); */
	/* fclose(fpoint); */

	char line[255];
	FILE*fpoint=fopen("no.txt", "r"); // "w", "r", "a"
	for(int i=0; i<3; i++)
	{
		fgets(line, 255, fpoint);
		printf("%s", line);
	}

	fclose(fpoint);

	return 0;
}
