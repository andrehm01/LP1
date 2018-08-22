#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void menu();
void opcao_menu(); 
void visualizar_fornecedor();
void inputEstoque();
void visualizar_Estoque();

struct Fornecedor {

	char cia[25];
	char cnpj[15];
	char tel[15];
	char email[40];
};

struct Data {
    char dia[3];
    char mes[3];
    char ano[5];
};


struct Produto{
	struct Fornecedor f;
	char nome[25];
	int  qtd;
	float custo;
	float valorc;	
	struct Data d;
	 
};

struct Fornecedor fornecedores;
struct Produto produtos;


void preencheData (struct Data *p){
	printf("dia da compra: ");
	scanf("%s",p->dia);
	printf("mes da compra: ");
	scanf("%s",p->mes);
	printf("ano da compra: ");
	scanf("%s",p->ano);
}

//preencher fornecedores
void preenche_fornecedor (struct Fornecedor *p){


	fflush(stdin);
    	printf("nome da empresa: ");
	getchar();
   	fgets (p->cia,25,stdin);
	fflush(stdin);
	printf("informe cnpj do fornecedor: ");
	scanf("%s",p->cnpj);
	printf("telefone: ");
	//scanf("%s",p->tel);
	getchar();
   	fgets (p->tel,15,stdin);
	printf("email: ");
	scanf("%s",p->email);
}
void preenche_fornecedor2 (struct Fornecedor *p){

	fflush(stdin);
	printf("empresa fornecedora: ");
	getchar();
   	fgets (p->cia,25,stdin);
}
void preenche_produtos (struct Produto *p){
	
	preenche_fornecedor2(&(*p).f);
	preencheData(&(*p).d);
	printf ("informe o produto p/ cadastrar no estoque: ");
	getchar();
	//scanf("%s",p->nome);
	fgets (p->nome,25,stdin);
	printf ("informe a quantidade da compra: ");
	scanf("%d",&p->qtd);
	printf("informe o preço unitario: ");
	scanf("%f",&p->custo);
	p->valorc=p->custo*p->qtd;
	printf("valor da mercadoria no estoque %.2f: ",p->valorc);
	
	
 }

void quebra_linha(){
	printf("\n");
}


int main(){
 	menu();   
	
		
	
       return 0;

}

// cadastrar fornecedor e escrever no arquivo
void inputFornecedor(){
	system("clear");
	printf ("----------------------- Empresa SuperMetal -----------------------\n");
    	quebra_linha();
	printf ("------------------------------------------------------------------\n");
	quebra_linha();
	printf("Cadastro de fornecedores:");
	quebra_linha();
	int i;		
	char resp;
	FILE* f;
	f = fopen("projetofornecedor.bin", "ab");
	do
	{
		preenche_fornecedor(&fornecedores);
		fwrite(&fornecedores, sizeof(struct Fornecedor), 1, f);
			
		printf("gostaria de cadastrar outro fornecedor (s/n) ? \n");
		getchar();
		scanf("%c",&resp);
		
	}while(resp =='s');
	fclose(f);
	system("clear");
	menu();
}

void visualizar_fornecedor(){
	system("clear");
	printf ("----------------------- Empresa SuperMetal -----------------------\n");
    	quebra_linha();
	printf ("------------------------------------------------------------------\n");
	printf("-------------------------Fornecedores-----------------------------\n");	
	quebra_linha();
	quebra_linha();
	FILE* f;
	f = fopen("projetofornecedor.bin", "rb");
	while (fread(&fornecedores, sizeof(struct Fornecedor), 1, f)==1){
		printf("---------------------------------------------");
		quebra_linha();			
		printf("Empresa: %s", fornecedores.cia);		
		printf("Cnpj: %s\n", fornecedores.cnpj);
		printf("Telefone: %s", fornecedores.tel); 
		printf("Email: %s\n", fornecedores.email);
		printf("---------------------------------------------");
		quebra_linha();	
	}		
	fclose(f);
	getchar();
	getchar();
	menu();
}

void inputEstoque(){
	char resp;
	system("clear");
	printf ("----------------------- Empresa SuperMetal -----------------------\n");
    	quebra_linha();
	printf ("------------------------------------------------------------------\n");
	quebra_linha();
	printf("Cadastro de estoque");
	quebra_linha();
	quebra_linha();
	
	FILE* f;
	f = fopen("projetoestoque.bin", "ab");
	do
	{
	preenche_produtos (&produtos);
	fwrite(&produtos, sizeof(struct Produto), 1, f);
	quebra_linha();
	printf("gostaria de cadastrar outro produto (s/n) ? \n");
	getchar();
	
	scanf("%c",&resp);
		
	}while(resp =='s');
	
	fclose(f);
	system("clear");
	menu();

}
void visualizar_Estoque(){
	system("clear");
		printf ("----------------------- Empresa SuperMetal -----------------------\n");
    	quebra_linha();
	printf ("------------------------------------------------------------------\n");
	printf("-------------------------Estoque-----------------------------\n");
	quebra_linha();
	quebra_linha();	
	FILE* f;
	f = fopen("projetoestoque.bin", "rb");
	while (fread(&produtos, sizeof(struct Produto), 1, f)==1){
		printf("---------------------------------------------");
		quebra_linha();			
		printf("Empresa: %s\n", produtos.f.cia);		
		printf("Data da compra: %s/%s/%s\n", produtos.d.dia, produtos.d.mes, produtos.d.ano);   			
		printf ("Produto: %s", produtos.nome);
		printf ("Quantidade: %d\n", produtos.qtd);
		printf("preco unidade: %.2f\n", produtos.custo);
		printf("valor do estoque: %.2f\n", produtos.valorc);	
 			
		printf("---------------------------------------------");
		quebra_linha();	
	}
			
	fclose(f);
	getchar();
	getchar();
	menu();
}


// menu
void menu (){
	system("clear");
    	printf ("----------------------- Empresa SuperMetal -----------------------\n");
    	quebra_linha();
	printf ("------------------------------------------------------------------\n");
	printf("Fundada em Maio de 1995, originalmente no bairro de Santo Andre,\nSP, tradicional polo metalurgico, a Supermetal atua no comércio \nde chapas metais.\n");
	printf("Possuímos um moderno centro de serviços com profissionais qualificados \npara garantirmos a qualidade dos nossos produtos.\n");
	quebra_linha();
	printf("Menu:\n");
	printf("1 - Consultar estoque cadastrado: \n");
	printf("2 - Consultar fornecedores cadastrados: \n");
	printf("3 - Cadastrar novo item no estoque: \n");
	printf("4 - Cadastrar novo fornecedor: \n"); 
	printf("5 - sair\n");
	opcao_menu(); 
}
void opcao_menu(){
	int opcao;
	
	scanf("%d",&opcao);
	
	switch (opcao){
		case 1:
			visualizar_Estoque();
		break;
		
		case 2:
			visualizar_fornecedor();
		break;
		
		case 3:
			inputEstoque();	
		break;
		
		case 4:
			inputFornecedor();
		break;
		
		case 5:
			system("clear");
			printf ("----------------------- Empresa SuperMetal -----------------------\n");
			quebra_linha();
			printf ("------------------------------------------------------------------\n");

			quebra_linha();
			quebra_linha();

		quebra_linha();
		
		break;
		default:
			
			getchar();
			quebra_linha();
			menu();

	}
}
