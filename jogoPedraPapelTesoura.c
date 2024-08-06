#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int verificacao = 1, rodadas, i, escolha_jogador, escolha_computador, vitoria = 0, derrota = 0, empate = 0;
	char nome[100];
	char sair[5] = "sair";

	while(verificacao != 0){
		system("cls");
		fflush(stdin);
		printf("Informe o nome o jogador: ");
		gets(nome);

		verificacao = strcmp(nome, sair);
		if(verificacao == 0){
			break;
		}

		printf("Rodadas: ");
		scanf("%d", &rodadas);

		for(i = 0; i < rodadas; i++){
			srand(time(NULL));

			system("cls");
			fflush(stdin);
			printf("---- PEDRA PAPEL TESOURA ----");
			printf("\n1 - Pedra");
			printf("\n2 - Papel");
			printf("\n3 - Tesoura");

			escolha_computador = 1 + (rand() % 3);

			printf("\nFaca a sua escolha: ");
			scanf("%d", &escolha_jogador);

			//escolha_computador = 1 + (rand() % 3);
			//

			//escolha jogador 1 - Pedra
			if(escolha_jogador == 1 && escolha_computador == 1){
				empate += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nEmpate!\n");
				system("pause");
			}else if(escolha_jogador == 1 && escolha_computador == 2){
				derrota += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nDerrota!\n");
				system("pause");
			}else if(escolha_jogador == 1 && escolha_computador == 3){
				vitoria += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nVitoria!\n");
				system("pause");
			}

			//escolha jogador 2 - Papel
			else if(escolha_jogador == 2 && escolha_computador == 1){
				vitoria += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nVitoria!\n");
				system("pause");
			}else if(escolha_jogador == 2 && escolha_computador == 2){
				empate += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nEmpate!\n");
				system("pause");
			}else if(escolha_jogador == 2 && escolha_computador == 3){
				derrota += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nDerrota!\n");
				system("pause");
			}

			//Escolha jogador 3 - Teroura
			else if(escolha_jogador == 3 && escolha_computador == 1){
				derrota += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nDerrota!\n");
				system("pause");
			}else if(escolha_jogador == 3 && escolha_computador == 2){
				vitoria += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nVitoria!\n");
				system("pause");
			}else if(escolha_jogador == 3 && escolha_computador == 3){
				empate += 1;
				system("cls");
				printf("Escolha do jogador: %d", escolha_jogador);
				printf("\nEscolha computador: %d", escolha_computador);
				printf("\nEmpate!\n");

				system("pause");
			}
		}// fim for
			system("cls");
			printf("----- PLACAR -----");
			printf("\nVitorias: %d", vitoria);
			printf("\nDerrotas: %d", derrota);
			printf("\nEmpates: %d\n\n", vitoria);
			system("pause");
	}//fim while

}//fim main