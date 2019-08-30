#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){	
	int ret;
	char j[20],p[20];
	printf("Qual o nome?\n");
	fgets(j,20,stdin);
	printf("Qual o nome da segunda srting?\n");
	fgets(p,20,stdin);
	ret = strcmp (j,p);
	//ret = strcmp (j,"juca\n\0");
	if(ret == 0){
		printf("verdade!!\n");
	}
	else
	printf("Falso!\n");
	system("pause");
}
