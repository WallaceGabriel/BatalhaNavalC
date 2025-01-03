#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <MMsystem.h>
#include <conio.h>
#include "gconio.h"
#include <string.h>


int main()
{

    system("cls");
    system("chcp 65001");
    textbackground(WHITE);
    textcolor(BLACK);
    PlaySound(TEXT("Eric-Skiff.wav"),NULL,SND_ASYNC);
    clrscr();
    int opcao;
    do
    {
        gotoxy(30,1);printf(" _____      _______       _      _    _");
        gotoxy(30,2);printf("| |  _\\  /\\|__   __|/\\   | |    | |  | |   /\\    ");
        gotoxy(30,3);printf("| |_) | /  \\  | |  /  \\  | |    | |__| |  /  \\    ");
        gotoxy(30,4);printf("|  _ < / /\\ \\ | | / /\\ \\ | |    |  __  | / /\\ \\");
        gotoxy(30,5);printf("| |_) / ____ \\| |/ ____ \\| |____| |  | |/ ____ \\  ");
        gotoxy(30,6);printf("|____/_/    \\_\\_/_/    \\_\\______|_|  |_/_/    \\_\\");

        gotoxy(30,7);printf(" _   _     __      __     _ ");
        gotoxy(30,8);printf("| \\ | |   /\\ \\    / /\\   | |");
        gotoxy(30,9);printf("|  \\| |  /  \\ \\  / /  \\  | |");
        gotoxy(30,10);printf("| . ` | / /\\ \\ \\/ / /\\ \\ | |");
        gotoxy(30,11);printf("| |\\  |/ ____ \\  / ____ \\| |____");
        gotoxy(30,12);printf("|_| \\_/_/    \\_\\/_/    \\_\\______|");

        gotoxy(30,13);printf("╔═════════════════════════╗\n");
        gotoxy(30,14);printf("║   ESCOLHA UMA OPCAO     ║ ");
        gotoxy(30,15);printf("║   [1] - INICIO          ║ ");
        gotoxy(30,16);printf("║   [2] - REGRAS          ║ ");
        gotoxy(30,17);printf("║   [3] - teste           ║ ");
        gotoxy(30,18);printf("║   [0] - SAIR            ║ ");
        gotoxy(30,19);printf("╚═════════════════════════╝\n");
        gotoxy(30,20);scanf("%d", &opcao);

        system("cls");
// switch criado para armazenar as opcoes que o usuario tem //
        switch (opcao)
        {
        case 1:
           printf("jogo");
            break;
        case 2:
           printf("regras");
            break;
        case 3:
           printf("teste");
            break;
        case 0:

            gotoxy(40,6);printf("¯AGRADECIMENTOS...!");
            gotoxy(40,7);printf("¯!");
            gotoxy(40,8);printf("¯DESENVOLVIDO POR!");
            gotoxy(40,9);printf("¯!");
            gotoxy(40,10);printf("¯!");
            gotoxy(40,11);printf("¯!");
            gotoxy(40,12);printf("¯WALLACE GABRIEL!");
            gotoxy(40,20);printf("Saindo do programa...!\n");
            break;
        default:
            printf("Opcao invalida!\n\n");
            break;
        }

        gotoxy(40,21);printf("Pressione ENTER para continuar...");
        getchar();
        getchar();
        system("cls");


    }
    while (opcao != 0);
    return 0;
}


