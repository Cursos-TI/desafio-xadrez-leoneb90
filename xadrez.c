#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repeti ção e funções para determinar os limites de movimentação dentro do jogo.
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    void moverBispo(int casa){ 
        if (casa > 0){
        printf("Direita, cima\n");
        moverBispo (casa - 1);        
    }
}   
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    void movertorre(int casas){
        if (casas > 0){ 
        printf("Direita \n");
        movertorre(casas - 1);
    }
}
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    void moverRainha (int casas){
        if (casas > 0){
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
      void moverCavalo (int casa){  
      if (casa > 0){
        printf("Frente, Frente, direita \n");
        moverCavalo(casa - 1);
    }
}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
int main(){
    
    moverBispo(5);
    movertorre(5);
    moverRainha(8);
    moverCavalo(2);

    return 0;
}

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
