/*
 * PLL.h
 *
 *  Created on: Jan 8, 2021
 *      Author: Hugo Boyce
 */

#ifndef PLL_H_
#define PLL_H_

/*---------------------------------------------------------------------------------------------------------*/
/* Includes           				                                                                       */
/*---------------------------------------------------------------------------------------------------------*/
#include "stdbool.h"
#include "inverter_control.h"

/*---------------------------------------------------------------------------------------------------------*/
/* Macros           				                                                                       */
/*---------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------------------------------*/
/* Type definitions           				                                                               */
/*---------------------------------------------------------------------------------------------------------*/
typedef struct {

	//volatile float I_Q;
	volatile float some_state_var;

} PLL_state_variables_t;


/*---------------------------------------------------------------------------------------------------------*/
/* Global variables to be made available externally                                                        */
/*---------------------------------------------------------------------------------------------------------*/
extern PLL_state_variables_t PLL_state_variables;


/*---------------------------------------------------------------------------------------------------------*/
/* Functions declaration                                                                            	   */
/*---------------------------------------------------------------------------------------------------------*/




#endif /* PLL_H_ */