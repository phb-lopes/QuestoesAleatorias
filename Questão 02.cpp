/* 3ª Prova Questão 02 */

#include <stdio.h>
#include <stdlib.h>
int main( ){
	int x,i,j,s_linhas=0,s_colunas=0;
	printf("Teste o cubo magico!\n");
	printf("Qual o tamanho da matriz? Precisa ser quadrada, digite apenas um numero\n");
	scanf("%d",&x);
	int cubo[x][x];
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("Qual o numero da posicao %d %d\n",i+1,j+1);
			scanf("%d",&cubo[i][j]);
			}
		}
	for(i=0;i<x;i++){		// Aqui faz a contagem dos numeros das linhas e colunas
		for(j=0;j<x;j++){
		s_linhas+=cubo[i][0];
		s_colunas+=cubo[0][j];
		}
	}
	for(int i=0;i<x;i++){		//Antes mesmo de saber se e quadrada ou não, é mostrada a matriz
		printf("\n");
		for(int j=0;j<x;j++){
			printf("%d",cubo[i][j]);
		}
	}
	printf("\n");
	if(s_linhas==s_colunas)		//Aqui temos a condição, se o Numero de linhas for igual ao de colunas, ela é quadrada.Logo, imprimi na tela o resultado Positivo
	printf("Os numeros que voce digitou forma um quadrado magico! o/\n");
	if(s_linhas!=s_colunas)		// Se o Numero de linhas não for igual ao numero de colunas, não é quadrado mágico. Logo, imprime na tela o resultado Negativo.
	printf("Os numeros que voce digitou nao forma um quadrado magico =S\n");
	system("PAUSE");
}
