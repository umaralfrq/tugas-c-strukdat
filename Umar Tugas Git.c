#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 2024
#define MIN_LENGTH 1945

void lessThanRequired(int *lengthOfText){
    printf("The length of your text is less than specified, please update your text\n");
    printf("Length Before : %d\n", *lengthOfText);
    *lengthOfText = MIN_LENGTH;
}

void equalThanRequired(int *lengthOfText){
    printf("Thank you, Your text length is correct\n");
}

void moreThanRequired(int *lengthOfText){
    printf("Your text is too long, please reduce the text\n");
    printf("Length Before : %d\n", *lengthOfText);
    *lengthOfText = MIN_LENGTH;
}

int checkLenghtRequirement(char* text){
    int length = strlen(text);
    if (length < MIN_LENGTH)
        return 0;
    else if (length == MIN_LENGTH)
        return 1;
    else
        return 2;
}

int main() {
    int lengthOfText, selectOption;
    FILE *fptr = NULL;
    char text[MAX_LENGTH];

    fptr = fopen("C:/Users/pc/Desktop/file.txt", "r");

    if(fptr == NULL){
        printf("Error: Unable to open the file\n");
        exit(1);
    }

    if (fgets(text, MAX_LENGTH, fptr) == NULL) {
        printf("Error: Unable to read text from the file\n");
        exit(1);
    }

    fclose(fptr);

    lengthOfText = strlen(text);

    selectOption = checkLenghtRequirement(text);

    void (*functions[3])(int*) = {lessThanRequired, equalThanRequired, moreThanRequired};

    functions[selectOption](&lengthOfText);

    printf("\nThe Length is updated to %d", lengthOfText);

    return 0;
}
