/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

main(){
    int sorteio, tentativas=0, num;
    char c;
    setlocale(LC_ALL, "Portuguese");
    srand (time(NULL));
    sorteio = rand () % 100;
    do{
        tentativas++;
    printf("NÚMERO DE TENTATIVAS %d\n");
    printf("DIGITE UM NÚMERO\n");
    scanf("%d",&num);
    
    if (num==sorteio){
        printf("PARABÉNS VOCE ACERTOU!!!\n");
    }break;
    if (num>sorteio){
        printf("TEM QUE SER UM NÚMERO MENOR\n");
    }else {
        printf("TEM QUE SER UM NÚMERO MAIOR\n");
    }printf("DESEJA CONTINUAR? (S/N)\n");
    fflush(stdin);
    scanf("%c",&c);
    
    
    }while (c == 's' || c == 'S');
    
    
    
}


