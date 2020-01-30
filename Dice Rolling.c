#include <stdio.h> //allows functions such as printf and scanf to be used
#include <unistd.h> /*allows the use of usleep which applies a time delay
                      between processing of lines*/
#include <stdlib.h> //contains a function to generate random numbers
#include <time.h> /*allows change of time delays
                    to get different random numbers
                    each time the function is run*/

int main() { //opening of the main function

    printf("DICE ROLLING by FARHAAN BEEHARRY\nDICE ROLLING par FARHAAN BEEHARRY\n\n"); //sending output to the display
    start(); //calling the "start" function

} //closing the main function

int start() { //opening the start function

    int load = 0; //declaring an integer with value 0

    printf("Loading the program / Chargement en cours... ⚀ %d %%", load, load); //sending output to the display
    printf("\r"); //replaces the previous printf by the next printf
    fflush(stdout); //makes sure that whatever is typed is written out
    usleep(1000000); //delays the next line by 100ms
    load += 20; //increase the value of load by 20

    printf("Loading the program / Chargement en cours... ⚁ %d %%", load, load); //sending output to the display
    printf("\r"); //replaces the previous printf by the next printf
    fflush(stdout); //makes sure that whatever is typed is written out
    usleep(900000); //delays the next line by 90ms
    load += 20; //increase the value of load by 20

    printf("Loading the program / Chargement en cours... ⚂ %d %%", load, load); //sending output to the display
    printf("\r"); //replaces the previous printf by the next printf
    fflush(stdout); //makes sure that whatever is typed is written out
    usleep(800000); //delays the next line by 80ms
    load += 20; //increase the value of load by 20

    printf("Loading the program / Chargement en cours... ⚃ %d %%", load, load); //sending output to the display
    printf("\r"); //replaces the previous printf by the next printf
    fflush(stdout); //makes sure that whatever is typed is written out
    usleep(700000); //delays the next line by 70ms
    load += 20; //increase the value of load by 20

    printf("Loading the program / Chargement en cours... ⚄ %d %%", load, load); //sending output to the display
    printf("\r"); //replaces the previous printf by the next printf
    fflush(stdout); //makes sure that whatever is typed is written out
    usleep(600000); //delays the next line by 60ms
    load += 20; //increase the value of load by 20

    printf("Loading the program / Chargement en cours... ⚅ %d %%", load, load); //sending output to the display
    printf("\r"); //replaces the previous printf by the next printf
    fflush(stdout); //makes sure that whatever is typed is written out
    usleep(500000); //delays the next line by 50ms
    load += 20; //increase the value of load by 20

    printf("Program Loaded Successfully !                                 "); //sending output to the display
    printf("\nProgramme chargé avec succès !                                 \n\n"); //sending output to the display

    choice(); // opening the function choice
} //closing the function start

int choice() { //opening the choice function

    int choice; //declaring an integer

    do { //opening a do-while loop
        printf("Choose a language and press ENTER !\nChoisissez une langue et appuyez sur ENTER !"); //sending output to the display
        printf("\n1 for English\n2 pour le Français"); //sending output to the display
        printf("\nChoice/Choix : "); //sending output to the display
        scanf("%d", &choice); //asking for an input to be stored in variable choice
        if (choice == 1) { //opening an if statement
            english(); //if choice is 1 then open english function
        }//closing if statement
        else if (choice == 2) { //opening else if statement
            french(); //if choice is 2 then open french function
        } //closing else if statement
        if (choice != 1 || choice != 2) { //opening if statement
            printf("\nInvalid choice !\nChoix invalide !\n"); //sending output to the display
        } //closing if statement
    } while (choice != 1 || choice != 2); //writing the while condition for the do-while loop
} //closing the choice function

int english() { //opening the function english for those who choose language english

    srand(time(NULL)); //this changes the seed and allows the generation of random numbers
    //it allows different outcomes for each run of the program

    int rollcount, rollresult, inputcount = 0, sidecount, user; //declaring integers

    do { //opening a do-while loop
        printf("\nHello and welcome to the dice rolling program!\nAfter each value you input, press ENTER to continue !\n\n"); //sending output to the display

        do { //opening a do-while loop
            printf("How many sides do you want the dice to have? (2 to 24)\n"); //sending output to the display
            printf("Number of sides : "); //sending output to the display
            scanf("%d", &sidecount); //asking for an input to be stored in variable choice
            if (sidecount < 2 || sidecount > 24) { //if statement for sidecount less than 2 and greater than 24
                printf("\nInvalid number of sides. Try again !");
            }//sending output to the display
            printf("\n");
        } while (sidecount < 2 || sidecount > 24); //sending output to the display

        do { //opening a do-while loop
            printf("How many times do you want to roll the dice? (2 to 499)\n"); //sending output to the display
            printf("Number of times : "); //sending output to the display
            scanf("%d", &inputcount); //asking for an input to be stored in variable choice
            if (inputcount < 2 || inputcount > 499) {//if statement for inputcount less than 2 and greater than 499
                printf("\nInvalid number of times. Try again !");
            } //sending output to the display
            printf("\n");
        } while (inputcount < 2 || inputcount > 499); //sending output to the display

        int store[(sidecount + 1)]; //declaring an integer array with the size of sidecount +1

        for (int a = 0; a < (sidecount + 1); a++) { //for loop for integer a where the first value is 0
            //and the loop is repeated until value reaches sidecount+1
            //the increment of a is 1
            store[a] = 0;
        } //initializing the array store for each value to be 0

        printf("Collecting dices ...\n"); //sending output to the display
        sleep(1); //delays the next line by 1 second

        printf("Throwing dices ...\n"); //sending output to the display
        sleep(1); //delays the next line by 1 second

        printf("Generating throws ... \n"); //sending output to the display
        sleep(1); //delays the next line by 1 second

        printf("Collecting results ... \n"); //sending output to the display
        sleep(1); //delays the next line by 1 second

        printf("Displaying results ... \n\n"); //sending output to the display
        sleep(1); //delays the next line by 1 second

        for (rollcount = 1; rollcount <= inputcount; rollcount++) { //for loop for integer rollcount where first value is 1
            //and the loop is repeated until value reaches inputcount
            //the increment of rollcount is 1
            rollresult = (rand() % sidecount) + 1; //a random number is generated. the value will have 0 up to sidecount-1
            //for the number to be 1 up to sidecount, 1 is added
            //the value is stored in the integer rollresult
            store[rollresult] = store[rollresult] + 1; //saving the rollresult value into the array store[]
            printf("Roll number %d gives value %d\n", rollcount, rollresult); //sending output to the display

            if (inputcount > 2 && inputcount <= 100) {
                usleep(100000);
            }//time delay of 100ms if inputcount between 2 and 100
            else if (inputcount > 100 && inputcount <= 250) {
                usleep(50000);
            }//time delay of 100ms if inputcount between 100 and 250
            else if (inputcount > 250 && inputcount <= 499) {
                usleep(25000);
            }//time delay of 100ms if inputcount between 250 and 499
        }

        sleep(1); //applying a time delay of 1 second

        printf("\nOccurrence of each number ..."); //sending output to the display

        for (int i = 1; i <= sidecount; i++) { //for loop for integer i where first value is 1
            //and the loop is repeated until value reaches sidecount
            //the increment of i is 1
            //each store[sidecount] stores the number of times it came off
            //then is used to calculate occurrence as shown below
            float occurrence = ((100 * ((float) store[i])) / ((float) inputcount)); //formula for calculating occurrence
            printf("\nNumber %d occurs %d time(s) out of %d times : %.2f %%", i, store[i], inputcount, occurrence);
            usleep(100000); //applying a time delay of 100ms
        } //sending output to the display

        sleep(1); //applying time delay of 1 second

        printf("\n\nThank you for using this program !"); //sending output to the display

        do { //opening a do-while loop
            printf("\nDo you want to run the program again?\n(0 for NO, 1 for YES and 2 to change language)"); //sending output to the display
            printf("\nYour answer : "); //sending output to the display
            scanf("%d", &user); //asking for an input to be stored in variable choice
            printf("\n"); //sending output to the display

            if (user != 1 && user != 0 && user != 2) { //if statement for variable user is not equal to 0 nor 1 nor 2
                printf("\nInvalid input ... Try again ?");
            }//sending output to the display
            else if (user == 2) { //else if statement for variable user is equal to 2
                choice();
            }//if variable user is equal to 2 then open choice function
            else if (user == 0) { //else if statement for variable user is equal to 0
                printf("\nExiting program ...\n\n"); //sending output to the display
                exit(EXIT_SUCCESS);
            }//close the program

        } while (user != 0 && user != 1); //while statement for the loop if user is not equal to 0 AND not equal to 1

    } while (user == 1); //while statement for the loop if user is equal to 1

    return 0; //closing the program with no return value

} //closing the english function

/*****************************************************************************
 * !!! SAME COMMENTS FROM FUNCTION ENGLISH IS APPLIED TO FUNCTION FRENCH !!! *
 *****************************************************************************/

int french() {

    srand(time(NULL));

    int rollcount, rollresult, inputcount = 0, sidecount, user;

    do {
        printf("\nBonjour et bienvenue dans le programme des dés!\nAprès chaque valeur entrée, appuyez sur ENTER pour continuer !\n\n");

        do {
            printf("Combien de côtés voulez-vous que les dés aient? (2 à 24)\n");
            printf("Nombre de côtés : ");
            scanf("%d", &sidecount);
            if (sidecount < 2 || sidecount > 24) {
                printf("\nNombre de côtés invalide. Réessayer !");
            }
            printf("\n");
        } while (sidecount < 2 || sidecount > 24);

        do {
            printf("Combien de fois voulez-vous lancer les dés? (2 à 499)\n");
            printf("Nombre de fois : ");
            scanf("%d", &inputcount);
            if (inputcount < 2 || inputcount > 499) {
                printf("\nNombre de fois invalide. Réessayer !");
            }
            printf("\n");
        } while (inputcount < 2 || inputcount > 499);

        int store[(sidecount + 1)];

        for (int a = 0; a < (sidecount + 1); a++) {
            store[a] = 0;
        }


        printf("Collection des dés ...\n");
        sleep(1);

        printf("Lancement des dés ...\n");
        sleep(1);

        printf("Génération de jets ... \n");
        sleep(1);

        printf("Collection des résultats ... \n");
        sleep(1);

        printf("Affichage des résultats ... \n\n");
        sleep(1);

        for (rollcount = 1; rollcount <= inputcount; rollcount++) {
            rollresult = (rand() % sidecount) + 1;
            store[rollresult] = store[rollresult] + 1;
            printf("Le numéro de rouleau %d donne la valeur %d\n", rollcount, rollresult);
            if (inputcount > 2 && inputcount <= 100) {
                usleep(100000);
            } else if (inputcount > 100 && inputcount <= 250) {
                usleep(50000);
            } else if (inputcount > 250 && inputcount <= 499) {
                usleep(25000);
            }
        }

        sleep(1);

        printf("\nOccurrence de chaque numéro ...");

        for (int i = 1; i <= sidecount; i++) {
            float occurrence = ((100 * ((float) store[i])) / ((float) inputcount));
            printf("\nLe nombre %d se produit %d fois sur %d fois : %.2f %%", i, store[i], inputcount, occurrence);
            usleep(100000);
        }

        printf("\n\nMerci d'utiliser ce programme !");

        sleep(1);

        do {
            printf("\nVoulez-vous relancer le programme? \n(0 pour NON, 1 pour OUI et 2 pour changer de langue)");
            printf("\nVotre réponse : ");
            scanf("%d", &user);
            printf("\n");

            if (user != 1 && user != 0 && user != 2) {
                printf("\nEntrée invalide ... Essayez encore?");
            } else if (user == 2) {
                choice();
            } else if (user == 0) {
                printf("\nFermeture du programme ...\n\n");
                exit(EXIT_SUCCESS);
            }

        } while (user != 0 && user != 1);

    } while (user == 1);

    return 0;
}

