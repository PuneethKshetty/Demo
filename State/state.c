#include <stdio.h>
#include <stdlib.h>
#include "Linkedlist.h"
#include "StateMachine.h"

int main() {
    
    enum State { NO_STATE = 0, STATE_1 = 1, STATE_2 = 2, STATE_3 = 3, STATE_4 = 4 } state;
  
    // set the state based on the size of the linked list
    if (size <= 0) {
        state = NO_STATE;
    }
    else if (size == 1) {
        state = STATE_1;
    }
    else if(size == 2){
        state = STATE_2;
    }
     else if(size == 3){
        state = STATE_3;
    }
     else if(size == 4){
        state = STATE_4;
    }
    else
    {
        printf("State is more than 4!");
    }

    // print the size of the state
    switch (state) {
        case NO_STATE:
            printf("No states available sorry:%d",size);
            break;
        case STATE_1:
            printf(" State is :%d",size);
            break;
        case STATE_2:
             printf("State is:%d",size);
            break;
        case STATE_3:
             printf("State is:%d",size);
            break;
        case STATE_4:
           printf("State is:%d",size);
           break;
        default:
           printf("No state avaialble");
           break;
    }
    return 0;
}
