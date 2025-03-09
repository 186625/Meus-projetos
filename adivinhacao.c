#include<stdio.h> //biblioteca que tem as coisas de escrever na tela, etc.//

int main() {
    
    //imprime cabeçalho do nosso jogo
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n");

    int numerosecreto = 42;
    // printf("O número %d é o secreto. Não conta pra ninguém!\n", numerosecreto); - imprime a variável
    int chute;

    printf("Qual é o seu chute?");
    scanf("%d", &chute);
    printf("Seu chute foi %d", chute);

}
