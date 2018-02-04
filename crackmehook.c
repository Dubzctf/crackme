#include <stdio.h>
#include <string.h>

int main() 
{	
	printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("+++ Bienvenue dans ce challenge de cracking +++\n");
	printf("++++++ Tu devras cracker le mot de passe ++++++\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
	
	char a[20] = "ES@IP_";
	char b[20] = "";
	char c[20] = "azeazLla,fazdf";
	char result[20] = "ES@IP_cr@k-meDubZ14"; 
	char d[20] = "cr@k-meDubZ14";
	char e[20] = "Cr@azea4875321";


	printf("Entres le bon flag :");
	scanf("%9s", b);
	
	if(strcmp(result, b) == 0) 
	{
		printf("\nIl etait facile non ?\n");
	} 
	
	else 
	{
		printf("\nTu crackes ?! \n");
	}
	return 0;
}


