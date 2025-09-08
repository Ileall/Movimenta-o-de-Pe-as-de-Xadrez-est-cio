#include <stdio.h>

int main() {
    
   int movimento_baixo = 2;
   int movimento_esquerda = 1;
   int contador = 0;

   printf("Movimento do cavalo:\n");
   printf("--------------------\n");

   //Primeira parte
   printf("Primeira parte do L (2 casas para baixo):\n");
   for (int i = 0; i < movimento_baixo; i++)
   {
    printf("Baixo\n");
   }

   //Segunda parte
   printf("\nSegunda Parte do L (1 casa para esquerda):\n");
   
   while (contador < movimento_esquerda)
   {
    printf ("Esquerda\n");
    contador++;
   }

   printf ("\nMovimento completo do cavalo em L realizado");
   

    return 0;
}