/* 3ª Prova Questão 03 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estoque{
	char armaz[30];
	char nome[30];		// Olhar como se declara uma matriz char de 30 espaços de largura 15 e altura 10, ou 10x15.
	float preco;
}x[1][2];
int b=1,c=2;

int main(){
	int i,j,ret,ret2,s; 											// Contadores
	char n,p[30],q[30],r,t,u[30];									// Ignição de decisões.
	for(i=0;i<b;i++){												// Salvando variáveis na Struct x do tipo struct estoque.
		for(j=0;j<c;j++){
			printf("Qual o nome do armazem?\n");
			scanf("%s",&x[i][j].armaz);
			printf("Qual o nome do produto?\n");
			scanf("%s",&x[i][j].nome);
			printf("Qual o seu preco?\n");
			scanf("%f",&x[i][j].preco);
		}
	}
	
	printf("Deseja alterar algum produto?\nDigite 'Sim' ou 'Nao'\n");	// A partir daqui entra as opções de modificar a matriz preenchida.
	scanf("%s",&n);
	
	if( n =='s'){
		
		printf("Qual o nome do armazem?\n");
		scanf("%s",&p);
		printf("Qual o nome do produto?\n");			// Caso queira alterar-la, escolhe entre nome do armazem e do produto
		scanf("%s",&q);
		
		for(i=0;i<1;i++){			//Primeiro for
			for(j=0;j<2;j++){		//Segundo for
			ret = strcmp (p,x[i][j].armaz);			// Comparação de Strings
			ret2 = strcmp(q,x[i][j].nome);			// Comparação de Strings
				if( ret == 0 &&  ret2 == 0){			// Se o produto for achado, é possivel alterar o nome ou preco.
					printf("O seu produto e %s?\nDigite SIM ou NAO\n",x[i][j].nome);
					scanf("%s",&r);
					if( r =='s'){	//Primeiro if
						printf("O que voce deseja alterar?\nDigite\n1-PRECO\n2-NOME\n");	 // 1 para Preco 2 Para nome
						scanf("%d",&s);
						if( s == 1){							// Caso queira aletrar o preco.
							printf("Qual o valor novo do produto %.1f?\n",x[i][j].preco);
							scanf("%f",&x[i][j].preco);
														
						}
						if( s == 2){							// Caso queira aterar o nome.
							printf("Qual o novo nome do produto %s?\n",x[i][j].nome);
							scanf("%s",&x[i][j].nome);
							
						}
					}	//Fecha primeiro if
			
				}	//Fehca segundo for
			}		//Fecha o primeiro for
				
		}		
	}	//Primeiro if Deseja alterar algo sim/nao
	if(n =='n'){											// Se o produto nao existir, é mostrado novamente a matriz e o programa é finaliza.
	printf("\n");	
	}
	printf("Nova Matriz e:\n");
	for(i=0;i<b;i++){
		for(j=0;j<c;j++){
		printf("Armazem:%s\nProduto:%s\nPreco:%.1f\n",x[i][j].armaz,x[i][j].nome,x[i][j].preco);  		// Saida final da matriz.
		}
	}
system("pause");
}//			Int main
