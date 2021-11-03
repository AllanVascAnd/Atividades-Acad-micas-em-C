// Criar um arquivo; escrever uma sequência de numeros; proibido repetir numeros

#include<stdio.h>
#include<conio.h>

int main(){
	
	int n, aux, ctrl=0;
	
	FILE *A;
	A = fopen ("Arquivo1.txt", "a+");

	do{
	
	ctrl = 0;
	printf("\nDigite um valor: ");
	scanf("%d", &n);
	rewind(A);
	
	
	while(!feof(A)){
		fscanf(A,"%d", &aux);
		if(aux==n)
			ctrl = 1;
		
		
	}
		
		if(ctrl == 0 && n!=0)
			fprintf(A, "%d\n", n);
		else
			printf("\nNumero repetido!");
	

    }while(n!=0);
	
	fclose (A);
}
