#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rastgele_sayi;
    int a=26;
    int b=48;
    char oyuncubirsecim , oyuncuikisecim;

    char matris[a][b];

    int oyuncubirpositionx = 1;
    int oyuncubirpositiony = 2;
    int oyuncuikipositionx = a-2;
    int oyuncuikipositiony = 2;

    for(int i=1;i<a-1;i++){
        for(int j=1;j<b-1;j++){
            rastgele_sayi = rand()%20;
            if(rastgele_sayi<3){
                matris[i][j] = 219;
            }
            else{
                matris[i][j] = ' ';
            }
        }
    }
    for(int i=0;i<a;i++){
        matris[i][0] = 219;
    }
    for(int i=0;i<a;i++){
        matris[i][1] = 219;
    }
    for(int i=0;i<a;i++){
        matris[i][b-1] = 219;
    }
    for(int i=0;i<a;i++){
        matris[i][b-2] = 219;
    }
    for(int j=0;j<b;j++){
        matris[0][j] = 219;
    }
    for(int j=0;j<b;j++){
        matris[a-1][j] = 219;
    }

    matris[oyuncubirpositionx][oyuncubirpositiony] = 'X';
    matris[oyuncubirpositionx+1][oyuncubirpositiony+1] = ' ';
    matris[oyuncubirpositionx+1][oyuncubirpositiony+2] = ' ';
    matris[oyuncuikipositionx][oyuncuikipositiony] = 'Y';
    matris[a/2][b-1] = 'Q';
    matris[a/2][b-2] = ' ';

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%c",matris[i][j]);
        }
        printf("\n");
    }

    while(1){

        printf("\nBirinci oyuncunun sirasi :");
        scanf(" %c",&oyuncubirsecim);
        if(oyuncubirsecim == 'w'){
            if(matris[oyuncubirpositionx-1][oyuncubirpositiony] == (char)219 ){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz\n");
            }
            else if(matris[oyuncubirpositionx-1][oyuncubirpositiony] == 'Y'){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz\n");
            }
            else{
                matris[oyuncubirpositionx][oyuncubirpositiony] = ' ';
                oyuncubirpositionx -= 1;
                matris[oyuncubirpositionx][oyuncubirpositiony] = 'X';

                system("cls");
                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                    printf("%c",matris[i][j]);
                    }
                printf("\n");
                }
            }
        }
        else if(oyuncubirsecim == 's' ){
            if(matris[oyuncubirpositionx+1][oyuncubirpositiony] == (char)219){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else if(matris[oyuncubirpositionx+1][oyuncubirpositiony] == 'Y'){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz\n");
            }
            else{
                matris[oyuncubirpositionx][oyuncubirpositiony] = ' ';
                oyuncubirpositionx += 1;
                matris[oyuncubirpositionx][oyuncubirpositiony] = 'X';

                system("cls");
                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                    printf("%c",matris[i][j]);
                    }
                printf("\n");
                }
            }
        }
        else if(oyuncubirsecim == 'a' ){
            if(matris[oyuncubirpositionx][oyuncubirpositiony-1] == (char)219){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else if(matris[oyuncubirpositionx][oyuncubirpositiony-1] == 'Y'){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz\n");
            }
            else{
                matris[oyuncubirpositionx][oyuncubirpositiony] = ' ';
                oyuncubirpositiony -= 1;
                matris[oyuncubirpositionx][oyuncubirpositiony] = 'X';

                system("cls");
                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                    printf("%c",matris[i][j]);
                    }
                printf("\n");
                }
            }
        }
        else if(oyuncubirsecim == 'd' ){
            if(matris[oyuncubirpositionx][oyuncubirpositiony+1] == (char)219){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else if(matris[oyuncubirpositionx][oyuncubirpositiony+1] == 'Y'){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz\n");
            }
            else if(matris[oyuncubirpositionx][oyuncubirpositiony+1] == 'Q'){
                system("cls");
                matris[oyuncubirpositionx][oyuncubirpositiony] = ' ';
                oyuncubirpositiony += 1;
                matris[oyuncubirpositionx][oyuncubirpositiony] = 'X';

                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                        printf("%c",matris[i][j]);
                    }
                printf("\n");
                }
                printf("\n\nBirinci oyuncu kazandi\n\n");
                break;
            }
            else{
                matris[oyuncubirpositionx][oyuncubirpositiony] = ' ';
                oyuncubirpositiony += 1;
                matris[oyuncubirpositionx][oyuncubirpositiony] = 'X';

                system("cls");
                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                    printf("%c",matris[i][j]);
                    }
                printf("\n");
                }
            }
        }
        else if(oyuncubirsecim == 'q'){
            break;
        }
        else{
            printf("Gecersiz islem girdiniz");
        }

        printf("\nIkinci oyuncunun sirasi :");
        scanf(" %c",&oyuncuikisecim);
        if(oyuncuikisecim == 'w'){
            if(matris[oyuncuikipositionx-1][oyuncuikipositiony] == (char)219 ){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else if(matris[oyuncuikipositionx-1][oyuncuikipositiony] == 'X'){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else{
                matris[oyuncuikipositionx][oyuncuikipositiony] = ' ';
                oyuncuikipositionx -= 1;
                matris[oyuncuikipositionx][oyuncuikipositiony] = 'Y';

                system("cls");
                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                    printf("%c",matris[i][j]);
                    }
                printf("\n");
                }
            }
        }
        else if(oyuncuikisecim == 's'){
            if(matris[oyuncuikipositionx+1][oyuncuikipositiony] == (char)219){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else if(matris[oyuncuikipositionx+1][oyuncuikipositiony] == 'X'){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else{
                matris[oyuncuikipositionx][oyuncuikipositiony] = ' ';
                oyuncuikipositionx += 1;
                matris[oyuncuikipositionx][oyuncuikipositiony] = 'Y';

                system("cls");
                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                        printf("%c",matris[i][j]);
                    }
                printf("\n");
                }
            }
        }
        else if(oyuncuikisecim == 'a'){
            if(matris[oyuncuikipositionx][oyuncuikipositiony-1] == (char)219){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else if(matris[oyuncuikipositionx][oyuncuikipositiony-1] == 'X'){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else{
                matris[oyuncuikipositionx][oyuncuikipositiony] = ' ';
                oyuncuikipositiony -= 1;
                matris[oyuncuikipositionx][oyuncuikipositiony] = 'Y';

                system("cls");
                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                        printf("%c",matris[i][j]);
                    }
                printf("\n");
                }
            }
        }
        else if(oyuncuikisecim == 'd'){
            if(matris[oyuncuikipositionx][oyuncuikipositiony+1] == (char)219 ){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else if(matris[oyuncuikipositionx][oyuncuikipositiony+1] == 'X'){
                printf("Oraya gidemezsiniz.\nHakkinizi kaybettiniz");
            }
            else if(matris[oyuncuikipositionx][oyuncuikipositiony+1] == 'Q'){
                system("cls");
                matris[oyuncuikipositionx][oyuncuikipositiony] = ' ';
                oyuncuikipositiony += 1;
                matris[oyuncuikipositionx][oyuncuikipositiony] = 'Y';

                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                        printf("%c",matris[i][j]);
                    }
                printf("\n");
                }

                printf("\n\nIkinci oyuncu kazandi\n\n");

                break;
            }
            else{
                matris[oyuncuikipositionx][oyuncuikipositiony] = ' ';
                oyuncuikipositiony += 1;
                matris[oyuncuikipositionx][oyuncuikipositiony] = 'Y';

                system("cls");
                for(int i=0;i<a;i++){
                    for(int j=0;j<b;j++){
                        printf("%c",matris[i][j]);
                    }
                    printf("\n");
                }
            }
        }
        else{
            printf("Geçersiz islem girdiniz");
        }

    }
    return 0;
}
