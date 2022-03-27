#include <stdio.h>
#include <conio.h>

char kare[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int kazanma_kontrol();
void oyun_alani();

int main()
{
    int oyuncu = 1, i, tercih;

    char isaret;
    do
    {
        oyun_alani();
        oyuncu = (oyuncu % 2) ? 1 : 2;

        printf("oyuncu %d, bir sayi giriniz:  ", oyuncu);
        scanf("%d", &tercih);

        isaret = (oyuncu == 1) ? 'X' : 'O';

        if (tercih == 1 && kare[1] == '1')
            kare[1] = isaret;
            
        else if (tercih == 2 && kare[2] == '2')
            kare[2] = isaret;
            
        else if (tercih == 3 && kare[3] == '3')
            kare[3] = isaret;
            
        else if (tercih == 4 && kare[4] == '4')
            kare[4] = isaret;
            
        else if (tercih == 5 && kare[5] == '5')
            kare[5] = isaret;
            
        else if (tercih == 6 && kare[6] == '6')
            kare[6] = isaret;
            
        else if (tercih == 7 && kare[7] == '7')
            kare[7] = isaret;
            
        else if (tercih == 8 && kare[8] == '8')
            kare[8] = isaret;
            
        else if (tercih == 9 && kare[9] == '9')
            kare[9] = isaret;
            
        else
        {
            printf("gecersiz hamle,tekrar giriniz! ");

            oyuncu--;
            getch();
        }
        i = kazanma_kontrol();

        oyuncu++;
    }while (i ==  - 1);
    
    oyun_alani();
    
    if (i == 1)
        printf("==>\aoyuncu %d kazandi! ", --oyuncu);
    else
        printf("==>\aoyun berabere!");

    getch();

    return 0;
}


int kazanma_kontrol()
{
    if (kare[1] == kare[2] && kare[2] == kare[3])
        return 1;
        
    else if (kare[4] == kare[5] && kare[5] == kare[6])
        return 1;
        
    else if (kare[7] == kare[8] && kare[8] == kare[9])
        return 1;
        
    else if (kare[1] == kare[4] && kare[4] == kare[7])
        return 1;
        
    else if (kare[2] == kare[5] && kare[5] == kare[8])
        return 1;
        
    else if (kare[3] == kare[6] && kare[6] == kare[9])
        return 1;
        
    else if (kare[1] == kare[5] && kare[5] == kare[9])
        return 1;
        
    else if (kare[3] == kare[5] && kare[5] == kare[7])
        return 1;
        
    else if (kare[1] != '1' && kare[2] != '2' && kare[3] != '3' &&
        kare[4] != '4' && kare[5] != '5' && kare[6] != '6' && kare[7] 
        != '7' && kare[8] != '8' && kare[9] != '9')

        return 0;
    else
        return  - 1;
}


void oyun_alani()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("oyuncu 1 (X)  -  oyuncu 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", kare[1], kare[2], kare[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", kare[4], kare[5], kare[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", kare[7], kare[8], kare[9]);

    printf("     |     |     \n\n");
}