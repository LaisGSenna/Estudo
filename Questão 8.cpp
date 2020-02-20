#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *pt;

 int main()
{ 
  char pont, c; 
  int i = 0;
   
  pt = fopen("arq.txt","r");
  
 if(pt == NULL)
  printf("Impossivel Gerar");
 
 else
 { 
   while(!feof(pt))     
   {  
     printf("%c\n", c);
      c = getc(pt);
       i++;
   }
   
   printf("Total: %d", i-1);
   fclose(pt);
 }
  return 0;
}

