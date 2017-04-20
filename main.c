// File Quiz1.c
// THis program is a fun little quiz for a practice project for my IDC project three
// It is a Disney quiz

#include <stdio.h>
#include <string.h>

char ansOne[16];
char ansTwo[16];
char ansThre[16];
char ansFour[16];
char ansFiv[16];
char ansSix[16];
char ansSev[16];
char ansEig[16];
char ansNine[16];
char ansTen[16];
char agree;
int  corr = '10';

main()
{
    printf("This quiz will test your Disney knowledge!\n");
    printf("There is going to be some tough ones!\n");
    printf("Use one word answers.\n");
    do{
    printf("Question#1: In Peter Pan, Captain Hook had a hook on which hand?\n");
    scanf(" %s", ansOne);

        if (toupper (ansOne) == 'LEFT')
    {
        printf("\nCorrect!\n");
    }

    else
    {
        printf("\nIncorrect\n");
        --corr;
    }



    printf("Question#2: How many dozen eggs does Gaston eat for breakfast?\n");
    scanf(" %s", ansTwo);
    if (toupper (ansTwo) == 'FIVE')
        {

        printf("\nCorrect!\n");
        }

    else
    {
      printf("\nIncorrect.\n");
      --corr;
    }



    printf("Question#3:In Alice in Wonderland, what is the name of Alice's cat?\n");
    scanf(" %s", ansThre);
    if (toupper (ansThre) == 'DINAH')
        {
        printf("\nCorrect!\n");
        }
    else
    {
        printf("\nIncorrect.\n");
        --corr;
    }


    printf("Question#4: What is the only Disney animated film where the main character dosen't speak?\n");
    scanf(" %s", ansFour);
    if (toupper (ansFour) == 'DUMBO')
        {
        printf("\nCorrect!\n");
        }
    else
    {
        printf("\nIncorrect.\n");
        --corr;
    }



    printf("Question#5: What did Jasmine steal from the market?\n");
    scanf(" %s", ansFiv);
    if (toupper (ansFiv) == 'APPLE')
        {
        printf("\nCorrect!\n");
        }
    else
    {
        printf("\nIncorrect.\n");
        --corr;
    }



    printf("Question#6: What is the original name of Pete's mother figure in Pete's Dragon?\n");
    scanf(" %s", ansSix);
    if (toupper (ansSix) == 'NORA')
        {
        printf("\nCorrect!\n");
        }
    else
    {
        printf("\nIncorrect.\n");
        --corr;
    }



    printf("Question#7: What is the name of the family who owns Lady in Lady and the Tramp?\n");
    scanf(" %s", ansSev);
    if (toupper (ansSev) == 'DARLINGS' || (ansSev) == 'DARLING')
        {
        printf("\nCorrect!\n");
        }
    else
    {
        printf("\nIncorrect.\n");
        --corr;
    }



    printf("Question#8:What is the name of Maleficent's raven?\n");
    scanf(" %s", ansEig);
    if (toupper (ansEig) == 'DIABLO')
    {
        printf("\nCorrect!\n");
    }
    else
    {
        printf("\nIncorrect.\n");
        --corr;
    }



    printf("Question#9: In the Hunchback of Notre-dame, Who are Quasimodos only friends before Esmeralda?\n");
    scanf(" %s", ansNine);
    if (toupper (ansNine) == 'GARGOYLES')
        {
        printf("\nCorrect!\n");
        }
    else
    {
        printf("\nIncorrect.\n");
        --corr;
    }



    printf("Question#10:Final Question: What is the name of Bambi's Rabbit Friend?\n");
    scanf(" %s", ansNine);
    if (toupper (ansNine) == 'THUMPER')
        {
            printf("\nCorrect!\n");
        }
    else
    {
        printf("\nIncorrect!\n");
        --corr;
    }



    if (corr == 10)
    {
    printf("You have finished the quiz!");
    printf("You scored %d of 10!", corr);
    }
    else
    {
    printf("You have finished the quiz!");
    printf("You scored %d of 10!", corr);
    }

    printf("Would you like to try again (Y/N)?\n");
    scanf(" %c", &agree);

    }while (toupper (agree) == 'Y');


        return 0;

}
