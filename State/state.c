//for printing the state

#include<stdio.h>
#include<stdlib.h>

typedef enum{  //setting state
    state_1,
    state_2,
    state_3,
    state_4,
}state;

typedef enum{  //setting events
    no_event,
    event_1,
    event_2,
    event_3,
    event_4,
}event;

typedef struct{  //setting up a state machine
  state currState;
}StateMachine;


//Processing state functions
extern void InitState(StateMachine*);
extern void FirstState(StateMachine*, event);
extern void SecondState(StateMachine*, event);
extern void ProcEvent(StateMachine*, event);

void InitState(StateMachine* a)
{
   a->currState = state_1;
}

void FirstState(StateMachine* a,event e)
{
   if(e == event_1)
   {
      a->currState = state_2;
   }
}

void SecondState(StateMachine* a,event e)
{
   if(e == event_2)
   {
      a->currState = state_3;
   }
}

void ProcEvent(StateMachine* a, event e)
{
  switch(a->currState){
      case state_1:
        SecondState(a, e);
      break;

      case state_2:
        ThirdState(a, e);
      break;
}
}
    


int main(int argc, char** argv) {

    StateMachine sm;
    ProcEvent(&sm, event_1);

    return 0;
}
