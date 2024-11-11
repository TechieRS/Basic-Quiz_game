#include <stdio.h>

void askQuestions() {
    int answer;
    int score = 0;

    // Question 1
    printf("1. What is the capital of India ?\n");
    printf("1. Paris\n2.Patna\n3. New Delhi\n4. Harayana\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }

    // Question 2
    printf("2. What is 2 + 2?\n");
    printf("1. 3\n2. 4\n3. 5\n4. 6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }

    // Question 3
    printf("3. Who wrote National Anthem ?\n");
    printf("1. Rabindranath Tagore\n2.Mahatma Gandhi \n3. Bhagat Singh\n4. Rahul Gandhi\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1) {
        score++;
    }

    // Question 4
    printf("4. What is the largest planet in our solar system?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Saturn\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }

    // Question 5
    printf("5. What is the boiling point of water?\n");
    printf("1. 90°C\n2. 100°C\n3. 110°C\n4. 120°C\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }

    printf("You scored %d out of 5.\n", score);

}
void greetingMessage() {
    printf("Thank you for participating in the test. Goodbye!\n");
}

int main() {
    char choice;

    do {
        askQuestions();
        printf("Do you want to continue the test? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    greetingMessage();
    return 0;
}




