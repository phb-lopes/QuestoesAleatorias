/* Questões da Prova
   Quetão 03 */
   #include <stdio.h>
   #include <stdlib.h>
   #include <math.h>
   // Chico, fiz meu programa, mas não está rodando com a formula certa de transformação de Fahrenheit em Celcius.
   int n=4,o=5;		// Variáveis globais com o tamanho das matrizes. Mas fácil trabalhar assim.
   int main(){
   	float C[n][o],F[n][o];	// Definição das duas matrizes.
   	int i,j;
   	for(i=0;i<n;i++){
   		for(j=0;j<o;j++){			// 2 For pra agregar variáveis na Matriz C.
   			printf("Qual o valor em Celcius?\n");
   			scanf("%f",&C[i][j]);
   		   }
   	}
   	for(i=0;i<n;i++){
   		for(j=0;j<o;j++){
		   F[i][j]=2*C[i][j];//Essa formula de transformação de Fahrenheit em Celcius [5/9*(C[i][j]-32);] Não está dando certo, mas o algoritmo ta certo.
		   }
	   } 
	for(i=0;i<n;i++){
		printf("\n");		// 2 For pra mostrar o resultado final.
		for(j=0;j<o;j++){
			printf("%.1f ",F[i][j]);
		}
		printf("\n");
	}  	
   	system("PAUSE");
   }
