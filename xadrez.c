#include <stdio.h>

// Movimento da Torre
void moverTorre(int casas) {
    if (casas > 0)
    {
        moverTorre(casas - 1); // chamada recursiva
        printf("Torre: direita - %d \n", casas); // imprimir após para sair ordem crescente (pilha de comandos/execução)
        
    }
        
}

// Movimento do Bispo
void moverBispo(int diagonal) {
    
    if (diagonal > 0) {
        // Loop externo: movimento vertical
        for (int vertical = diagonal; vertical <= diagonal; vertical++) {
            // Loop interno: movimento horizontal (igual ao vertical)
            for (int horizontal = diagonal; horizontal <= diagonal; horizontal++) {
                moverBispo(diagonal - 1); // Chamada recursiva para próxima camada
                printf("Bispo: %d acima + %d direita\n", vertical, horizontal);
            }
        }
        
        
    }
}

// Movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0)
    {
        moverRainha(casas - 1); // chamada recursiva
        printf("Torre: esquerda - %d \n", casas); // imprimir após para sair ordem crescente (pilha de comandos/execução)
        
    }
        
}

// Movimento do Cavalo
void moverCavalo() {
    int vertical, horizontal;
    
    for (vertical = 1; vertical <= 2; vertical++)
    {
        printf("Cavalo: acima - %d \n", vertical);

        if (vertical == 2)
        {
            for (horizontal = 1; horizontal <= 1; horizontal++)
            {
                if (horizontal != 1)
                continue;

                printf("Cavalo: direita - %d \n", horizontal);
                
            }
            
        }
        
    }
    
    
}


int main()
{

    int movimento = 1, i = 0; 

   // Mover a Torre 5 casas decimais para a direita

   moverTorre(5);
   printf("\n");

   // Mover o Bispo 5 casas na diagonal
   
   moverBispo(5);
   printf("\n");

   // Mover a Rainha oito casas para a esquerda

   moverRainha(8);
   printf("\n");

   // movimentação do cavalo - 2 casa para cima e 1 casa para direita
  
   moverCavalo();
    
    return 0;
}