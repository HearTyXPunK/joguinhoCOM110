#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>
#include<windows.h>
#include<conio.h>
#define NL 2
#define NC 2

int main(){
  	int i=1, j=1, op, op2;
	int k=0, t=0;
	int A, B, C, D;
	int numeros[NL][NC];
	int resposta[NL][NC];
	int acertos=0;
	char c, nome[20];
	
  
do{

	system("color F0");                                                                                                                         
    printf("================================================ JOGO DA MEM%cRIA ======================================================\n", 224);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                          Escolha uma op%c%co                                                          %c\n", 179, 135, 198, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                              1. Jogar                                                               %c\n", 179, 179);
    printf("%c                                              2. Sair                                                                %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
	 //até aqui é o menu feito
printf("\n  Op%c%co: ", 135, 198);
scanf(" %d", &op);
printf("\n");

switch (op){
	
	
	case 1:
		system("cls");
		printf("================================================ JOGO DA MEM%cRIA ======================================================\n", 224);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                               Escolha o modo de jogo                                                %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                1.Memorize elementos                                                 %c\n", 179, 179);
    printf("%c                                                2.Guarde os pares                                                    %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
	  //até aqui é o menu 2 feito
		printf("\n  Op%c%co: ", 135, 198);
	  scanf(" %d", &op2);
		switch (op2){
			case 1:
				srand(time(NULL));
				printf("Jogador, digite seu nome: ");
				scanf("%s", nome);
				i=0;
				j=0;
				for(k=0; k<5; k++){
				printf("\nJogada %d: \n", k+1);
				printf("Memorize os numeros abaixo: \n");
				printf("PRESSIONE ENTER PARA INICIAR.\n");
				do{
		        	c = getch();
		    	}
				while (c != 13);
				
				for(i=0; i<NL; i++){
					for(j=0; j<NC; j++){
						numeros[i][j] = (rand() % 30);
						}
				}
				
				t=5;
				do{
					system("cls");
					printf("Tempo: %d\n\n", t);
					t--;
					for(i=0; i<NL; i++){
						printf("   ");
						for(j=0; j<NC; j++){
							printf("%d ", numeros[i][j]);
						}
					printf("\n");	
					}
					sleep(1);
				}
				while(t>0);
				system("cls");
				printf("\nInsira os numeros memorizados de acordo com a matriz: \n");
				printf("\n  |A  B|\n  |C  D|\n\n");
				printf("  A = ");
				scanf("%d", &resposta[0][0]);
				printf("  B = ");
				scanf("%d", &resposta[0][1]);
				printf("  C = ");
				scanf("%d", &resposta[1][0]);
				printf("  D = ");
				scanf("%d", &resposta[1][1]);
				printf("\n");
				sleep(1);
				system("cls");
				for(i=0; i<NL; i++){
					for(j=0; j<NC; j++){
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
				system("pause");
				system("cls");
				break;
			case 2:
				
			break;
		}
	case 2: 
	
	break;

}
}
while(op!=2);

system("pause");
return 0;
}
