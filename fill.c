#include <stdio.h>
int main(){
	puts("Inizio...");
	unsigned long t_inizio = (unsigned long)time(NULL);
	FILE * fp;
	
	fp = fopen("d:\\novecentogiga.txt","a");
	unsigned long int n = 0;
	for(n = 0; n < 2000000000; n++)
	{
		fprintf(fp, "Lol\n", n+1);
	}
	fclose(fp);
	
	unsigned long t_fine = (unsigned long)time(NULL);
	unsigned long timer_s = fine-inizio;
	printf("%lu s\n", timer_s);
	return 0;
}