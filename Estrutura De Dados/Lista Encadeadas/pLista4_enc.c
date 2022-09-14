/*
	Versao inicial do programa da lista linear de números
	implementada por ENCADEAMENTO.
	Faz a exclusão de elementos da lista. Utiliza subrotina para 
	impressao.
	Utiliza descritor estruturado.
*/
#include <stdio.h>
#include <stdlib.h>

struct regLista
{	int valor;
	struct regLista *prox;
};
typedef struct regLista TItem;

typedef struct
{	TItem *inicio, *final;
	int qtde, soma;
} TLista;

void ImprimeLista(TItem *, char *);

int main(void)
{	int numero;
	TLista lista;
	TItem *aux, *ant;

	/* inicializando o conjunto de descritores da lista */
	lista.inicio = NULL;
	lista.final = NULL;
	lista.qtde = 0;
	lista.soma = 0;
	while (1)
	{	printf("Informe o numero:\n");
		scanf("%d", &numero);

		if (numero < 0)
			break;

		/* criando uma variável struct regLista dinamicamente */
		aux = (TItem *) malloc(sizeof(TItem));
		if (aux == NULL)
		{	puts("Memoria insuficiente para esta operacao");
			return 2;
		}
		
		/* preenchendo os campos da variável criada dinamicamente */
		aux->valor = numero;
		aux->prox = NULL;

		/* fazendo o encadeamento do novo nó da lista */
		if (lista.inicio == NULL)
			lista.inicio = aux;
		else
			ant->prox = aux;

		/* atualizando os demais descritores da lista */
		lista.qtde = lista.qtde + 1;
		lista.soma = lista.soma + aux->valor;
		lista.final = aux;
		
		ant = aux;
	}

	ImprimeLista(lista.inicio, "Conteudo da lista:");
		
	while (1)
	{	printf("Informe o valor a excluir: ");
		scanf("%d", &numero);
	
		if (numero < 0)
			break;
		
		/* Procurando o item a ser excluido */
		ant = NULL;
		aux = lista.inicio;
		while (aux != NULL && numero != aux->valor)
		{	ant = aux;
			aux = aux->prox;
		}
		
		if (aux == NULL)
			puts("Valor nao encontrado");
		else
		{	/* Cuidando do encadeamento */
			if (ant == NULL)
				lista.inicio = aux->prox;
			else
				ant->prox = aux->prox;
			
			/* Atualizando os demais descritores da lista */
			lista.qtde = lista.qtde - 1;
			lista.soma = lista.soma - aux->valor;
			if (aux == lista.final)
				lista.final = ant;
			
			/* Removendo o item da lista */
			free(aux);

			ImprimeLista(lista.inicio, "Novo conteudo da lista:");
		}
	}
	
	return 0;
}

void ImprimeLista(TItem *lista, char * cabec)
{	/* imprimindo os valores da lista */
	int soma, qtde;
	TItem *aux;
	
	if (lista == NULL)
		puts("Lista vazia");
	else
	{	soma = 0;
		qtde = 0;
		printf("\n\n\n%s\n", cabec);
		aux = lista;
		while (aux != NULL)
		{	printf("%d\n", aux->valor);
			soma = soma + aux->valor;
			qtde = qtde + 1;
			
			aux = aux->prox;
		}
		
		printf("Soma = %d   Media = %.2f\n", soma, soma / (float)qtde);
	}
}
