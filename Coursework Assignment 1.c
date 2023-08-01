#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 100

char generateRandomChar() {
    // ASCII values for printable characters: 33 to 126
    return (char)(33 + rand() % 94);
}

void generatePassword(char* password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = generateRandomChar();
    }
    password[length] = '\0'; // Null-terminate the string
}

int main() {
    int passwordLength;
    char password[MAX_PASSWORD_LENGTH + 1];

    srand(time(0)); // Seed the random number generator with the current time

    printf("\n\n\t\t\t******---------WELCOME TO YOUR RELIABLE PASSWORD GENERATOR---------******\n");
    printf("\n\n*Enter the desired password length: ");
    scanf("%d", &passwordLength);

    if (passwordLength <= 0 || passwordLength > MAX_PASSWORD_LENGTH) {
        printf("\n\n\t\t!!!!------INVALID PASSWORD LENGTH.PLEASE CHOOSE A LENGTH BETWEEN 1 AND %d------!!!!\n\n", MAX_PASSWORD_LENGTH);
        return 1;
    }

    generatePassword(password, passwordLength);
    printf("\n\n*Your Generated Password: %s\n", password);

    return 0;
}
