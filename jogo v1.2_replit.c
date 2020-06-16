#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>
#include<unistd.h>


int main(){
  int i=1, j=1, op, op2, op3;
	int k=0, t=0;
	int A, B, C, D;
	int numeros[2][2];
	int resposta[2][2];
	int acertos=0;
	int matriz[2][2], par, pontos=0;
	char c, nome[20];
  setlocale(LC_ALL,"");
  
do{


	system("clear");                                                                                                                      
    printf("============================================================ JOGO DA MEMÓRIA ===========================================================\n");
    printf("========================================================================================================================================\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                          Escolha uma opção                                                                           |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                              1. Jogar                                                                                |\n");
    printf("|                                              2. Sair                                                                                 |\n");
    printf("|                                              3. Créditos                                                                             |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("========================================================================================================================================\n");
	//atÃ© aqui menu geral feito
		printf("\n  Opção: ");
		scanf(" %d", &op);
		printf("\n");

switch (op){
	
	
	case 1:
	system("clear");
	printf("============================================================ JOGO DA MEMÓRIA ===========================================================\n");
    printf("========================================================================================================================================\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                          Escolha uma opção                                                                           |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                              1. Memorize os elementos                                                                |\n");
    printf("|                                              2. Guarde os pares                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("========================================================================================================================================\n");
	//até aqui menu de modo de jogo
	printf("\n  Opção: ");
	  scanf(" %d", &op2);
		switch (op2){
			case 1:
				//modo de jogo 1
			system("clear");
				printf("============================================================ JOGO DA MEMÓRIA ===========================================================\n");
   				printf("========================================================================================================================================\n");
   				printf("|                                                                                                                                      |\n");
   				printf("|                                          Escolha uma opção                                                                           |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                              1. Fácil                                                                                |\n");
    			printf("|                                              2. Médio                                                                                |\n");
    			printf("|                                              3. Difícil                                                                              |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("========================================================================================================================================\n");
	//até aqui menu de dificuldade
			printf("\n  Opção: ");
			scanf(" %d", &op3);
			switch(op3){
			  	case 1:
				  	//jogo no fácil
						srand(time(NULL));
						printf("%40c Jogador, digite seu nome: ", ' ');
						scanf("%s", nome);
						i=0;
						j=0;
						for(k=0; k<5; k++){
						printf("\n%40c Jogada %d: \n", ' ', k+1);
						printf("%40c Memorize os números! \n",' ');
						printf("%40c PRESSIONE ENTER PARA INICIAR.\n",' ');
						getchar();
						for(i=0; i<2; i++){
							for(j=0; j<2; j++){
								numeros[i][j] = (rand() % 30);
								}
						}
						
						t=4;
						do{
							system("clear");
							printf("%50c Tempo: %d\n\n", ' ', t);
							t--;
							
							for(i=0; i<2; i++){
								printf("%51c ", ' ');
								for(j=0; j<2; j++){
									printf("%d ", numeros[i][j]);
								}
							printf("\n");	
							}
							sleep(1);
						}
						while(t>0);
						system("clear");
						printf("\n%30cInsira os números memorizados de acordo com a matriz: \n",' ');
						printf("\n%50c  |A  B|\n%50c  |C  D|\n\n",' ',' ');
						printf("%50c  A = ",' ');
						scanf("%d", &resposta[0][0]);
						printf("%50c  B = ",' ');
						scanf("%d", &resposta[0][1]);
						printf("%50c  C = ",' ');
						scanf("%d", &resposta[1][0]);
						printf("%50c  D = ",' ');
						scanf("%d", &resposta[1][1]);
						printf("\n");
						sleep(1);
						system("clear");
						
						for(i=0; i<2; i++){
							for(j=0; j<2; j++){
								if(resposta[i][j] == numeros[i][j]){
									acertos++;
								}
								else{
									break;
									}
								}
							}
						}
						printf("Cada acerto vale um ponto. \n");
						printf("%s, TOTAL DE PONTOS = %d de 24\n\n", nome, acertos);
            printf("Pressione ENTER para continuar");
						getchar();
						break;
				case 2:
				//médio
				break;
				}
			break;
			
			case 2:
				//modo de jogo 2
			system("clear");
				printf("============================================================ JOGO DA MEMÓRIA ===========================================================\n");
   				printf("========================================================================================================================================\n");
   				printf("|                                                                                                                                      |\n");
   				printf("|                                          Escolha uma opção                                                                           |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                              1. Fácil                                                                                |\n");
    			printf("|                                              2. Médio                                                                                |\n");
    			printf("|                                              3. Difícil                                                                              |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("========================================================================================================================================\n");
				//até aqui menu de dificuldade
			printf("\n  Opção: ");
			scanf(" %d", &op3);
			switch(op3){
			  	case 1:
			  			//fÃ¡cil
			  			printf("%40c Jogador, digite seu nome: ", ' ');
							scanf("%s", nome);
							
			  			system("clear");
			  			srand(time(NULL));
							for(i=0;i<2;i++){
								for(j=0;j<2;j++){
									if(i==1 && j==1)
										matriz[i][j]= matriz[0][0];
									else
										matriz[i][j]= rand() % 100;
								}
							}
							t=3;
							do{
								system("clear");
								printf("%50c Tempo: %d\n\n", ' ', t);
								t--;
								
								for(i=0;i<2;i++){
									printf("\n%51c",' ');
									for(j=0;j<2;j++){
										printf("%d ", matriz[i][j]);
									}
								}
								sleep(1);
							}
							while(t>0);
							system("clear");
							printf("%40c Digite o número que tem um par:",' ');
							scanf(" %d", &par);
							if(par == matriz[0][0]){
								printf("\n%40c Parabéns você acertou!\n",' ');
								pontos++;
								printf("%40c Você tem %d ponto(s).\n",' ', pontos);
							}
							else{
								printf("\n%40c Você errou!\n",' ');
								printf("%30c Você tem %d ponto(s).",' ', pontos);
							}
							printf("Pressione ENTER para continuar");
							getchar();
							break;
				case 2:
				//mÃ©dio
				break;
			}
			break;
		}
	break;
		
	case 2:
	//sai do jogo
	break;
	
	case 3:
		system("clear");
		printf("%40c Recurso não disponível no pre-alpha\n", ' ');
		printf("Créditos estarão disponíveis no lançamento oficial\n");
		printf("Pressione ENTER para continuar\n");
		getchar();
		break;
	}
	
	
}
while(op!=2);
printf("Pressione ENTER para continuar");
getchar();
return 0;
}
