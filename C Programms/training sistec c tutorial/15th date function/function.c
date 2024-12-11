#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Question {
    char question[100];
    char options[4][50];
    int correct_option;
};
// Function to display the question and options
void displayQuestion(struct Question q) {
    printf("%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i+1, q.options[i]);
    }
}
// Function to take user's answer
int getAnswer() {
    int answer;
    printf("Enter your answer: ");
    scanf("%d", &answer);
    return answer;
}
// Function to check if the answer is correct
void checkAnswer(struct Question q, int answer) {
    if (answer == q.correct_option) {
        printf("Correct!\n");
    } else {
        printf("Incorrect! The correct answer is option %d.\n", q.correct_option);
    }
}

int main() {
    struct Question questions[3]; // Array to hold three questions
    // Populate the questions
    strcpy(questions[0].question, "What is the capital of France?");
    strcpy(questions[0].options[0], "Paris");
    strcpy(questions[0].options[1], "London");
    strcpy(questions[0].options[2], "Berlin");
    strcpy(questions[0].options[3], "Rome");
    questions[0].correct_option = 1;
    strcpy(questions[1].question, "What is the largest planet in our solar system?");
    strcpy(questions[1].options[0], "Earth");
    strcpy(questions[1].options[1], "Jupiter");
    strcpy(questions[1].options[2], "Mars");
    strcpy(questions[1].options[3], "Saturn");
    questions[1].correct_option = 2;
    strcpy(questions[2].question, "Who wrote 'Romeo and Juliet'?");
    strcpy(questions[2].options[0], "William Shakespeare");
    strcpy(questions[2].options[1], "Charles Dickens");
    strcpy(questions[2].options[2], "Jane Austen");
    strcpy(questions[2].options[3], "Mark Twain");
    questions[2].correct_option = 1;
    // Ask each question one by one
    for (int i = 0; i < 3; i++) {
        printf("Question %d:\n", i+1);
        displayQuestion(questions[i]);
        int userAnswer = getAnswer();
        checkAnswer(questions[i], userAnswer);
    }
    return 0;
}
