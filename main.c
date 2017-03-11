#include <stdlib.h>
#include <stdio.h>
#include "model.c"
#include "model.h"

int main (int argc , char argv[])
{
	FILE *fichier_lecture;
	char tab[100];
	typedef struct fourmiliere FOURMILIERE;
	struct fourmiliere
	{
		int tab_info_fourmilliere[6];
		int tab_o[][];
		int tab_g[][];
	}

	if (argv[1]=='test')
	{
		fichier_lecture = fopen(argv[2], "rb");
		
		while(( fgets(tab,90,fichier_lecture)) )
		{
			if(tab[0]=='#'|| tab[0]=='\n'|| tab[0]=='\r')
				continue;

			sscanf("%d %d %d %d %d %d", tab2[i][0],   

}
