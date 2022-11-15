#include <stdio.h>

#define ROWS 100
#define COLS 100

int main(){
// Declared a variable
    int cases;
    int array[ROWS][COLS];

// user inputs the amount of cases to check
    printf("Enter the cases:");
    scanf("%d", &cases);

//then loop the cases to determine each scenerio
    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Enter the scenerio:");
            scanf("%d",&array[i][j]);
        
        }
        
        
    }
    printf("\n");
    for(int i=0; i<ROWS;i++){
        for (int j = 0; j < COLS; j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }



    return 0;


}


































#include <stdio.h>
#include <string.h>
#include <ctype.h>


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
int main(){
    int noOfCases;

    int noOfSteps[noOfCases][100];

    // Collect no of cases from user
    printf("Enter the no of cases: ");
    scanf("%d", &noOfCases);
    char cases[noOfCases][100];

    printf("\nNo of cases: %d\n\n", noOfCases);

    // Store those cases 
    for (int i = 0; i < noOfCases; i++){
        char _case[100];

        printf("\nEnter case: ");
        scanf("%s", &cases[i]);

        int currentSteps = getNoOfSteps(cases[i]);

        // noOfSteps[i] = currentSteps;

        // printf("\nCurrent step: %d\n", currentSteps);
        // noOfSteps[i] = currentStep;
    } 

    // printf("\nPrinting result....");
    // for (int i = 0; i< noOfCases; i++){
    //     printf("\n\nCase %d: %s", i+1, cases[i]);
    //     printf("No of steps: %d", noOfSteps[i]);
    // }

    /*
    Collect 20 inputs from users;
    store those inputs inside the cases
    count theeir no of steps and store it inside that integer array
    Format them and print them out.
    */

   







    return 0;


}

