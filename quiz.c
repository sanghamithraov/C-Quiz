#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("Welcome to the Quiz!\n");
    printf("You will be asked 5 questions. Good luck!\n\n");

    // Question 1
    printf("1. What is the capital of France?\n");
    printf("A. Berlin\nB. Paris\nC. Madrid\nD. Rome\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if(answer == 'B' || answer == 'b') score++;

    // Question 2
    printf("\n2. Who is known as the father of C language?\n");
    printf("A. Dennis Ritchie\nB. James Gosling\nC. Bjarne Stroustrup\nD. Guido van Rossum\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if(answer == 'A' || answer == 'a') score++;

    // Question 3
    printf("\n3. What is the output of 5 + 3 * 2?\n");
    printf("A. 11\nB. 13\nC. 16\nD. 10\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if(answer == 'A' || answer == 'a') score++;

    // Question 4
    printf("\n4. Which keyword is used to return a value from a function?\n");
    printf("A. return\nB. exit\nC. break\nD. continue\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if(answer == 'A' || answer == 'a') score++;

    // Question 5
    printf("\n5. Which one is a logical operator in C?\n");
    printf("A. &\nB. &&\nC. |\nD. !\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if(answer == 'B' || answer == 'b') score++;

    // Final Score
    printf("\nQuiz Completed!\n");
    printf("Your score: %d/5\n", score);

    if(score == 5) printf("Excellent!\n");
    else if(score >= 3) printf("Good Job!\n");
    else printf("Keep Practicing!\n");

    return 0;
}
