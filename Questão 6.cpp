#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct inf
{ char nome[41];
  int cod;
  float preco;
  int quant_estoque;
};
 struct inf peca;
 
 FILE *pt;

int main()
{ int soma = 0;
  
  pt = fopen("peca.bin","wb");

  if(pt == NULL)
   printf("Impossivel Gerar");
  
  else
  { 
    
   while(strcmpi(peca.nome,"x")!=0)
   { 
    printf("Digite o nome da peca: ");fflush(stdin);
      scanf("%s", peca.nome);
     if(strcmp(peca.nome,"x")==0)
     break;
     printf("Digite o codigo da peca: ");fflush(stdin);
      scanf("%d", &peca.cod);
     printf("Digite o preco da peca: ");fflush(stdin);
      scanf("%f", &peca.preco);
     printf("Digite a quantidade em estoque: ");fflush(stdin);
      scanf("%d", &peca.quant_estoque);
     
     fwrite(&peca, sizeof(struct inf), 1, pt);
    
   }
   fclose(pt);
  } 
  
  pt = fopen("peca.bin","rb");
  
  if(pt == NULL)
   printf("Impossivel Gerar");
   
  else
  { 
    fread(&peca, sizeof(struct inf), 1, pt);
   while(!feof(pt))
   { 
     soma+=peca.quant_estoque;
     fread(&peca, sizeof(struct inf), 1, pt);
   }
   printf("Total em estoque: %d", soma);
   fclose(pt);
  } 
  return 0;
} 
