#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void help();
int main()
     {
     int countr=1,r,r1,count,i,n,score=0;
     char choice;
     char playername[99];
     mainhome:
     system("cls");
     printf("\t\t\t      EZ QUIZ GAME\n");
     printf("\t\t========================================");
	 printf("\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
     printf("\n\t\t@=>\t         WELCOME \t     <=@");
     printf("\n\t\t@=>=>\t           TO  \t\t   <=<=@");
     printf("\n\t\t@=>\t        THE GAME \t     <=@");
     printf("\n\t\t@______________________________________@");
	 printf("\n\t\tOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
     printf("\n\t\t ______________________________________");
	 printf("\n\t\t|                                      |");
     printf("\n\t\t|   DO U WANT TO BECOME A NOOBMASTER   |");
	 printf("\n\t\t|  IF U WANT, U CAN ASK THIS OUR QUIZ! |");
     printf("\n\t\t|______________________________________|");
     printf("\n\t\t\n\t\tOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
     printf("\n\t\t >> Press S to start the game <<");
     printf("\n\t\t >> Press H for help          <<  ");
     printf("\n\t\t >> Press Q to quit           <<  ");
     printf("\n\t\t========================================\n\n");
     choice=toupper(getch());
    if (choice=='H')
	{
	help();
	getch();
	goto mainhome;
	}
	else if (choice=='Q')
	{
	exit(1);
	}
    else if(choice=='S')
    {
    system("cls");
	printf("\n\t\t\t  *****  *      *****    *****  *   *  *****  *****  ****     *   *  *****  *   *  ****     *   *    *    *   *  *****      *  *  *  *");
	printf("\n\t\t\t  *   *  *      *        *      **  *    *    *      *   *     * *   *   *  *   *  *   *    **  *   * *   ** **  *         *  *  *  * ");
	printf("\n\t\t\t  *****  *      *****    *****  * * *    *    *****  ****       *    *   *  *   *  ****     * * *  *****  * * *  *****    *  *  *  *  ");
	printf("\n\t\t\t  *      *          *    *      *  **    *    *      * *        *    *   *  *   *  * *      *  **  *   *  *   *  *         *  *  *  * ");
	printf("\n\t\t\t  *      *****  *****    *****  *   *    *    *****  *  *       *    *****  *****  *  *     *   *  *   *  *   *  *****      *  *  *  *");
	printf("\n\t\t\t                                                                                                              PLS ENTER YOUR NAME <<<<");
	printf("\n\t\t\t                                                                                                              ^^^^^^^^^^^^^^^^^^^^^^^^");
    printf("\n\t\t\t                                                                                                              >>>>>>>>Enter your name:");
    gets(playername);
	
    system("cls");
    printf("\n ------------------ Welcome %s to EZ QUIZ GAME ----------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n --------------------------------------------------------------------------");
	printf("\n **************************************************************************\n");
    printf("\n >> This game has 1 mode, It is a noob mode yes u didn't wrong read this mode\n");
    printf("\n >> Your game starts with NOOB ROUND. In this round you will be asked a");
    printf("\n    total of 15 questions. Each right answer will be awarded ten times 10x!");
    printf("\n    By this way you can win upto $10,000,000,000,000,000 prize!!!!!..........\n");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.\n");
    printf("\n >> You will be asked questions continuously, till right answers are given\n");
    printf("\n >> No negative marking for wrong answers!\n");
	printf("\n **************************************************************************");
    printf("\n --------------------------------------------------------------------------");
    printf("\n\n\n>> Press Y to start the game!\n");
    printf("\n>> Press any other key to return to the main menu!");

    if (toupper(getch())=='Y')
		{
		goto home;
        }
	else
		{
        goto mainhome;
        system("cls");
        }
home:
    test:
    system("cls");
	 
     printf("\n\n\n\n\tPress any key to Start the Game!\n");   
	 printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");   
	 printf("\n\t*      *****  *****  9 *****    *****  *****    *****  *   *  *   *  *****    *****  *****  ***** ");
	 printf("\n\t*      *        *      *        *      *   *    *      *   *   * *   *         ***    ***    ***  ");
	 printf("\n\t*      *****    *      *****    * ***  *   *    * ***  *   *    *    *****      *      *      *   ");
	 printf("\n\t*      *        *          *    *   *  *   *    *   *  *   *    *        *                        ");
	 printf("\n\t*****  *****    *      *****    *****  *****    *****  *****    *    *****      *      *      *   ");
	 printf("\n\t                                                                                 LET'S GO GUYS !!!");
	 printf("\n\t                                                                                 ^^^^^^^^^^^^^^^^^");
	 
    if(toupper(getch())=='p')
		{goto game;}
game:
    for(i=1;i<=17;i++)
    {system("cls");
    r=i;

     switch(r)
		{
		case 1:
		printf("-------------------1-----------------------------");
		printf("\n\nAnd Ann Antttttt,how many ants are there?");
		printf("\n\nA.1\t\tB.2\n\nC.3 \t\tD.irrelevant");
		printf("\n------------------------------------------------");

		if (toupper(getch())=='D')
			{
			printf("\nYou did that very well.\n");
			printf("____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *      *     * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *          *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *****      *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^2 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nIt's okay to lose, it's just a game.\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
			getch();
		    goto score;
		    break;
			}

		case 2:
		printf("\n\n-------------------2-----------------------------");
		printf("\n\nWhat is the biggest animal?");
		printf("\n\nA.Whale shark\t\tB.Blue whale\n\nC.Killer whale\t\tD.Stranded whale");
		printf("\n------------------------------------------------");
		if (toupper(getch())=='B')
			{
			printf("\n\nWow!! this is superb!!!\n");
			printf("____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *      *     * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *           *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *****      *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^3 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nIt's okay to lose, it's just a game.\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
			getch();
		    goto score;
		    break;
		    }

        case 3:
        printf("\n\n--------------------3----------------------------");
		printf("\n\nWhat is the national sport of Thailand? ");
		printf("\n\nA.Muzzle\t\tB.Volleyball\n\nC.Thai boxing\t\tD.Futsal");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='C')
			{
			printf("\n\nU must have been practicing\n");
			printf("____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *     **       *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *   * *      * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *          *       *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****          *       *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^4 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nIt's okay to lose, it's just a game.\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
			getch();
		    goto score;
		    break;
			}

        case 4:
        printf("\n\n-------------------4-----------------------------");
		printf("\n\nApproximately how many weight does a blue whale weigh as an elephant??");
		printf("\n\nA.33\t\tB.43\n\nC.53\t\tD.63 ");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='A')
			{
			printf("\n\nThat's right!!!\n");
			printf("____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *         * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *           *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *****      *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^5 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
            printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
			getch();
		    goto score;
		    break;
		    }

        case 5:
        printf("\n\n-------------------5-----------------------------");
		printf("\n\nHow many legs does a squid have?");
		printf("\n\nA.8\t\tB.6\n\nC.4\t\tD.2");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='D')
			{
			printf("\n\nThat's great!!!\n");
			printf("____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *         * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *   *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *****      *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^6 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
		    printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
		    }

		case 6:
        printf("\n\n--------------------6----------------------------");
		printf("\n\nIdentify which is a color matching system?");
		printf("\n\nA.Additive\t\tB.Subtractive\n\nC.Pantone\t\tD.Hex codes");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='C' )
			{
			printf("\n\nWay to go.\n");
			printf("____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *   *     * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *           *    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *           *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****           *      *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^7 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
		    countr = 0;
		    getch();
		    goto score;
		    break;
			}

        case 7:
        printf("\n\n---------------------7---------------------------");
		printf("\n\nWhat is your official position Jean\nfrom Genshin Impact in the Favonius Knights?");
		printf("\n\nA.deputy chief\t\tB.act for commander\n\nC.cavalry captain\t\tD.head of investigation");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='B')
			{
			printf("\n\nRight on!\n");
			printf("____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *   *     * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *   *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *****      *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^8 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}

        case 8:
        printf("\n\n--------------------8----------------------------");
		printf("\n\nWhich of the following is not the 7 wonders\nof the ancient world?");
		printf("\n\nA.Great Pyramid of Giza\t\tB.Hanging Gardens of Babylon\n\nC.Colosseum\t\tD.Temple of Artemis");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='C')
			{
			printf("\n\nNice going!\n");
			printf("____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *   *     * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *           *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *****      *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^9 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}

        case 9:
        printf("\n\n---------------------9---------------------------");
		printf("\n\nwhat type of bacterial infection's IPD?");
		printf("\n\nA.Streptococcus pneumoniae\t\tB.Bacillus cereus\n\nC.Escherichia coli\t\tD.Lactobacillus bulgaricus");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='A')
			{
			printf("\n\nGood job!\n");
			printf("_____________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *  *****    *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *  *   *   * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *  *   *  *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *  *   *    *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *  *****    *      *      *      *      *   \n");
			printf("                                                                                             MONEY + 1 x 10^10 DOLLAR\n");
	 		printf("                                                                                             ^^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nIt's okay to lose, it's just a game");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}

        case 10:
        printf("\n\n---------------------10---------------------------");
		printf("\n\nWho is the author of the Chinese version of Three Kingdoms?");
		printf("\n\nA.Luo Guan Dong\t\tB.Kim Sia Tang\n\nC.Majong Gang\t\tD.Zhang Sun Kuang");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='A')
			{
			printf("\n\nNothing can't stop u know.\n");
			printf("___________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *  *      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *  *     * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *  *    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *  *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *  *      *      *      *      *      *   \n");
			printf("                                                                                           MONEY + 1 x 10^11 DOLLAR\n");
	 		printf("                                                                                           ^^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}

        case 11:
        printf("\n\n--------------------11----------------------------");
		printf("\n\nWhat is the most subscribed YouTube channel in Thailand?");
		printf("\n\nA.Bie The Ska\t\tB.Kaykai Salaider\n\nC.My Mate Nate\t\tD.zbing z.");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='D')
			{
			printf("\n\nWow!! u are the best memory.\n");
			printf("_______________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *  *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *      *     * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *  *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *  *          *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *  *****      *      *      *      *      *   \n");
			printf("                                                                                               MONEY + 1 x 10^12 DOLLAR\n");
	 		printf("                                                                                               ^^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
            {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}

        case 12:
        printf("\n\n---------------------12---------------------------");
		printf("\n\nWho is not a GitHub developer?");
		printf("\n\n\nA.Chris Wanstrath\t\tB.Jack Dorsey\n\nC.P.J.Hyett\t\tD.Tom Preston-Werner");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='B')
			{
			printf("\n\nGood!! I've never seen anyone do it better.\n");
			printf("_______________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *  *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *      *     * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *  *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *      *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *  *****      *      *      *      *      *   \n");
			printf("                                                                                               MONEY + 1 x 10^13 DOLLAR\n");
	 		printf("                                                                                               ^^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
            {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}

		case 13:
        printf("\n\n---------------------13---------------------------");
		printf("\n\nhow many cm tall is the tallest man in the world?");
		printf("\n\nA.252 cm \t\tB.262 cm\n\nC.272 cm\t\tD.282 cm");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='C')
			{
			printf("\n\nU figured that out fast!!!\n");
			printf("_______________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *    **       *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *   * *      * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *  *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *     *       *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *     *       *      *      *      *      *   \n");
			printf("                                                                                               MONEY + 1 x 10^14 DOLLAR\n");
	 		printf("                                                                                               ^^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
            {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}

        case 14:
        printf("\n\n----------------------14--------------------------");
		printf("\n\nWho is the best talent in this world?");
		printf("\n\nA.You \t\tB.Marilyn vos Savant\n\nC.Christopher Hirata\t\tD.Kim Ung-Yong");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='A')
			{
			printf("\n\nThat surpise me, u are a nacissistic.\n");
			printf("_______________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *  *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *  *         * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *  *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *      *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *  *****      *      *      *      *      *   \n");
			printf("                                                                                               MONEY + 1 x 10^15 DOLLAR\n");
	 		printf("                                                                                               ^^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
            {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}

		case 15:
        printf("\n\n--------------------15----------------------------");
		printf("\n\nFrom the last Rov Pro League 2022 Summer game,\nwhich team is the champion in this tournament?");
		printf("\n\nA.KFC x Talon\t\tB.Buriram United Esport \n\nC.PSG Esport\t\tD.Bacon Time");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='D')
			{
			printf("\n\nThat's right, Do u want play rov game 1 round?\n");
			printf("_______________________________________________________________________________________________________________________\n\n");
			printf("*   *  *****  *   *  *****  *   *             *           *  *****   *   *  *****      *      *      *      *      *   \n");
			printf("** **  *   *  **  *  *       * *       +      *    * *    *  *   *  * *  *  *         * *    * *    * *    * *    * *  \n");
			printf("* * *  *   *  * * *  *****    *      +++++    *     *     *  *   *       *  *****    *   *  *   *  *   *  *   *  *   * \n");
			printf("*   *  *   *  *  **  *        *        +      *    * *    *  *   *       *  *   *      *      *      *      *      *   \n");
			printf("*   *  *****  *   *  *****    *               *           *  *****       *  *****      *      *      *      *      *   \n");
			printf("                                                                                               MONEY + 1 x 10^16 DOLLAR\n");
	 		printf("                                                                                               ^^^^^^^^^^^^^^^^^^^^^^^^\n");
			countr++;
			getch();
			break;
			}
		else
            {
			printf("\n\nIt's okay to lose, it's just a game\n");
			printf("\n*   *  *****  *   *    *      *****  *****  *****\n");
			printf(" * *   *   *  *   *    *      *   *  *      *    \n");
			printf("  *    *   *  *   *    *      *   *  *****  *****\n");
			printf("  *    *   *  *   *    *      *   *      *  *    \n");
			printf("  *    *****  *****    *****  *****  *****  *****\n");
			printf("                                         VERY SAD");
			countr = 0;
		    getch();
		    goto score;
		    break;
			}
		
		case 16:
        printf("\n\n------------------------------------------------");
		printf("\n\nDO YOU WANT TO CONTINUE?");
		printf("\n\nY.YES\t\tN.NO");
		printf("\n\nPRESS ANY KEY 3 TIME TO GO HOME EXCEPT Y AND N");
        printf("\n------------------------------------------------");
		if (toupper(getch())=='Y')
			{
			printf("\n\nYOU WON'T WIN THIS GAME IF YOU CHOOSE THIS ONE");
			printf("\n\nPRESS ANY KEY TO CONTINUE");
			getch();
			break;
			}
		else if (toupper(getch())=='N')
            {
			printf("\n\nTHANK YOU FOR PLAYING THIS GAME!!");
			printf("\n\nPRESS ANY KEY TO CONTINUE");
		    getch();
		    goto score;
		    break;
			}
		else{
		    getch();
		    goto mainhome;
		    break;
		}

		case 17:
        printf("\n\n---------------------16---------------------------");
		printf("\n\n1+1?");
		printf("\n\nA.2\t\tB.11\n\nC.3\t\tD.1");
        printf("\n------------------------------------------------");
		if (getch() == '9')
			{
			printf("\n\n\n \t\t**************  CONGRATULATION  **************");
	    printf("\n\t\t\tYOU ARE A LUCKY PERSON!!!!!!!!!");
	    printf("\n\t\t\tYou won money for Balance Unlimited");
	    printf("\n\t\t\tThank You for PLAYING THIS GAME");
			getch();
			exit(1);
			}
		else
            {
			printf("\n\nYOU LOSE THIS GAME BECAUSE I HACK YOUR COMPUTER ALREADY");
			printf("\n\nPLS DELETE THIS GAME BEFORE 2036 ");
			exit(1);
			}

		}}

score:
    system("cls");
	if(countr>0)
	    {
		printf("\n\n\n \t\t**************  CONGRATULATION  **************");
	    printf("\n\t\t\tYOU ARE A NOOBMASTER!!!!!!!!!");
	    printf("\n\t\t\tYou won $10,000,000,000,000,000");
	    printf("\n\t\t\tThank You for PLAYING THIS GAME");
	    }
	 else
		{
	    printf("\n\n\t\t [******* SORRY YOU GOT NOTHING *****]");
	    printf("\n\t\t [THANK YOU FOR PLAYING THIS GAME :} ]");
	    printf("\n\t\t [           TRY AGAIN               ]");goto go;
		}

go:
	puts("\n\n >> Press Y if you want to play again\n");
	puts(" >> Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		goto mainhome;
		}
		}}
	
void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .........................EZ QUIZ GAME...........");
    printf("\n >> This game has 1 mode, It is a noob mode yes u didn't wrong read this mode\n");
    printf("\n >> Your game starts with NOOB ROUND. In this round you will be asked a");
    printf("\n    total of 15 questions. Each right answer will be awarded ten times 10x!");
    printf("\n    By this way you can win upto $10,000,000,000,000,000 prize!!!!!..........\n");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.\n");
    printf("\n >> You will be asked questions continuously, till right answers are given\n");
    printf("\n >> No negative marking for wrong answers!\n");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****EZ QUIZ GAME is developed by DKT TEAM********");}