#include <stdio.h>

int main()
{

    int movimento = 1, i = 0; 

   // Mover a Torre 5 casas decimais para a direita
   for (int i = 0; i < 5; i++)
   {
    printf("Torre: Direita - %d\n", movimento); // imprime a direção do movimento da Torre
    movimento++;
   }
   
   printf("\n");

   // Mover o Bispo 5 casas na diagonal
    movimento = 1; // reinicia número de movimentos
   
   do
   {
    printf("Bispo: Acima + Direita - %d\n", movimento);
    i++;
    movimento++;
   } while (i < 5);

   printf("\n");

   // Mover a Rainha oito casas para a esquerda

   i = 0; // reinicia i
   movimento = 1; // reinicia número de movimentos

   while (i < 8)
   {
    printf("Rainha: Esquerda - %d\n", movimento);
    i++;
    movimento++;
   }

   printf("\n");

   // movimentação do cavalo - 2 casa para baixo e 1 casa para esquerda
  
   movimento = 1; //reinicia varável movimento

   for (i = 1; i > 0; i--)
   {
        while (movimento < 3)
        {
            printf("Cavalo: para baixo - %d \n", movimento);
            movimento++;
        }
    printf("Cavalo: Esquerda - %d \n", i);
   }
   
 
    return 0;
}