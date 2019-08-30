/* 3ª Prova Questão 01 */

#include <stdio.h>
#include <stdlib.h>
int n=30;		// Variável global com o tamanho de todos os vetores.
float calcula(float*v1,float*v2,char*vC,float*vS){		// Funcao calcula que recebe como parametros 4 vetores, um de char e 3 de numeros
	int i;
	for(i=0;i<n;i++){		// Primeiro for pra agregar variáveis no vetor v1(apenas numeros)
		printf("Qual o valor da posicao %d?(Vetor 01)\n",i+1);
		scanf("%f",&v1[i]);
	}
	for(i=0;i<n;i++){		//Segundo for pra agregar as operações no vetor vC, somente char.
		printf("Qual a operacao desejada?\n");
		scanf("%s",&vC[i]);
	}
	for(i=0;i<n;i++){		// Segundo for pra agregar variáveis no vetor v2(apenas numeros).
		printf("Qual o valor da posicao %d?(Vetor 02)\n",i+1);
		scanf("%f",&v2[i]);
	}
	for(int i=0;i<n;i++){		// Neste for, testa-se o tipo de operação que o usuário entrou.
			if(vC[i]=='+'){		// Se for somar, ele vai somar os vetores v1 e v2 e guardar o valor em vS.
				vS[i]=v1[i]+v2[i];
			}
			if(vC[i]=='-'){		// Se for subtração, ele vai subtrair os vetores v1 e v2 e guardar o valor em vS.
				vS[i]=v1[i]-v2[i];
			}
			if(vC[i]=='*'){		// Se for multiplicação, ele vai multiplicar os vetores v1 e v2 e guardar o valor em vS.
				vS[i]=v1[i]*v2[i];
			}
			if(vC[i]=='/'){		// Se for divisão, ele vai dividir o vetor v1 por v2 e guardar o valor em vS.
				vS[i]=v1[i]/v2[i];
			}		
	}
}
int main(){
	float v1[n],v2[n],vS[n];
	char vC[n];
	calcula(v1,v2,vC,vS);
	for(int i=0;i<n;i++){		// No final, o vS é mostrado com os novos valores.
		printf("Novo valor da posicao %d e: %.1f\n",i+1,vS[i]);
	}
	system("PAUSE");
}
