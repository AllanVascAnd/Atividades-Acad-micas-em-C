// Programa para cadastrar e consultar alunos

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 10

typedef struct ENDERECO {
	char rua [50];
	int numero;
	char bairro [35];
	char cidade[35];
	char cep [10];
};

typedef struct REDES {
	char facebook[100];
	char instagram[100];
	char linkedin[100];
	char outros[100];
};

typedef struct PESSOA {
	char nome[35];
	char telefone [15];
	struct ENDERECO endereco;
	struct REDES redes;
	
};



PESSOA lerDados () {
	PESSOA p;
	
	printf("\nDigite o nome: ");
		gets(p.nome);
	printf("\nDigite o numero de telefone: ");
		gets(p.telefone);
	printf("\nDigite o nome da rua: ");
		gets(p.endereco.rua);
	printf("\nDigite o numero da casa: ");
		scanf("%d", &p.endereco.numero);
	fflush(stdin);
	printf("\nDigite o bairro: ");
		gets(p.endereco.bairro);
	printf("\nDigite a cidade: ");
		gets(p.endereco.cidade);
	printf("\nDigite o cep: ");
		gets(p.endereco.cep);
	printf("\nDigite o perfil do Facebook: ");
		gets(p.redes.facebook);
	printf("\nDigite o perfil do Instagram: ");
		gets(p.redes.instagram);
	printf("\nDigite o perfil do Linkedin: ");
		gets(p.redes.linkedin);
	printf("\nOutra rede social: ");
		gets(p.redes.outros);
	fflush(stdin);
	return p;
};

void escreverDados (PESSOA p) {
	
	printf("\nNOME: %s ",p.nome);
	printf("\nTELEFONE: %s\n ",p.telefone);
	printf("\nENDERECO:");
	printf("\nRUA: %s ",p.endereco.rua);
	printf("\nNUMERO: %d ", p.endereco.numero);
	printf("\nBAIRRO: %s ", p.endereco.bairro);
	printf("\nCIDADE: %s ", p.endereco.cidade);
	printf("\nCEP: %s\n ", p.endereco.cep);
	printf("\nREDES SOCIAIS:  ");
	printf("\nFACEBOOK: %s ", p.redes.facebook);
	printf("\nINSTAGRAM: %s ", p.redes.instagram);
	printf("\nLINKEDIN: %s ", p.redes.linkedin);
	printf("\nOUTRO: %s\n", p.redes.outros);
	
};

int menu()
{
	int i,op;
	system("cls");
	printf("\n\t%c",218);
	for (i=0;i<6;i++)
		printf("%c",196);
	printf("%c SYS-PES %c",180,195);
	for (i=0;i<6;i++)
		printf("%c",196);	
	printf("%c",191);
	printf("\n\t%c 1 - Cadastrar aluno %c %c  ",179,179,179);
	printf("\n\t%c 2 - Consultar aluno %c %c ",179,179,179);
	printf("\n\t%c 3 - Sair              %c",179,179);
	printf("\n\t%c",192);
	for (i=0;i<23;i++)
		printf("%c",196);
	printf("%c",217);
	printf("\n\tDigite sua opcao: ");
	scanf("%d",&op);
	fflush(stdin);
	return op;
};

int main(){
	
	PESSOA alunos [TAM];
	int opcao=0,cadastro=0,i;
	
	do{
		opcao = menu();	
		switch(opcao){
			case 1:
				alunos[cadastro++] = lerDados();
				break;
			case 2:
				for (i=0; i<cadastro;i++)
					escreverDados(alunos[i]);	
				system("pause");
				break;
			case 3:
				printf("\n\n\tFinalizando o programa");
				break;
			default:
				printf("\n\nOpcao invalida! Tente novamente.\n");
				system("pause");
		}
	}while(opcao!=3);
	
};


