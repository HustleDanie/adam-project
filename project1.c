#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <regex.h>


int getNoOfSteps(char _case[]){
    int counter = 0;

    for (int i = 0; i < strlen(_case); i++){
        char currentChar = _case[i];

        if (tolower(currentChar) == 'd'){
            break;
        }
        counter++;
    }

    return counter;

}

int checkCaseValidity(char _case[]){
    regex_t expression;
    int matcher;

    matcher = regcomp( &expression, "[^udUD]", 0);
    matcher = regexec(&expression, _case, 0, NULL, 0);

    return matcher;
}

void getValidCase(char *_case, char *_validCase){
    bool isValid = false;
    // char newCase[100];

    while (isValid == false){
        printf("\nYour case is invalid. Try again: ");
        scanf("%s", &_validCase);

        int result = checkCaseValidity(_validCase);
        if (result == 1){
            isValid = true;
        }
    }

printf("New case is %s", _validCase);    
    // return newCase;
}
int main(){
    int noOfCases;

    int noOfSteps[100];

    // Collect no of cases from user
    printf("Enter the no of cases: ");
    scanf("%d", &noOfCases);
    char cases[noOfCases][100];

    printf("\nNo of cases: %d\n", noOfCases);

    // Store those cases 
    for (int i = 0; i < noOfCases; i++){
        char _case[100];
        // char validCase[100];

        printf("\nEnter case: ");
        scanf("%s", &cases[i]);

        
        // if (!isValid){
        //     printf("This is a case: %s", getValidCase(cases[i]));
        // }

        int currentSteps = getNoOfSteps(cases[i]);

        noOfSteps[i] = currentSteps;

        // printf("\nCurrent step: %d\n", currentSteps);
        // noOfSteps[i] = currentStep;
    } 

//this code helps to print the program 
    printf("\nPrinting result....");
    for (int i = 0; i< noOfCases; i++){
        printf("\nCase %d: %s\t\t %d", i+1, cases[i], noOfSteps[i]);
        // printf("\nNo of steps: %d", noOfSteps[i]);
    }

    /*
    Collect 20 inputs from users;
    store those inputs inside the cases
    count theeir no of steps and store it inside that integer array
    Format them and print them out.
    */

   







    return 0;


}