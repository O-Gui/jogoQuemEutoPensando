#include <stdio.h>
#include <string.h>

void inicio();

int main() {
    inicio();
    return 0;
}

void inicio() {
    int role, frequencia, qualidade;
    char resposta[3];
    char nome[50];
    
    printf("Vou advinhar em quem voce esta pensando\n");
    printf("Qual dessas roles define melhor o jogador que voce esta pensando?\n");
    printf("Digite: 1 para CARRY\n");
    printf("Digite: 2 para MID\n");
    printf("Digite: 3 para OFF\n");
    printf("Digite: 4 para SUP4\n");
    printf("Digite: 5 para SUP5\n");

    
    scanf("%d", &role);
    
    switch(role) {
        case 1: // CARRY


            printf("Digite: 1 se esse jogador e lendario moh fih\n");
            printf("Digite: 2 se esse jogador joga essa role com frequencia\n");
            printf("Digite: 3 se esse jogador joga essa role com pouca frequencia\n");
            printf("Digite: 4 se esse jogador so joga essa role quando a role principal dele ja esta ocupada\n");
            scanf("%d", &frequencia);
            
            switch(frequencia) {
                case 1:

            printf("Probabilidades estimadas:\n");
            printf("Monstro 50%%\n");
            printf("Guilherme 50%%\n\n");

                    printf("Se esse jogador jogar bem digite 1, se jogar ruim so o meme digite 2\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Guilherme");
                    } else {
                        strcpy(nome, "Monstro");
                    }
                    break;
                case 2:

                    printf("Probabilidades estimadas:\n");
                    printf("Monstro 39%%\n");
                    printf("Yago 36%%\n");
                    printf("AMD 25%%\n\n");


                    printf("Se esse jogador jogar bem digite 1\n");
                    printf("Se esse jogador jogar razoavel digite 2\n");
                    printf("Se esse jogador jogar muito mais ou menos digite 3\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "AMD");
                    } else if (qualidade == 2) {
                        strcpy(nome, "Yago");
                    } else {
                        strcpy(nome, "Monstro");
                    }
                    break;
                case 3:
                    printf("Probabilidades estimadas:\n");
                    printf("Yago 30%%\n");
                    printf("Alex 30%%\n");
                    printf("AMD 30%%\n");
                    printf("Guilherme 10%%\n\n");
                    
                    printf("Se esse jogador jogar muito bem digite 1\n");
                    printf("Se esse jogador jogar bem digite 2\n");
                    printf("Se esse jogador jogar razoavel digite 3\n");
                    printf("Se esse jogador jogar muito mais ou menos digite 4\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Guilherme");
                    } else if (qualidade == 2) {
                        strcpy(nome, "AMD");
                    } else if (qualidade == 3) {
                        strcpy(nome, "Yago");
                    } else {
                        strcpy(nome, "Alex");
                    }
                    break;
                case 4:

                    strcpy(nome, "Guilherme");
                    break;
            }
            break;
        
        case 2: // MID
            printf("Digite: 1 se esse jogador joga essa role com frequencia\n");
            printf("Digite: 2 se esse jogador joga essa role com pouca frequencia\n");
            scanf("%d", &frequencia);
            
            switch(frequencia) {
                case 1:


                   printf("Probabilidades estimadas:\n");
                   printf("Guilherme 80%%\n");
                   printf("Yago 20%%\n\n");

                    printf("Se esse jogador jogar bem digite 1, se jogar razoavel digite 2\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Guilherme");
                    } else {
                        strcpy(nome, "Yago");
                    }
                    break;
                case 2:

                    printf("Probabilidades estimadas:\n");
                    printf("Alex 60%%\n");
                    printf("Nycolas 40%%\n\n");

                    printf("Se esse jogador jogar bem digite 1, se jogar razoavel digite 2\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Alex");
                    } else {
                        strcpy(nome, "Nycolas");
                    }
                    break;
            }
            break;
        
        case 3: // OFF
            printf("Digite: 1 se esse jogador joga essa role com frequencia\n");
            printf("Digite: 2 se esse jogador joga essa role com pouca frequencia\n");
            scanf("%d", &frequencia);
            
            switch(frequencia) {
                case 1:

            printf("Probabilidades estimadas:\n");
            printf("AMD 70%%\n");
            printf("Yago 30%%\n\n");

                    printf("Se esse jogador jogar bem digite 1, se jogar razoavel digite 2\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "AMD");
                    } else {
                        strcpy(nome, "Yago");
                    }
                    break;
                case 2:

                    printf("Guilherme 20%%\n");
                    printf("Monstro 80%%\n\n");

                    printf("Se esse jogador jogar bem digite 1, se jogar ruim digite 2\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Guilherme");
                    } else {
                        strcpy(nome, "Monstro");
                    }
                    break;
            }
            break;
        
        case 4: // SUP4
            printf("Digite: 1 se esse jogador joga essa role com frequencia\n");
            printf("Digite: 2 se esse jogador joga essa role com pouca frequencia\n");
            scanf("%d", &frequencia);
            
            switch(frequencia) {
                case 1:

            printf("Probabilidades estimadas:\n");
            printf("Nycolas 70%%\n");
            printf("Alex 30%%\n\n"); 

                    printf("Se esse jogador jogar bem digite 1, se jogar razoavel digite 2\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Nycolas");
                    } else {
                        strcpy(nome, "Alex");
                    }
                    break;
                case 2:

                    printf("Guilherme 10%%\n");
                    printf("AMD 60%%\n");
                    printf("Yago 13%%\n");
                    printf("Monstro 12%%\n\n");

                    printf("Se esse jogador jogar muito bem digite 1\n");
                    printf("Se jogar bem digite 2\n");
                    printf("Se jogar razoavel digite 3\n");
                    printf("Se esse jogador for pior que comer sem carne digite 4\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Guilherme");
                    } else if (qualidade == 2) {
                        strcpy(nome, "AMD");
                    } else if (qualidade == 3) {
                        strcpy(nome, "Yago");
                    } else {
                        strcpy(nome, "Monstro");
                    }
                    break;
            }
            break;
        
        case 5: // SUP5
            printf("Digite: 1 se esse jogador joga essa role com frequencia\n");
            printf("Digite: 2 se esse jogador joga essa role com pouca frequencia\n");
            scanf("%d", &frequencia);
            
            switch(frequencia) {
                case 1:
                   printf("Probabilidades estimadas:\n");
                   printf("nycolas 70%%\n"); 
                   printf("alex 30%%\n\n"); 

                    printf("Se esse jogador jogar bem digite 1, se jogar razoavel digite 2\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Nycolas");
                    } else {
                        strcpy(nome, "Alex");
                    }
                    break;
                case 2:
                    printf("Probabilidades estimadas:\n");
                    printf("AMD 70%%\n"); 
                    printf("yago 15%%\n"); 
                    printf("monstro 15%%\n\n");

                    printf("Se esse jogador jogar bem digite 1\n");
                    printf("Se esse jogador jogar razoavel digite 2\n");
                    printf("Se esse jogador jogar ruim digite 3\n");
                    scanf("%d", &qualidade);
                    if (qualidade == 1) {
                        strcpy(nome, "Yago");
                    } else if (qualidade == 2) {
                        strcpy(nome, "AMD");
                    } else {
                        strcpy(nome, "Monstro");
                    }
                    break;
            }
            break;
        
        case 6: // Jogadores que quase nao jogam
            strcpy(nome, "Tiago ou Macaco");
            printf("%s quase nao joga DOTA, entao nao errei\n\n", nome);
            inicio();
            return;
        
        case 7: // Jogadores que nao jogam
            strcpy(nome, "Eguiberto, Leandro ou Durval");
            printf("%s nao joga DOTA, entao nao errei\n\n", nome);
            inicio();
            return;
        
        default:
            printf("Opcao invalida, reiniciando...\n");
            inicio();
            return;
    }
    
    printf("Eu acho que o jogador e: %s. Acertei? (s/n)\n", nome);
    scanf("%s", resposta);
    
    if (strcmp(resposta, "s") == 0) {
        printf("Sou foda\n\n");
    } else {
        printf("Okay errei, mas o Guilherme me fez em uma tarde.\n\n");
    }
    
    inicio();
}
