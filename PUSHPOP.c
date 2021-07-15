/*----- FILE PUSHPOP.C -----------------------------------------------*/
/*                                                                    */
/* A push and pop function for a stack of integers                    */
/*--------------------------------------------------------------------*/
#include <stdlib.h>
#include "CALC.h"			// Change : Wrong header file was included
/*--------------------------------------------------------------------*/
/* input:  stk - stack of integers                                    */
/*         num - value to push on the stack                           */
/* action: get a link to hold the pushed value, push link on stack    */
/*                                                                    */
 void push(IntStack * stk, int num)		// Chnage : This function can't be of extern type as we have declared the body here
{
  IntLink * ptr;
  ptr       = (IntLink *) malloc( sizeof(IntLink));  /*  PUSHPOP1   */
  ptr->i    = num;                /*  PUSHPOP2  statement */
  ptr->next = stk->top;
  stk->top  = ptr;

}
/*--------------------------------------------------------------------*/
/* return: int value popped from stack                                */
/* action: pops top element from stack and gets return value from it  */
/*--------------------------------------------------------------------*/
 int pop(IntStack * stk)			// Chnage : This function can't be of extern type as we have declared the body here
{
  IntLink * ptr;
  int num;
  ptr      = stk->top;
  num      = ptr->i;
  stk->top = ptr->next;
  free(ptr);
  return num;
}
