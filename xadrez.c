#include <stdio.h>

int main()
{
   // Mover a Torre 5 casas decimais para a direita
   for (int i = 0; i < 5; i++)
   {
    printf("Torre: Direita\n"); // imprime a direção do movimento da Torre
   }
    
   // Mover o Bispo 5 casas na diagonal
   int i = 0;

   do
   {
    printf("Bispo: Acima + Direita\n");
    i++;
   } while (i < 5);

   // Mover a Rainha oito casas para a esquerda

   i = 0; // reinicia i

   while (i < 8)
   {
    printf("Rainha: Esquerda\n");
    i++;
   }
 
    return 0;
}