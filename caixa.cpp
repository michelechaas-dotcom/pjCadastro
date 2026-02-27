#include<stdio.h>
#include<string.h>

struct fila {
	int id;
	char nome[30];
}caixa[10];

int i=0, seq=1,j=0;

void incluir(void){
	if(i < 10){
		printf("\n Informe o nome: ");
		scanf("%s", &caixa[1].nome);
		caixa[i].id = seq;
		seq++;
		i++;
	}
	else
	printf("\n Limite da fila alcançado!\n Aguarde liberar espaço em fila.\n");
}

void excluir(void){
	if(j != i){
		printf("\n %d - %s \n", caixa[j].id, caixa[j].nome);
		j++;
	}
	else
	printf("Fila vazia");
}


void listar(void){
	int k;
	if(i==j)
	printf("lista vazia");
	else 
	for(k=j; k<i; k++)
		printf("\n %d - %s \n", caixa[k].id, caixa[k].nome);
}


main(){
	int op;
	do{
		printf("\n 1- Incluir pessoa na fila");
		printf("\n 2- Atender pessoa");
		printf("\n 3- Verificar listagem de  pessoa");
		printf("\n 4- Sair");
		printf("\n Escolha a opção desejada: ");
		scanf("%d", &op);
		
		switch(op){
			case 1 : incluir();break;
			case 2 : excluir();break;
			case 3 : listar(); break;
		}
		
		if (op > 4)
			printf("\n Opção indisponivel. Informe uma opção conforme o menu.\n");
		
	}while (op!=4);
	
}