#include <stdio.h>
#include <stdlib.h>

typedef struct 
{	int Dia, 
	Mes, 
	Ano;
}	TData;

typedef struct
{	char Lograd[51];
	char Comple[25];
	char Bairro[25];
	char Cidade[35];
	char UF[3];
	int CEP;
}	TEnder;

typedef struct
{	char Nome[41];
	char CPF[15];
	char RG[15];
	char Sexo;
	TData DataNasc;
}	TPessoa;

typedef struct
{	char Razao[51];
	char CNPJ[19];
	char InsEst[14];
}	TEmpresa;

typedef union
{	TPessoa DetCliFisica;
	TEmpresa DetCliJuridica;
}	TDetalhe;

typedef struct
{	TEnder Endereco;
	TData DataCad;
	TDetalhe Detalhe;
	float LimiteCred;
	char Tipo;
}	TCliente;

int main (void)
{	TCliente vCliente;
	
	printf("Informe o tipo do cliente:\n");
	scanf("%c", &vCliente.Tipo);
	
	if(vCliente.Tipo == 'E')	
	{	printf("Razao Social: ");
		scanf("%s", vCliente.Detalhe.DetCliJuridica.Razao);
		
		printf("CNPJ: ");
		scanf("%s", vCliente.Detalhe.DetCliJuridica.CNPJ);
		
		printf("Inscricao estadual: ");
		scanf("%s", vCliente.Detalhe.DetCliJuridica.InsEst);
	}
	else
	{	printf("Nome: ");
		scanf("%s", vCliente.Detalhe.DetCliFisica.Nome);
		
		printf("CPF: ");
		scanf("%s", vCliente.Detalhe.DetCliFisica.CPF);
		
		printf("RG: ");
		scanf("%s", vCliente.Detalhe.DetCliFisica.RG);
		
		printf("RG: ");
		scanf("%s", vCliente.Detalhe.DetCliFisica.Sexo);
		
		printf("Data de nascimento: ");
		scanf("%d/%d/%d", &vCliente.Detalhe.DetCliFisica.Dia,
						  &vCliente.Detalhe.DetCliFisica.Mes,
						  &vCliente.Detalhe.DetCliFisica.Ano);
	}
	return 0;
}