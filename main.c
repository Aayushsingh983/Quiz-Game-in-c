//first project - second semester 
//Quiz Game in c programming language
source code:-
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int score = 0;
    int choice;

    // Get player name
    printf("_______________*WELCOME*_______________\n");
    printf("_________________*TO*__________________\n");
    printf("________________*QUIZ*_________________\n");
    printf("_______________*GAME*_________________\n");

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("\nWelcome, %s!\n", name);

    // Ask questions
    printf("\n%s, are you ready to start the quiz? Enter 1 for Yes or 0 for No: ", name);
    scanf("%d", &choice);
    if (choice == 1) {
        // ... (existing question and answer code)

        printf("\nQuestion 1:  When is earthquake day celebrated in Nepal?\n");
        printf("1. Magh1\n2.Boishakh12\n3. Magh2\n4. Ashoj1\n");
        scanf("%d", &choice);
        if (choice == 3) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 2: Which two countries were involved in a Hundred Years War?\n");
        printf("1. Turkey and Austria\n2.  England and France\n3. Palestine and Israel\n4. Germany and Russia\n");
        scanf("%d", &choice);
        if (choice == 2) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 3: What is the largest animal in the world?\n");
        printf("1. Elephant\n2. Blue Whale\n3. Giraffe\n4. Gorilla\n");
        scanf("%d", &choice);
        if (choice == 2) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

          printf("\nQuestion 4: If an amount of Rs 15,487 is divided equally among 76 students, approximately how much amount will each student get?\n");
        printf("1. 210\n2. 206\n3. 203\n4. 204\n");
        scanf("%d", &choice);
        if (choice == 4) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 5: There are 12 dozen mangoes in a box. If there are 43 such boxes, how many mangoes are there in all the boxes together?\n");
        printf("1. 516\n2. 628\n3. 3096\n4. 6192\n");
        scanf("%d", &choice);
        if (choice == 4) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 6: When were the first recorded Olympics held?\n");
        printf("1. 825 BC\n2. 776 BC\n3. 876 BC\n4. 766 BC\n");
        scanf("%d", &choice);
        if (choice == 2) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 7: Which of the following term is not associated with Football??\n");
        printf("1. Penalty Kick\n2.  Free Kick\n3. Penalty Stroke\n4. Off Side\n");
        scanf("%d", &choice);
        if (choice == 3) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 8: 2026 FIFA World Cup would be held in:\n");
        printf("1. United States\n2. Canada\n3. Mexico\n4. Jointly in the US, Canada and Mexico\n");
        scanf("%d", &choice);
        if (choice == 4) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 9: Who is the father of cellular phone?\n");
        printf("1. Linus Torvalds\n2. Percy Lebaron Spencer\n3. Fred Morrison \n4. Martin Cooper\n");
        scanf("%d", &choice);
        if (choice == 4) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 10: The number system Zero was invented by:\n");
        printf("1.  Ramanujam\n2.  Aryabhatta\n3.  Brahmagupta\n4. An unknown Indian\n");
        scanf("%d", &choice);
        if (choice == 4) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }

        printf("\nQuestion 11: The Headquarters of the World Health Organisation (WHO) is at:\n");
        printf("1. London\n2. Geneva\n3. Paris\n4. Washington\n");
        scanf("%d", &choice);
        if (choice == 2) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong answer.\n");
        }
       // Display final score
        printf("\n%s, your final score is %d.\n", name, score);
        printf("Thank you for your participation!");

        // Storing the score in a file
        FILE *scoreFile = fopen("scores.txt", "a"); // Open the file for appending
        if (scoreFile != NULL) {
            fprintf(scoreFile, "Name:%s,Score:%d\n", name, score); // Write the name and score to the file
            fclose(scoreFile); // Close the file
            printf("Score saved to the file.\n");
        } else {
            printf("Error opening scores file for writing.\n");
        }
    } else {
        printf("\nSee you next time, %s!\n", name);
    }

    // Retrieving and displaying scores from the file
    FILE *scoreFile = fopen("scores.txt", "r"); // Open the file for reading
    if (scoreFile != NULL)
     {
        printf("\nPrevious scores:\n");
        char playerName[50];
        int playerScore;
        while (fscanf(scoreFile, "%c,%d\n", playerName, &playerScore) == 2) {
            printf("%s: %d\n", playerName, playerScore); // Print player name and score
        }
        fclose(scoreFile); // Close the file
    } else {
        printf("Error opening scores file for reading.\n");
    }

    return 0;
}

