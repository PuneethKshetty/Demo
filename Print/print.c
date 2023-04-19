//print anything if that state
#include "StateMachine.h"
#include "StatePrinting.h"
#include "Linkedlist.h"
#include <stdio.h>

void printState(State currentState) {
    switch (currentState) {
        case STATE_A:
            printf("State: A\n");
            break;
        case STATE_B:
            printf("State: B\n");
            break;
        case STATE_C:
            printf("State: C\n");
            break;
        default:
        printf("No state here");
        break;
    }
}

int main()
{
    State currentState = STATE_A;
    int input;
    while (1) {
        printf("Enter an integer input (or 0 to exit): ");
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        currentState = transition(currentState, input);
        printState(currentState);
    }
}
