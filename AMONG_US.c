/*
Boreeeeeeeeeeeeed
*/
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

void ENG(){ // English text
    system("START https://soundcloud.com/leo-echard/i-found-amongus-tiktok-music?utm_source=clipboard");
    sleep(3,98);
    printf("Tu tu tu");
    sleep(5,8);
    printf("\nTu tu tU\tFINALLY I FOUND AMONG US");
    sleep(5,8);
    printf("\nAMONG US");
    sleep(0,8);
    printf("\nTu tu tU\tFINALLY I FOUND AMONG US");
    sleep(3);
    printf("\nTu tu tu");
    sleep(2,5);
    printf("\nAMONG US");
    sleep(0,8);
    printf("\nTu tu tU");
    sleep(3,4);
    printf("\ntu tu tu");
    sleep(1,5);
    printf("\nI FOUND AMONG US");
    sleep(0,8);
    printf("\nI FOUND THEM");
    sleep(1);
    printf("\nFINALLY I FOUND AMONG US");
    sleep(1);
    printf("\nFINALLY I FOUND AMONG US");
    sleep(1);
    printf("\nI FOUND AMONG US");
    sleep(1);
    printf("\nI FOUND");
    sleep(1);
    printf("\nI FOUND AMONG");
    sleep(1);
    printf("\nI FOUND THEM");
    sleep(1);
    printf("\nFINALLY I FOUND AMONG US");
    sleep(1);
    printf("\nFINALLY I FOUND AMONG US");
    sleep(1);
    printf("\nI FOUND AMONG US");
    sleep(1);
    printf("\nI FOUND");
    sleep(1);
    printf("\nI FOUND AMONG");
    sleep(1);
    printf("\nI FOUND THEM\n\n\nAnd that's all, I apologize if it's not perfectly synced with the song since it's hard to do with my shitty internet and everyones internet speed is different XD");
}

void CZ(){ // Czech text
    system("START https://soundcloud.com/leo-echard/i-found-amongus-tiktok-music?utm_source=clipboard");
    sleep(3,98);
    printf("Tu tu tu");
    sleep(5,8);
    printf("\nTu tu tU\tKONECNE JSEM JE NASEL MEZI NAMI");
    sleep(5,8);
    printf("\nMEZI NAMI");
    sleep(0,8);
    printf("\nTu tu tU\tKONECNE JSEM JE NASEL MEZI NAMI");
    sleep(3);
    printf("\nTu tu tu");
    sleep(2,5);
    printf("\nMEZI NAMI");
    sleep(0,8);
    printf("\nTu tu tU");
    sleep(3,4);
    printf("\ntu tu tu");
    sleep(1,5);
    printf("\nNASEL JSEM JE MEZI NAMI");
    sleep(0,8);
    printf("\nNASEL JSEM JE");
    sleep(1);
    printf("\nKONECNE JSEM JE NASEL MEZI NAMI");
    sleep(1);
    printf("\nKONECNE JSEM JE NASEL MEZI NAMI");
    sleep(1);
    printf("\nNASEL JSEM JE MEZI NAMI");
    sleep(1);
    printf("\nNASEL JSEM");
    sleep(1);
    printf("\nNASEL JSEM JE MEZI");
    sleep(1);
    printf("\nNASEL JSEM JE");
    sleep(1);
    printf("\nKONECNE JSEM JE NASEL MEZI NAMI");
    sleep(1);
    printf("\nKONECNE JSEM JE NASEL MEZI NAMI");
    sleep(1);
    printf("\nNASEL JSEM JE MEZI NAMI");
    sleep(1);
    printf("\nNASEL JSEM");
    sleep(1);
    printf("\nNASEL JSEM JE MEZI");
    sleep(1);
    printf("\nNASEL JSEM JE\n\n\nA to je vse, omlouvam se ze to mozna neni synchronizovane se songem ale je to tezky udelat s mim shit internetem, kazdy to ma jinak :D jinak ten preklad je hruza XD");
}

int main(){
    int choice;

    printf("Welcome to my fun project that I created from pure boredom\nYou can set language by entering\n1 - English\t2 - Czech\n>>>");
    scanf("%d", &choice);
    if(choice == 1){
        ENG();
    }
    else if(choice == 2){
        CZ();
    }
    else{
        printf("\nSeems like you didn't select any\nYou selected %d, proceeding to use English", choice);
        ENG();
    }
}
