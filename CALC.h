/*----- FILE CALC.H --------------------------------------------------*/
/*                                                                    */
/* Header file for CALC.C PUSHPOP.C READTOKN.C                        */
/* a simple calculator                                                */
/*--------------------------------------------------------------------*/
#ifndef Already_defined	 	/*checking if key is defined*/		// Chnage : Using header guards so that this file can  not be 
#define Already_defined		/*defining the key*/				// Included multiple times.
typedef enum toks {
  T_INTEGER,
  T_PLUS,
  T_TIMES,
  T_MINUS,
  T_DIVIDE,
  T_EQUALS,
  T_STOP
} Token;
extern Token read_token(char buf[]);			// Chnage :  Declearing this function here using extern
typedef struct int_link  {
  struct int_link * next;
  int i;
} IntLink;
typedef struct int_stack {
  IntLink * top;
} IntStack;
extern void push(IntStack *, int);
extern int pop(IntStack *);
#endif											//Chnage : Endif for "Already_defined"
